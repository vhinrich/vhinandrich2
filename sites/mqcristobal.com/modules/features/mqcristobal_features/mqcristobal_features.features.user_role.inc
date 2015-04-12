<?php
/**
 * @file
 * mqcristobal_features.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function mqcristobal_features_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: blogger.
  $roles['blogger'] = array(
    'name' => 'blogger',
    'weight' => 3,
  );

  return $roles;
}
