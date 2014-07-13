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
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
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
  $handler->name = 'page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'home',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0em',
        'region_separation' => '0em',
        'row_separation' => '0em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
        'class' => 'middle-row container',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top_region',
        ),
        'parent' => 'main',
        'class' => 'top-row',
      ),
      'top_region' => array(
        'type' => 'region',
        'title' => 'Top Region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'top-region',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom_region',
        ),
        'parent' => 'main',
        'class' => 'bottom-row',
      ),
      'bottom_region' => array(
        'type' => 'region',
        'title' => 'Bottom Region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'bottom-region',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top_region' => NULL,
      'bottom_region' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Home';
  $display->uuid = 'b2f4db0d-ed0f-4fef-ae4f-89d9a447ad2c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9c82f094-116a-4fd5-b62c-ea59928d2155';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'timeline';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '6',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'timeline_page_1',
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
    $pane->uuid = '9c82f094-116a-4fd5-b62c-ea59928d2155';
    $display->content['new-9c82f094-116a-4fd5-b62c-ea59928d2155'] = $pane;
    $display->panels['center'][0] = 'new-9c82f094-116a-4fd5-b62c-ea59928d2155';
    $pane = new stdClass();
    $pane->pid = 'new-cf1602d9-57cf-4770-9640-0eb4320e9aa0';
    $pane->panel = 'top_region';
    $pane->type = 'views_panes';
    $pane->subtype = 'featured-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cf1602d9-57cf-4770-9640-0eb4320e9aa0';
    $display->content['new-cf1602d9-57cf-4770-9640-0eb4320e9aa0'] = $pane;
    $display->panels['top_region'][0] = 'new-cf1602d9-57cf-4770-9640-0eb4320e9aa0';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

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
