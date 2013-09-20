<?php

/**
 * @file
 * Default view template to display a item in an RSS feed.
 *
 * @ingroup views_templates
 */

 $node = node_load($title);
 $rendered = drupal_render(node_view($node, 'parallax')); //get rendered value
 $value = array(
  'node' => $node,
  'rendered' => $rendered,
 );
 echo drupal_json_encode($value);
?>,
