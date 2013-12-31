<?php


 /**
 * @file
 * Views definitions for views_challenge module.
 */
 
/**
 * Implements hook_views_data().
 */
function views_challenge_views_data() {
  $data = array();
  $data['users']['lesser_count'] = array(
    'title' => t('Lesser count'),
    'help' => t('User lesser count'),
    'field' => array(
      'handler' => 'views_challenge_field_handler',
    ),
  );
  return $data;
}