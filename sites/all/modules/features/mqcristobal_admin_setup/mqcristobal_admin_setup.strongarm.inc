<?php
/**
 * @file
 * mqcristobal_admin_setup.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mqcristobal_admin_setup_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'adminimal';
  $export['admin_theme'] = $strongarm;

  return $export;
}
