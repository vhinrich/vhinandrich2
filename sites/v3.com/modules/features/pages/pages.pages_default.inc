<?php
/**
 * @file
 * pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search';
  $page->task = 'page';
  $page->admin_title = 'Search';
  $page->admin_description = '';
  $page->path = 'search';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'search';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Search';
  $display->uuid = '4ac67747-a749-4d2e-9a63-35a469269f53';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3ce34700-0233-4284-b010-6873d9b6dda0';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'mqcristobal_gse-mqc_gse_search_box_block';
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
    $pane->uuid = '3ce34700-0233-4284-b010-6873d9b6dda0';
    $display->content['new-3ce34700-0233-4284-b010-6873d9b6dda0'] = $pane;
    $display->panels['center'][0] = 'new-3ce34700-0233-4284-b010-6873d9b6dda0';
    $pane = new stdClass();
    $pane->pid = 'new-6c10cdd4-0cb1-4fe2-9b90-fc269d6f9e03';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'mqcristobal_gse-mqc_gse_search_results_block';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6c10cdd4-0cb1-4fe2-9b90-fc269d6f9e03';
    $display->content['new-6c10cdd4-0cb1-4fe2-9b90-fc269d6f9e03'] = $pane;
    $display->panels['center'][1] = 'new-6c10cdd4-0cb1-4fe2-9b90-fc269d6f9e03';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3ce34700-0233-4284-b010-6873d9b6dda0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search'] = $page;

  return $pages;

}
