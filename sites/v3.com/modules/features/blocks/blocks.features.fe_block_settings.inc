<?php
/**
 * @file
 * blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['content_social_buttons-content_social_buttons'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'content_social_buttons',
    'module' => 'content_social_buttons',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vhinandrich3' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich3',
        'weight' => 0,
      ),
      'vhinandrich4' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich4',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-secondary-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-secondary-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'taxonomy/term/*
node/*',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vhinandrich3' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich3',
        'weight' => 0,
      ),
      'vhinandrich4' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich4',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['mqcristobal_gse-mqc_gse_search_box_block'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'mqc_gse_search_box_block',
    'module' => 'mqcristobal_gse',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vhinandrich3' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'vhinandrich3',
        'weight' => -13,
      ),
      'vhinandrich4' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich4',
        'weight' => -13,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['mqcristobal_gse-mqc_gse_search_results_block'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'mqc_gse_search_results_block',
    'module' => 'mqcristobal_gse',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vhinandrich3' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich3',
        'weight' => 0,
      ),
      'vhinandrich4' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich4',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-recent'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'vhinandrich3' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich3',
        'weight' => 0,
      ),
      'vhinandrich4' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich4',
        'weight' => 0,
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
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vhinandrich3' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich3',
        'weight' => 0,
      ),
      'vhinandrich4' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich4',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['panels_mini-main_footer'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main_footer',
    'module' => 'panels_mini',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vhinandrich3' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich3',
        'weight' => 0,
      ),
      'vhinandrich4' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'vhinandrich4',
        'weight' => -19,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['statistics-popular'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'popular',
    'module' => 'statistics',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vhinandrich3' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich3',
        'weight' => 0,
      ),
      'vhinandrich4' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich4',
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
      'seven' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vhinandrich3' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'vhinandrich3',
        'weight' => 0,
      ),
      'vhinandrich4' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'vhinandrich4',
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
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vhinandrich3' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'vhinandrich3',
        'weight' => 0,
      ),
      'vhinandrich4' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'vhinandrich4',
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
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vhinandrich3' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich3',
        'weight' => -11,
      ),
      'vhinandrich4' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich4',
        'weight' => -11,
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
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vhinandrich3' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich3',
        'weight' => 0,
      ),
      'vhinandrich4' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich4',
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
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vhinandrich3' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich3',
        'weight' => -6,
      ),
      'vhinandrich4' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich4',
        'weight' => -6,
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
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'vhinandrich3' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich3',
        'weight' => -8,
      ),
      'vhinandrich4' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich4',
        'weight' => -8,
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
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vhinandrich3' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich3',
        'weight' => 0,
      ),
      'vhinandrich4' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich4',
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
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'vhinandrich3' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich3',
        'weight' => -5,
      ),
      'vhinandrich4' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich4',
        'weight' => -5,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-new'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'new',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vhinandrich3' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich3',
        'weight' => 0,
      ),
      'vhinandrich4' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich4',
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
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vhinandrich3' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich3',
        'weight' => 0,
      ),
      'vhinandrich4' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich4',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['vhinandrich_blocks-vr_footer'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'vr_footer',
    'module' => 'vhinandrich_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vhinandrich3' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich3',
        'weight' => 0,
      ),
      'vhinandrich4' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich4',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['vhinandrich_blocks-vr_header'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'vr_header',
    'module' => 'vhinandrich_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vhinandrich3' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich3',
        'weight' => 0,
      ),
      'vhinandrich4' => array(
        'region' => 'site_header',
        'status' => 1,
        'theme' => 'vhinandrich4',
        'weight' => -15,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['vhinandrich_blocks-vr_header_video'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'vr_header_video',
    'module' => 'vhinandrich_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vhinandrich3' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich3',
        'weight' => 0,
      ),
      'vhinandrich4' => array(
        'region' => 'site_header',
        'status' => 1,
        'theme' => 'vhinandrich4',
        'weight' => -16,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['vhinandrich_blocks-vr_map'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'vr_map',
    'module' => 'vhinandrich_blocks',
    'node_types' => array(),
    'pages' => 'about-us
contact-us',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vhinandrich3' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich3',
        'weight' => 0,
      ),
      'vhinandrich4' => array(
        'region' => 'above_footer',
        'status' => 1,
        'theme' => 'vhinandrich4',
        'weight' => -20,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-articles-photos_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'articles-photos_block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vhinandrich3' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich3',
        'weight' => 0,
      ),
      'vhinandrich4' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich4',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-articles-videos_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'articles-videos_block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vhinandrich3' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich3',
        'weight' => 0,
      ),
      'vhinandrich4' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich4',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-instagrams-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'instagrams-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vhinandrich3' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich3',
        'weight' => 0,
      ),
      'vhinandrich4' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich4',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-latest_instagram-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'latest_instagram-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vhinandrich3' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich3',
        'weight' => 0,
      ),
      'vhinandrich4' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich4',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-more_posts-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'more_posts-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vhinandrich3' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich3',
        'weight' => 0,
      ),
      'vhinandrich4' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich4',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-most_popular_hashtags-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'most_popular_hashtags-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vhinandrich3' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich3',
        'weight' => 0,
      ),
      'vhinandrich4' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich4',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-most_viewed-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'most_viewed-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vhinandrich3' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich3',
        'weight' => 0,
      ),
      'vhinandrich4' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich4',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-nodequeue_1-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'nodequeue_1-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vhinandrich3' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich3',
        'weight' => 0,
      ),
      'vhinandrich4' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vhinandrich4',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-timeline-timeline_nav'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'timeline-timeline_nav',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'timeline-x',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vhinandrich3' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'vhinandrich3',
        'weight' => -8,
      ),
      'vhinandrich4' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'vhinandrich4',
        'weight' => -8,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
