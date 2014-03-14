<?php
/**
 * @file
 * content_types.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function content_types_taxonomy_default_vocabularies() {
  return array(
    'hastags' => array(
      'name' => 'Hastags',
      'machine_name' => 'hastags',
      'description' => 'Hashtags',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'social_network' => array(
      'name' => 'Social Network',
      'machine_name' => 'social_network',
      'description' => 'Social Network',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Use tags to group articles on similar topics into categories.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'type' => array(
      'name' => 'Type',
      'machine_name' => 'type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
