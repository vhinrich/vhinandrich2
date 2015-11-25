<?php
/**
 * @file
 * lens_commerce_features.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function lens_commerce_features_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['backup_migrate-quick_backup'] = array(
    'cache' => 1,
    'css' => NULL,
    'custom' => 0,
    'delta' => 'quick_backup',
    'js' => NULL,
    'module' => 'backup_migrate',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sglens' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'sglens',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-about_us_top_header_logo'] = array(
    'cache' => -1,
    'css' => NULL,
    'custom' => 0,
    'js' => NULL,
    'machine_name' => 'about_us_top_header_logo',
    'module' => 'block',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => 'about*',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'hidden',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -16,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sglens' => array(
        'region' => 'bottom_header',
        'status' => 1,
        'theme' => 'sglens',
        'weight' => -16,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-copyright_text'] = array(
    'cache' => -1,
    'css' => NULL,
    'custom' => 0,
    'js' => NULL,
    'machine_name' => 'copyright_text',
    'module' => 'block',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'hidden',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -14,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sglens' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'sglens',
        'weight' => -14,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-social_links'] = array(
    'cache' => -1,
    'css' => NULL,
    'custom' => 0,
    'js' => NULL,
    'machine_name' => 'social_links',
    'module' => 'block',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'hidden',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -15,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sglens' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'sglens',
        'weight' => -15,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-top_header_logo'] = array(
    'cache' => -1,
    'css' => NULL,
    'custom' => 0,
    'js' => NULL,
    'machine_name' => 'top_header_logo',
    'module' => 'block',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -13,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sglens' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'sglens',
        'weight' => -15,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-top_header_logo_2'] = array(
    'cache' => -1,
    'css' => '',
    'custom' => 0,
    'js' => '',
    'machine_name' => 'top_header_logo_2',
    'module' => 'block',
    'node_types' => array(),
    'noscript' => '',
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'hidden',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -17,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sglens' => array(
        'region' => 'bottom_header',
        'status' => 1,
        'theme' => 'sglens',
        'weight' => -17,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['commerce_cart-cart'] = array(
    'cache' => -1,
    'css' => NULL,
    'custom' => 0,
    'delta' => 'cart',
    'js' => NULL,
    'module' => 'commerce_cart',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => 'checkout*
cart*',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'hidden',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -15,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sglens' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'sglens',
        'weight' => -15,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['commerce_checkout_progress-indication'] = array(
    'cache' => -1,
    'css' => '',
    'custom' => 0,
    'delta' => 'indication',
    'js' => '',
    'module' => 'commerce_checkout_progress',
    'node_types' => array(),
    'noscript' => '',
    'pages' => 'checkout/*
cart',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -10,
      ),
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -10,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -10,
      ),
      'sglens' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'sglens',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['devel-execute_php'] = array(
    'cache' => -1,
    'css' => NULL,
    'custom' => 0,
    'delta' => 'execute_php',
    'js' => NULL,
    'module' => 'devel',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sglens' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'sglens',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['devel-switch_user'] = array(
    'cache' => -1,
    'css' => NULL,
    'custom' => 0,
    'delta' => 'switch_user',
    'js' => NULL,
    'module' => 'devel',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sglens' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'sglens',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['diff-inline'] = array(
    'cache' => 1,
    'css' => NULL,
    'custom' => 0,
    'delta' => 'inline',
    'js' => NULL,
    'module' => 'diff',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sglens' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'sglens',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-devel'] = array(
    'cache' => -1,
    'css' => NULL,
    'custom' => 0,
    'delta' => 'devel',
    'js' => NULL,
    'module' => 'menu',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sglens' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'sglens',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-features'] = array(
    'cache' => -1,
    'css' => NULL,
    'custom' => 0,
    'delta' => 'features',
    'js' => NULL,
    'module' => 'menu',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sglens' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'sglens',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-user-account-menu'] = array(
    'cache' => -1,
    'css' => NULL,
    'custom' => 0,
    'delta' => 'menu-user-account-menu',
    'js' => NULL,
    'module' => 'menu',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sglens' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'sglens',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-recent'] = array(
    'cache' => 1,
    'css' => NULL,
    'custom' => 0,
    'delta' => 'recent',
    'js' => NULL,
    'module' => 'node',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'sglens' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'sglens',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-syndicate'] = array(
    'cache' => -1,
    'css' => NULL,
    'custom' => 0,
    'delta' => 'syndicate',
    'js' => NULL,
    'module' => 'node',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sglens' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'sglens',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['panels_mini-contact_us'] = array(
    'cache' => -1,
    'css' => NULL,
    'custom' => 0,
    'delta' => 'contact_us',
    'js' => NULL,
    'module' => 'panels_mini',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => 'cart*
checkout*
user*
contact-us',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'hidden',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sglens' => array(
        'region' => 'top_footer',
        'status' => 1,
        'theme' => 'sglens',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['sglens_main-sglens_shopping_cart_icon'] = array(
    'cache' => 1,
    'css' => NULL,
    'custom' => 0,
    'delta' => 'sglens_shopping_cart_icon',
    'js' => NULL,
    'module' => 'sglens_main',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => 'checkout*
cart*',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'hidden',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -16,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sglens' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'sglens',
        'weight' => -16,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-help'] = array(
    'cache' => -1,
    'css' => NULL,
    'custom' => 0,
    'delta' => 'help',
    'js' => NULL,
    'module' => 'system',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sglens' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'sglens',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'css' => NULL,
    'custom' => 0,
    'delta' => 'main',
    'js' => NULL,
    'module' => 'system',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sglens' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'sglens',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'css' => NULL,
    'custom' => 0,
    'delta' => 'main-menu',
    'js' => NULL,
    'module' => 'system',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sglens' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'sglens',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-management'] = array(
    'cache' => -1,
    'css' => NULL,
    'custom' => 0,
    'delta' => 'management',
    'js' => NULL,
    'module' => 'system',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sglens' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'sglens',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'css' => NULL,
    'custom' => 0,
    'delta' => 'navigation',
    'js' => NULL,
    'module' => 'system',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sglens' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'sglens',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'css' => NULL,
    'custom' => 0,
    'delta' => 'powered-by',
    'js' => NULL,
    'module' => 'system',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 10,
      ),
      'bartik' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 10,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'sglens' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'sglens',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'css' => NULL,
    'custom' => 0,
    'delta' => 'user-menu',
    'js' => NULL,
    'module' => 'system',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sglens' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'sglens',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'css' => NULL,
    'custom' => 0,
    'delta' => 'login',
    'js' => NULL,
    'module' => 'user',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'sglens' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'sglens',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-new'] = array(
    'cache' => 1,
    'css' => NULL,
    'custom' => 0,
    'delta' => 'new',
    'js' => NULL,
    'module' => 'user',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sglens' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'sglens',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-online'] = array(
    'cache' => -1,
    'css' => NULL,
    'custom' => 0,
    'delta' => 'online',
    'js' => NULL,
    'module' => 'user',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => 1,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sglens' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'sglens',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-49752f912f8ab9a08d50b004eeffd55d'] = array(
    'cache' => -1,
    'css' => NULL,
    'custom' => 0,
    'delta' => '49752f912f8ab9a08d50b004eeffd55d',
    'js' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'dashboard_main',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sglens' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'sglens',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-bf5ee37bd60ea98abcb761c967f50021'] = array(
    'cache' => -1,
    'css' => NULL,
    'custom' => 0,
    'delta' => 'bf5ee37bd60ea98abcb761c967f50021',
    'js' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sglens' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'sglens',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-c117238b5c55f571b4e7a454037d5f6e'] = array(
    'cache' => -1,
    'css' => NULL,
    'custom' => 0,
    'delta' => 'c117238b5c55f571b4e7a454037d5f6e',
    'js' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'noscript' => NULL,
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'sglens' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'sglens',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
