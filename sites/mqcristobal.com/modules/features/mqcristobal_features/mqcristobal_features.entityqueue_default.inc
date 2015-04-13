<?php
/**
 * @file
 * mqcristobal_features.entityqueue_default.inc
 */

/**
 * Implements hook_entityqueue_default_queues().
 */
function mqcristobal_features_entityqueue_default_queues() {
  $export = array();

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'article_queue';
  $queue->label = 'Article queue';
  $queue->language = 'en';
  $queue->handler = 'simple';
  $queue->target_type = 'node';
  $queue->settings = array(
    'target_bundles' => array(
      'article' => 'article',
    ),
    'min_size' => '0',
    'max_size' => '0',
    'act_as_queue' => 0,
  );
  $export['article_queue'] = $queue;

  return $export;
}
