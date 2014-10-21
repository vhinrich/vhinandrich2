<?php
/**
 * @file
 * pages.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function pages_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'main_footer_3_column_layout';
  $layout->admin_title = 'Main Footer 3 Column Layout';
  $layout->admin_description = '';
  $layout->category = 'MQCristobal';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0px',
        'region_separation' => '0px',
        'row_separation' => '0',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_region',
          1 => 'center_region',
          2 => 'right_region',
        ),
        'parent' => 'main',
        'class' => 'row',
      ),
      'left_region' => array(
        'type' => 'region',
        'title' => 'Left Region',
        'width' => '25',
        'width_type' => 'px',
        'parent' => 'main-row',
        'class' => 'col-sm-4 col-lg-3',
      ),
      'center_region' => array(
        'type' => 'region',
        'title' => 'Center Region',
        'width' => '290',
        'width_type' => 'px',
        'parent' => 'main-row',
        'class' => 'col-sm-4 col-lg-6',
      ),
      'right_region' => array(
        'type' => 'region',
        'title' => 'Right Region',
        'width' => '314',
        'width_type' => 'px',
        'parent' => 'main-row',
        'class' => 'col-sm-4 col-lg-3',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center_region_',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'center_region_' => array(
        'type' => 'region',
        'title' => 'Center Region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $export['main_footer_3_column_layout'] = $layout;

  return $export;
}
