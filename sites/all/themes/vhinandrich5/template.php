<?php
/**
 * @file
 * template.php
 */


/**
 * Implements template_preprocess_html().
 */
function vhinandrich5_preprocess_html(&$variables) {
  $variables['classes_array'][] = 'theme-vhinandrich5';
}

/**
 * Implements template_preprocess_page().
 */
function vhinandrich5_preprocess_page(&$variables) {
  $variables['container_class'] = 'container-fluid';
}
