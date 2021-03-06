<?php
/**
 * @file
 * mqcristobal_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mqcristobal_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_entityqueue_api().
 */
function mqcristobal_features_entityqueue_api($module = NULL, $api = NULL) {
  if ($module == "entityqueue" && $api == "entityqueue_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mqcristobal_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function mqcristobal_features_default_entityform_type() {
  $items = array();
  $items['contact_form'] = entity_import('entityform_type', '{
    "type" : "contact_form",
    "label" : "Contact Form",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submit_button_text" : "Send it!",
      "submit_confirm_msg" : "Your message has been sent.",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "filtered_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : 0, "4" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "anonymous_links" : 0,
      "session_save" : 1
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}

/**
 * Implements hook_image_default_styles().
 */
function mqcristobal_features_image_default_styles() {
  $styles = array();

  // Exported image style: homepage_teaser_bg_media.
  $styles['homepage_teaser_bg_media'] = array(
    'label' => 'Homepage Teaser BG Media',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1920,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: metatag.
  $styles['metatag'] = array(
    'label' => 'metatag',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: portfolio.
  $styles['portfolio'] = array(
    'label' => 'Portfolio',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      4 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 480,
          'height' => 320,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: portfolio_full.
  $styles['portfolio_full'] = array(
    'label' => 'Portfolio Full',
    'effects' => array(
      11 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 600,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      12 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 600,
          'height' => 400,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: super_square_thumbnail.
  $styles['super_square_thumbnail'] = array(
    'label' => 'super_square_thumbnail',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 32,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
      8 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 32,
          'height' => 32,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function mqcristobal_features_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'content_form' => array(
      'name' => t('Content Form'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
