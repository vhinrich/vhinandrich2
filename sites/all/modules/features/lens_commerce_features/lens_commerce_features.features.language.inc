<?php
/**
 * @file
 * lens_commerce_features.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function lens_commerce_features_locale_default_languages() {
  $languages = array();

  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => '',
    'weight' => 0,
  );
  // Exported language: fil.
  $languages['fil'] = array(
    'language' => 'fil',
    'name' => 'Filipino',
    'native' => 'Filipino',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'fil',
    'weight' => 0,
  );
  // Exported language: ja.
  $languages['ja'] = array(
    'language' => 'ja',
    'name' => 'Japanese',
    'native' => '日本語',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'ja',
    'weight' => 0,
  );
  return $languages;
}
