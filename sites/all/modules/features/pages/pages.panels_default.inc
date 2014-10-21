<?php
/**
 * @file
 * pages.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function pages_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'main_footer';
  $mini->category = 'Footer';
  $mini->admin_title = 'Main Footer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible:main_footer_3_column_layout';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'left_region' => NULL,
      'center_region' => NULL,
      'right_region' => NULL,
      'center_region_' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e42c2806-e7c3-4d99-b007-2aa469107ec2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-29f48036-3d3f-42db-bdba-09b0dc349bbd';
    $pane->panel = 'center_region';
    $pane->type = 'views';
    $pane->subtype = 'most_popular_hashtags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'clearfix',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '29f48036-3d3f-42db-bdba-09b0dc349bbd';
    $display->content['new-29f48036-3d3f-42db-bdba-09b0dc349bbd'] = $pane;
    $display->panels['center_region'][0] = 'new-29f48036-3d3f-42db-bdba-09b0dc349bbd';
    $pane = new stdClass();
    $pane->pid = 'new-1db8ab39-2e96-4cef-9f34-d29ed912e29f';
    $pane->panel = 'center_region';
    $pane->type = 'views';
    $pane->subtype = 'most_viewed';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1db8ab39-2e96-4cef-9f34-d29ed912e29f';
    $display->content['new-1db8ab39-2e96-4cef-9f34-d29ed912e29f'] = $pane;
    $display->panels['center_region'][1] = 'new-1db8ab39-2e96-4cef-9f34-d29ed912e29f';
    $pane = new stdClass();
    $pane->pid = 'new-012311f7-0fe9-47b2-9a0f-9928ebcbfcdd';
    $pane->panel = 'center_region_';
    $pane->type = 'block';
    $pane->subtype = 'vhinandrich_blocks-vr_footer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '012311f7-0fe9-47b2-9a0f-9928ebcbfcdd';
    $display->content['new-012311f7-0fe9-47b2-9a0f-9928ebcbfcdd'] = $pane;
    $display->panels['center_region_'][0] = 'new-012311f7-0fe9-47b2-9a0f-9928ebcbfcdd';
    $pane = new stdClass();
    $pane->pid = 'new-e07cb37c-b707-46e3-8cbd-5be2f84ecc28';
    $pane->panel = 'left_region';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e07cb37c-b707-46e3-8cbd-5be2f84ecc28';
    $display->content['new-e07cb37c-b707-46e3-8cbd-5be2f84ecc28'] = $pane;
    $display->panels['left_region'][0] = 'new-e07cb37c-b707-46e3-8cbd-5be2f84ecc28';
    $pane = new stdClass();
    $pane->pid = 'new-3de5d6c5-db58-40cf-bcd2-eb59e15336b5';
    $pane->panel = 'right_region';
    $pane->type = 'views';
    $pane->subtype = 'latest_instagram';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '6',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3de5d6c5-db58-40cf-bcd2-eb59e15336b5';
    $display->content['new-3de5d6c5-db58-40cf-bcd2-eb59e15336b5'] = $pane;
    $display->panels['right_region'][0] = 'new-3de5d6c5-db58-40cf-bcd2-eb59e15336b5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e07cb37c-b707-46e3-8cbd-5be2f84ecc28';
  $mini->display = $display;
  $export['main_footer'] = $mini;

  return $export;
}
