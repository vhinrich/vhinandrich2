<?php
/**
 * @file
 * mqcristobal_features.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function mqcristobal_features_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Copyright';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'copyright';
  $fe_block_boxes->body = '<p>© COPYRIGHT 2015</p>';

  $export['copyright'] = $fe_block_boxes;

  return $export;
}
