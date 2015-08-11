<?php
/**
 * @file
 * lens_commerce_features.entityqueue_default.inc
 */

/**
 * Implements hook_entityqueue_default_queues().
 */
function lens_commerce_features_entityqueue_default_queues() {
  $export = array();

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'banner_slides';
  $queue->label = 'Banner Slides';
  $queue->language = 'en';
  $queue->handler = 'simple';
  $queue->target_type = 'node';
  $queue->settings = array(
    'target_bundles' => array(
      'slide' => 'slide',
    ),
    'min_size' => '0',
    'max_size' => '0',
    'act_as_queue' => 0,
  );
  $export['banner_slides'] = $queue;

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'lens_type_order';
  $queue->label = 'Lens type order';
  $queue->language = 'en';
  $queue->handler = 'simple';
  $queue->target_type = 'node';
  $queue->settings = array(
    'target_bundles' => array(
      'lens_type' => 'lens_type',
    ),
    'min_size' => '0',
    'max_size' => '0',
    'act_as_queue' => 0,
  );
  $export['lens_type_order'] = $queue;

  return $export;
}
