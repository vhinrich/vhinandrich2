<?php

/**
 * @file
 * Do super awesome thing.
 */

/**
 * Defines a new plugin.
 */
$plugin = array(
  'form' => 'socialnetwork_tamper_instagram_body_form',
  // Optional validation callback.
  'callback' => 'socialnetwork_tamper_instagram_body_callback',
  'name' => 'Instagram Body',
  'multi' => 'direct',
  'category' => 'Social Networks',
);

/**
 * Implements onix_xml_tamper_abstract_form().
 */
function socialnetwork_tamper_instagram_body_form($importer, $element_key, $settings) {
  $form = array();
  $form['help']['#value'] = t('Get Instagram Body.');
  //
  // Other formy stuff here.
  //
  return $form;
}

/**
 * Implements callback function onix_xml_tamper_abstract_callback().
 */
function socialnetwork_tamper_instagram_body_callback($source, $item_key, $element_key, &$field, $settings) {
  if(!empty($field) && isset($field['text'])){
    $field = $field['text'];
  }else{
    $field = '';
  }
  // $field = preg_replace('/[^a-zA-Z0-9_ %\[\]\.\(\)\:\#\@%&-]/s', '', $field);
  //$field = truncate_utf8($field, 80, TRUE, TRUE);
}

