<?php
/**
 * @file
 * importers.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function importers_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'timeline';
  $ds_view_mode->label = 'Timeline';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'file' => 'file',
  );
  $export['timeline'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'timeline_background';
  $ds_view_mode->label = 'Timeline Background';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['timeline_background'] = $ds_view_mode;

  return $export;
}
