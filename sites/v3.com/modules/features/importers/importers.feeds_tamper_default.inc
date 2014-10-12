<?php
/**
 * @file
 * importers.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function importers_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'instagram_import-blank_source_1-default_value';
  $feeds_tamper->importer = 'instagram_import';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'Instagram',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['instagram_import-blank_source_1-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'instagram_import-jsonpath_parser_1-instagram_title';
  $feeds_tamper->importer = 'instagram_import';
  $feeds_tamper->source = 'jsonpath_parser:1';
  $feeds_tamper->plugin_id = 'instagram_title';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Instagram Title';
  $export['instagram_import-jsonpath_parser_1-instagram_title'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'instagram_import-jsonpath_parser_10-instagram_media_display';
  $feeds_tamper->importer = 'instagram_import';
  $feeds_tamper->source = 'jsonpath_parser:10';
  $feeds_tamper->plugin_id = 'instagram_media_display';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Instagram Media Display';
  $export['instagram_import-jsonpath_parser_10-instagram_media_display'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'instagram_import-jsonpath_parser_10-strtotime';
  $feeds_tamper->importer = 'instagram_import';
  $feeds_tamper->source = 'jsonpath_parser:10';
  $feeds_tamper->plugin_id = '';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['instagram_import-jsonpath_parser_10-strtotime'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'instagram_import-jsonpath_parser_2-instagram_type';
  $feeds_tamper->importer = 'instagram_import';
  $feeds_tamper->source = 'jsonpath_parser:2';
  $feeds_tamper->plugin_id = 'instagram_type';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Instagram Type';
  $export['instagram_import-jsonpath_parser_2-instagram_type'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'instagram_import-jsonpath_parser_3-instagram_media';
  $feeds_tamper->importer = 'instagram_import';
  $feeds_tamper->source = 'jsonpath_parser:3';
  $feeds_tamper->plugin_id = 'instagram_media';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Instagram Media';
  $export['instagram_import-jsonpath_parser_3-instagram_media'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'instagram_import-jsonpath_parser_5-instagram_media';
  $feeds_tamper->importer = 'instagram_import';
  $feeds_tamper->source = 'jsonpath_parser:5';
  $feeds_tamper->plugin_id = 'instagram_media';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Instagram Media';
  $export['instagram_import-jsonpath_parser_5-instagram_media'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'instagram_import-jsonpath_parser_7-instagram_body';
  $feeds_tamper->importer = 'instagram_import';
  $feeds_tamper->source = 'jsonpath_parser:7';
  $feeds_tamper->plugin_id = 'instagram_body';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Instagram Body';
  $export['instagram_import-jsonpath_parser_7-instagram_body'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'instagram_import-jsonpath_parser_8-default_value';
  $feeds_tamper->importer = 'instagram_import';
  $feeds_tamper->source = 'jsonpath_parser:8';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => '0',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['instagram_import-jsonpath_parser_8-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'instagram_import-jsonpath_parser_9-default_value';
  $feeds_tamper->importer = 'instagram_import';
  $feeds_tamper->source = 'jsonpath_parser:9';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => '0',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['instagram_import-jsonpath_parser_9-default_value'] = $feeds_tamper;

  return $export;
}
