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
  $feeds_tamper->id = 'instagram_import-jsonpath_parser_1-instagram_title';
  $feeds_tamper->importer = 'instagram_import';
  $feeds_tamper->source = 'jsonpath_parser:1';
  $feeds_tamper->plugin_id = 'instagram_title';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Instagram Title';
  $export['instagram_import-jsonpath_parser_1-instagram_title'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'instagram_import-jsonpath_parser_3-instagram_media';
  $feeds_tamper->importer = 'instagram_import';
  $feeds_tamper->source = 'jsonpath_parser:3';
  $feeds_tamper->plugin_id = 'instagram_media';
  $feeds_tamper->settings = '';
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
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Instagram Media';
  $export['instagram_import-jsonpath_parser_5-instagram_media'] = $feeds_tamper;

  return $export;
}
