<?php

/**
 * @file
 * Do super awesome thing.
 */

/**
 * Defines a new plugin.
 */
$plugin = array(
  'form' => 'socialnetwork_tamper_instagram_type_form',
  // Optional validation callback.
  'callback' => 'socialnetwork_tamper_instagram_type_callback',
  'name' => 'Instagram Type',
  'multi' => 'direct',
  'category' => 'Social Networks',
);

/**
 * Implements onix_xml_tamper_abstract_form().
 */
function socialnetwork_tamper_instagram_type_form($importer, $element_key, $settings) {
  $form = array();
  $form['help']['#value'] = t('Get Instagram Type.');
  //
  // Other formy stuff here.
  //
  return $form;
}

/**
 * Implements callback function onix_xml_tamper_abstract_callback().
 */
function socialnetwork_tamper_instagram_type_callback($source, $item_key, $element_key, &$field, $settings) {
  if($field=='image')
    $field = 'Photos';
  elseif($field=='video')
    $field = 'Videos';
    
}

