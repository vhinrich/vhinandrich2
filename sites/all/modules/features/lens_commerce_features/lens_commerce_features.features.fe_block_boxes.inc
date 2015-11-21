<?php
/**
 * @file
 * lens_commerce_features.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function lens_commerce_features_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'About us top header logo';
  $fe_block_boxes->format = 'super_full_html';
  $fe_block_boxes->machine_name = 'about_us_top_header_logo';
  $fe_block_boxes->body = '<div class="top-header-container">
<div class="image-container-row row">
<div class="image-container-col">
<div style="max-height:550px;overflow:hidden">
<img src="/sites/commerce.vhinandrich.com/files/zoom-37456962-3.jpg" class="img-responsive center-block" style="width:100%" />
</div>
</div>
</div>
<div class="text-container-row row top-header-logo-text-2">
<div class="text-container-col col-sm-12">
<div class="text-container-wrapper">
<div class="text-content text-center">
<div><a href="[site:url]"><h1 style="font-weight:700;display:inline;padding:0;font-family: \'Open Sans\', sans-serif">About [site:name]</h1></a></div>
</div>
</div>
</div>
</div>
</div>';

  $export['about_us_top_header_logo'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Copyright text';
  $fe_block_boxes->format = 'super_full_html';
  $fe_block_boxes->machine_name = 'copyright_text';
  $fe_block_boxes->body = '<div class="text-center">
Copyright © [current-date:custom:Y] [site:name]. All rights reserved.
</div>';

  $export['copyright_text'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Social Links';
  $fe_block_boxes->format = 'super_full_html';
  $fe_block_boxes->machine_name = 'social_links';
  $fe_block_boxes->body = '<div class="social-media-links" style="font-size: 35px">
<ul class="list-unstyled list-inline"><li><a href="#"><i class="fa fa-facebook-official"></i></a></li>
<li><a href="#"><i class="fa fa-twitter"></i></a></li>
<li><a href="#"><i class="fa fa-instagram"></i></a></li>
</ul></div>';

  $export['social_links'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Top header logo';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'top_header_logo';
  $fe_block_boxes->body = '<div class="top-header-container">
<div class="image-container-row row">
<div class="image-container-col col-sm-12">
<div>
<img src="/sites/default/files/st-dvr500gg.jpg" class="img-responsive center-block" style="padding:10% 0" />
</div>
</div>
</div>
<div class="text-container-row row">
<div class="text-container-col col-sm-12">
<div class="text-container-wrapper">
<div class="text-content text-center">
<div><a href="[site:url]"><h1 style="font-weight:300;display:inline;padding:0 30px;font-family: \'Open Sans\', sans-serif"><strong style="font-weight:600">SG</strong>LENS</h1></a></div>
<div style="margin-top:15px"><h3>[site:slogan]</h3></div>
<div style="margin-top:40px;position:relative;z-index:9"><a href="#block-system-main" class="btn btn-lg btn-default text-uppercase">Discover more</a></div>
</div>
</div>
</div>
</div>
</div>';

  $export['top_header_logo'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Top Header Logo 2';
  $fe_block_boxes->format = 'super_full_html';
  $fe_block_boxes->machine_name = 'top_header_logo_2';
  $fe_block_boxes->body = '<div class="top-header-container">
<div class="image-container-row row">
<div class="image-container-col">
<div style="max-height:550px">
<img src="/sites/commerce.vhinandrich.com/files/zoom-37034904-3.jpg" class="img-responsive center-block" style="width:100%" />
</div>
</div>
</div>
<div class="text-container-row row top-header-logo-text-2">
<div class="text-container-col col-sm-6">
<div class="text-container-wrapper">
<div class="text-content text-center">
<div><a href="[site:url]"><img src="/sites/commerce.vhinandrich.com/files/styles/large/public/eyesight-logo-white.png?itok=ERE7gXri" class="img-responsive" style="max-width:360px;display:block;margin:0 auto;width:98%" /><h1 style="display:none;font-weight:700;padding:0 30px;font-family: \'Open Sans\', sans-serif">[site:name]</h1></a></div>
<div style="margin-top:15px"><h3>[site:slogan]</h3></div>
<div style="margin-top:40px;position:relative;z-index:9"><a href="#block-system-main" class="btn btn-lg btn-default text-uppercase">Discover more</a></div>
</div>
</div>
</div>
</div>
</div>';

  $export['top_header_logo_2'] = $fe_block_boxes;

  return $export;
}
