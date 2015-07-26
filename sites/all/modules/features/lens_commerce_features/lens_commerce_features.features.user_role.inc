<?php
/**
 * @file
 * lens_commerce_features.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function lens_commerce_features_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: store manager.
  $roles['store manager'] = array(
    'name' => 'store manager',
    'weight' => 3,
  );

  return $roles;
}
