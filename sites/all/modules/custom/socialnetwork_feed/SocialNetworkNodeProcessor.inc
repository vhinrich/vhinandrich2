<?php
/**
* A simple parser that extends FeedsNodeProcessor
*/
class SocialNetworkNodeProcessor extends FeedsNodeProcessor {
  /**
   * @}
   */

  /**
   * Process the result of the parsing stage.
   *
   * @param FeedsSource $source
   *   Source information about this import.
   * @param FeedsParserResult $parser_result
   *   The result of the parsing stage.
   */
  public function process(FeedsSource $source, FeedsParserResult $parser_result) {
    $state = $source->state(FEEDS_PROCESS);
    //watchdog('test', drupal_json_encode($parser_result));

    $contentType = $source->importer->processor->config['content_type'];

    while ($item = $parser_result->shiftItem()) {

      $entity_id = null;

      if(empty($entity_id)){
        // Check if this item already exists.
        $entity_id = $this->existingEntityId($source, $parser_result);
      }

      $skip_existing = $this->config['update_existing'] == FEEDS_SKIP_EXISTING;

      // If it exists, and we are not updating, pass onto the next item.
      if ($entity_id && $skip_existing & !$force_update) {
        continue;
      }

      $hash = $this->hash($item);
      $changed = ($hash !== $this->getHash($entity_id));
      $force_update = $this->config['skip_hash_check'];

      $excludeStory = false; //exclude story flag

      //check title (xpathparser:2)
      //check ed-msg (xpathparser:8)
      if(empty($item['jsonpath_parser:5'])){
        $message = 'Media is not set. Item Skipped.';
        $source->log('import', $message, array(), WATCHDOG_ERROR);
        $excludeStory = true;
      }

      // Do not proceed if the item exists, has not changed, and we're not
      // forcing the update.
      if ($entity_id && !$changed && !$force_update) {
        continue;
      }

      if($excludeStory){
        continue;
      }

      try {

        // Build a new entity.
        if (empty($entity_id)) {
          $entity = $this->newEntity($source);
          $this->newItemInfo($entity, $source->feed_nid, $hash);
        }

        // Load an existing entity.
        else {
          $entity = $this->entityLoad($source, $entity_id);

          // The feeds_item table is always updated with the info for the most recently processed entity.
          // The only carryover is the entity_id.
          $this->newItemInfo($entity, $source->feed_nid, $hash);
          $entity->feeds_item->entity_id = $entity_id;

        }

        // Set property and field values.
        $this->map($source, $parser_result, $entity);
        $this->entityValidate($entity);

        // Allow modules to alter the entity before saving.
        module_invoke_all('feeds_presave', $source, $entity, $item);
        if (module_exists('rules')) {
          rules_invoke_event('feeds_import_'. $source->importer()->id, $entity);
        }

        // Enable modules to skip saving at all.
        if (!empty($entity->feeds_item->skip)) {
          continue;
        }
        $entity->nodeStatus = 1;
        if($excludeStory){
          if(empty($entity->title))
            $entity->title = '(No title)';
          $entity->nodeStatus = 0;
        }

        // This will throw an exception on failure.
        $this->entitySaveAccess($entity);
        $this->entitySave($entity);

        // Track progress.
        if (empty($entity_id)) {
          $state->created++;
        }
        else {
          $state->updated++;
        }
      }

      // Something bad happened, log it.
      catch (Exception $e) {
        $state->failed++;
        drupal_set_message($e->getMessage(), 'warning');
        $message = $e->getMessage();
        $message .= '<h3>Original item</h3>';
        $message .= '<pre>' . var_export($item, TRUE) . '</pre>';
        $message .= '<h3>Entity</h3>';
        $message .= '<pre>' . var_export($entity, TRUE) . '</pre>';
        $source->log('import', $message, array(), WATCHDOG_ERROR);
      }
    }

    // Set messages if we're done.
    if ($source->progressImporting() != FEEDS_BATCH_COMPLETE) {
      return;
    }
    $info = $this->entityInfo();
    $tokens = array(
      '@entity' => strtolower($info['label']),
      '@entities' => strtolower($info['label plural']),
    );
    $messages = array();
    if ($state->created) {
      $messages[] = array(
       'message' => format_plural(
          $state->created,
          'Created @number @entity.',
          'Created @number @entities.',
          array('@number' => $state->created) + $tokens
        ),
      );
    }
    if ($state->updated) {
      $messages[] = array(
       'message' => format_plural(
          $state->updated,
          'Updated @number @entity.',
          'Updated @number @entities.',
          array('@number' => $state->updated) + $tokens
        ),
      );
    }
    if ($state->failed) {
      $messages[] = array(
       'message' => format_plural(
          $state->failed,
          'Failed importing @number @entity.',
          'Failed importing @number @entities.',
          array('@number' => $state->failed) + $tokens
        ),
        'level' => WATCHDOG_ERROR,
      );
    }
    if (empty($messages)) {
      $messages[] = array(
        'message' => t('There are no new @entities.', array('@entities' => strtolower($info['label plural']))),
      );
    }
    foreach ($messages as $message) {
      drupal_set_message($message['message']);
      $source->log('import', $message['message'], array(), isset($message['level']) ? $message['level'] : WATCHDOG_INFO);
    }
  }

    /**
   * Save a node.
   */
  public function entitySave($entity) {
    node_save($entity);
  }

  /**
   * Get nid of an existing feed item node if available.
   */
  protected function existingEntityId(FeedsSource $source, FeedsParserResult $result) {
    if ($nid = parent::existingEntityId($source, $result)) {
      return $nid;
    }

    // Iterate through all unique targets and test whether they do already
    // exist in the database.
    foreach ($this->uniqueTargets($source, $result) as $target => $value) {
      switch ($target) {
        case 'nid':
          $nid = db_query("SELECT nid FROM {node} WHERE nid = :nid", array(':nid' => $value))->fetchField();
          break;
        case 'title':
          $nid = db_query("SELECT nid FROM {node} WHERE title = :title AND type = :type", array(':title' => $value, ':type' => $this->config['content_type']))->fetchField();
          break;
        case 'feeds_source':
          if ($id = feeds_get_importer_id($this->config['content_type'])) {
            $nid = db_query("SELECT fs.feed_nid FROM {node} n JOIN {feeds_source} fs ON n.nid = fs.feed_nid WHERE fs.id = :id AND fs.source = :source", array(':id' => $id, ':source' => $value))->fetchField();
          }
          break;
      }
      if ($nid) {
        // Return with the first nid found.
        return $nid;
      }
    }
    return 0;
  }
}
