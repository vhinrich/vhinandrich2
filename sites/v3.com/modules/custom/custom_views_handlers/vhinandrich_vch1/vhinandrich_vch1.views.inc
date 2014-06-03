<?php
/**
 * Implements hook_views_data_alter().
 */
function vhinandrich_vch1_views_data_alter(&$data) {
  $data['node']['year_date'] = array(
    'title' => 'Year Date',
    'help' => 'Year date',
    'field' => array(
      'handler' => 'vhiandrich_vch1_year_date',
    ),
  );
}