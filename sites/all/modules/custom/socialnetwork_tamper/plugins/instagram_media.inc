<?php

/**
 * @file
 * Do super awesome thing.
 */

/**
 * Defines a new plugin.
 */
$plugin = array(
  'form' => 'socialnetwork_tamper_instagram_media_form',
  // Optional validation callback.
  'callback' => 'socialnetwork_tamper_instagram_media_callback',
  'name' => 'Instagram Media',
  'multi' => 'direct',
  'category' => 'Social Networks',
);

/**
 * Implements onix_xml_tamper_abstract_form().
 */
function socialnetwork_tamper_instagram_media_form($importer, $element_key, $settings) {
  $form = array();
  $form['help']['#value'] = t('Get Instagram Media.');
  //
  // Other formy stuff here.
  //
  return $form;
}

/**
 * Implements callback function onix_xml_tamper_abstract_callback().
 */
function socialnetwork_tamper_instagram_media_callback($source, $item_key, $element_key, &$field, $settings) {
  switch ($source->items[$item_key]['jsonpath_parser:2']){
    case 'image':
    case 'Photos':
      //$field = $source->items[$item_key]['jsonpath_parser:3'];
      $file = system_retrieve_file($source->items[$item_key]['jsonpath_parser:3'], 'public://', TRUE);
      $field = $file->uri;
      break;
    case 'video':
    case 'Videos':
      $field = $source->items[$item_key]['jsonpath_parser:5'];
      break;
  }
}

