<?php
/**
 * @file
 * mqcristobal_features.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mqcristobal_features_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['backup_migrate-quick_backup'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'quick_backup',
    'module' => 'backup_migrate',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mqcristobal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobal',
        'weight' => 0,
      ),
      'mqcristobalv2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobalv2',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-copyright'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'copyright',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mqcristobal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobal',
        'weight' => 0,
      ),
      'mqcristobalv2' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'mqcristobalv2',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['blog-recent'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'blog',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mqcristobal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobal',
        'weight' => 0,
      ),
      'mqcristobalv2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobalv2',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['devel-execute_php'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'execute_php',
    'module' => 'devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mqcristobal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobal',
        'weight' => 0,
      ),
      'mqcristobalv2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobalv2',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['devel-switch_user'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'switch_user',
    'module' => 'devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mqcristobal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobal',
        'weight' => 0,
      ),
      'mqcristobalv2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobalv2',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['diff-inline'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'inline',
    'module' => 'diff',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mqcristobal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobal',
        'weight' => 0,
      ),
      'mqcristobalv2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobalv2',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-devel'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'devel',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mqcristobal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobal',
        'weight' => 0,
      ),
      'mqcristobalv2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobalv2',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-features'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'features',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mqcristobal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobal',
        'weight' => 0,
      ),
      'mqcristobalv2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobalv2',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-recent'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mqcristobal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobal',
        'weight' => 0,
      ),
      'mqcristobalv2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobalv2',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-syndicate'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'syndicate',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mqcristobal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobal',
        'weight' => 0,
      ),
      'mqcristobalv2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobalv2',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-help'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mqcristobal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobal',
        'weight' => 0,
      ),
      'mqcristobalv2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobalv2',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mqcristobal' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'mqcristobal',
        'weight' => 0,
      ),
      'mqcristobalv2' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'mqcristobalv2',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mqcristobal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobal',
        'weight' => 0,
      ),
      'mqcristobalv2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobalv2',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-management'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'management',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mqcristobal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobal',
        'weight' => 0,
      ),
      'mqcristobalv2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobalv2',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mqcristobal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobal',
        'weight' => 0,
      ),
      'mqcristobalv2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobalv2',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 10,
      ),
      'mqcristobal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobal',
        'weight' => -9,
      ),
      'mqcristobalv2' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'mqcristobalv2',
        'weight' => -9,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mqcristobal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobal',
        'weight' => 0,
      ),
      'mqcristobalv2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobalv2',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mqcristobal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobal',
        'weight' => 0,
      ),
      'mqcristobalv2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobalv2',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-new'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'new',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mqcristobal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobal',
        'weight' => 0,
      ),
      'mqcristobalv2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobalv2',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-online'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'online',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'mqcristobal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobal',
        'weight' => 0,
      ),
      'mqcristobalv2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mqcristobalv2',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
