<?php
/**
 * @file
 * mqcristobal_admin_setup.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mqcristobal_admin_setup_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
