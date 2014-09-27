<?php

/**
 * @file
 * Do super awesome thing.
 */

/**
 * Defines a new plugin.
 */
$plugin = array(
  'form' => 'socialnetwork_tamper_instagram_media_display_form',
  // Optional validation callback.
  'callback' => 'socialnetwork_tamper_instagram_media_display_callback',
  'name' => 'Instagram Media Display',
  'multi' => 'direct',
  'category' => 'Social Networks',
);

/**
 * Implements onix_xml_tamper_abstract_form().
 */
function socialnetwork_tamper_instagram_media_display_form($importer, $element_key, $settings) {
  $form = array();
  $form['help']['#value'] = t('Get Instagram Media Display.');
  //
  // Other formy stuff here.
  //
  return $form;
}

/**
 * Implements callback function onix_xml_tamper_abstract_callback().
 */
function socialnetwork_tamper_instagram_media_display_callback($source, $item_key, $element_key, &$field, $settings) {
  switch ($source->items[$item_key]['jsonpath_parser:2']){
    case 'image':
    case 'Photos':
      $field = $source->items[$item_key]['jsonpath_parser:3'];
      break;
    case 'video':
    case 'Videos':
      $field = $source->items[$item_key]['jsonpath_parser:3'];
      break;
  }
  $file_url = $field;
  $tmp_file_uri = file_default_scheme().'://'.basename($file_url);
  if (!file_exists($tmp_file_uri)){
    $file = system_retrieve_file($file_url, file_default_scheme().'://'.basename($file_url), TRUE);
    if($file){
      $field = $file->uri;
    }
  }else{
    $field = $tmp_file_uri;
  }
}
