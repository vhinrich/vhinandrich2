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
 * Implements hook_views_api().
 */
function mqcristobal_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entity_rule_setting().
 */
function mqcristobal_features_default_entity_rule_setting() {
  $items = array();
  $items['1'] = entity_import('entity_rule_setting', '{
    "id" : "1",
    "entity_type" : "entityform",
    "bundle" : "contact_form",
    "op" : "entityform_submission",
    "rules_config" : "rules_entityform_notification_email_admin",
    "weight" : "0",
    "args" : {
      "email_subject" : "Message received from mqcristobal",
      "email_body" : "Please view the message in mqcristobal site",
      "show_submission" : 1,
      "to_email" : "mq.cristobal@gmail.com"
    },
    "false_msg" : null
  }');
  $items['2'] = entity_import('entity_rule_setting', '{
    "id" : "2",
    "entity_type" : "entityform",
    "bundle" : "contact_form",
    "op" : "entityform_submission",
    "rules_config" : "rules_entityform_notification_email_submitter",
    "weight" : "1",
    "args" : {
      "email_subject" : "Thank you!",
      "email_body" : "Thank you for your message! We will get back to you within 24 hours!",
      "show_submission" : 0
    },
    "false_msg" : null
  }');
  return $items;
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
      "submit_button_text" : "Send",
      "submit_confirm_msg" : "",
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
