<?php
/**
 * @file
 * importers.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function importers_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'instagram_import';
  $feeds_importer->config = array(
    'name' => 'Instagram Import',
    'description' => 'Instagram Import',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsJSONPathParser',
      'config' => array(
        'context' => '$.*',
        'sources' => array(
          'jsonpath_parser:0' => 'id',
          'jsonpath_parser:1' => 'caption',
          'jsonpath_parser:2' => 'type',
          'jsonpath_parser:3' => 'images.standard_resolution.url',
          'jsonpath_parser:4' => 'created_time',
          'jsonpath_parser:5' => 'videos.standard_resolution.url',
          'jsonpath_parser:6' => 'tags.*',
          'jsonpath_parser:7' => 'caption',
          'jsonpath_parser:8' => 'location.latitude',
          'jsonpath_parser:9' => 'location.longitude',
          'jsonpath_parser:10' => 'images.standard_resolution.url',
        ),
        'debug' => array(
          'options' => array(
            'context' => 0,
            'jsonpath_parser:0' => 0,
            'jsonpath_parser:1' => 0,
            'jsonpath_parser:2' => 0,
            'jsonpath_parser:3' => 0,
            'jsonpath_parser:4' => 0,
            'jsonpath_parser:5' => 0,
            'jsonpath_parser:6' => 0,
            'jsonpath_parser:7' => 0,
            'jsonpath_parser:8' => 0,
            'jsonpath_parser:9' => 0,
            'jsonpath_parser:10' => 0,
          ),
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'jsonpath_parser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'jsonpath_parser:1',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'jsonpath_parser:2',
            'target' => 'field_type',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          3 => array(
            'source' => 'jsonpath_parser:3',
            'target' => 'field_media',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'jsonpath_parser:4',
            'target' => 'field_date:start',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'jsonpath_parser:5',
            'target' => 'field_media',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Blank source 1',
            'target' => 'field_social_network',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'jsonpath_parser:6',
            'target' => 'field_hashtags',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          8 => array(
            'source' => 'jsonpath_parser:7',
            'target' => 'body',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'jsonpath_parser:8',
            'target' => 'field_location:lat',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'jsonpath_parser:9',
            'target' => 'field_location:lng',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'jsonpath_parser:10',
            'target' => 'field_media_display_image',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'full_html',
        'skip_hash_check' => 1,
        'bundle' => 'article',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['instagram_import'] = $feeds_importer;

  return $export;
}
