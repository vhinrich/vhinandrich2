<?php
/**
 * @file
 * mqcristobal_features.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function mqcristobal_features_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Copyright';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'copyright';
  $fe_block_boxes->body = '<p>© COPYRIGHT 2015</p>';

  $export['copyright'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Social Links';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'social_links';
  $fe_block_boxes->body = '<div class="container-fluid">
<strong>Follow me</strong><ul class="list-unstyled list-inline" style="font-size:3em">
<li><a href="https://www.facebook.com/markquirviencristobal"><i class="fa fa-facebook-official"></i></a></li>
<li><a href="https://twitter.com/vhin0210"><i class="fa fa-twitter"></i></a></li>
<li><a href="https://instagram.com/vhin0210"><i class="fa fa-instagram"></i></a></li>
<li><a href="https://www.drupal.org/u/vhin0210"><i class="fa fa-drupal"></i></a></li>
<li><a href="https://github.com/vhin0210"><i class="fa fa-github"></i></a></li>
</ul>
</div>';

  $export['social_links'] = $fe_block_boxes;

  return $export;
}
