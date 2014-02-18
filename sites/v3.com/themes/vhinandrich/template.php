<?php

/**
 * @file template.php
 */

function vhinandrich_js_alter(&$javascript){

}

function vhinandrich_preprocess_node(&$vars, $hook) {
    $function = __FUNCTION__ . '_' . $vars['node']->type;
    // for content type in general
    if (function_exists($function))
        $function($vars, $hook);
    
    // view_mode version
    $teaserfunc = $function . '__' . $vars['view_mode'];
    if (function_exists($teaserfunc))
        $teaserfunc($vars, $hook);
    
    // view mode function for all node types
    $vmfunc = __FUNCTION__ . '__' . $vars['view_mode'];
    if (function_exists($vmfunc))
        $vmfunc($vars, $hook);
        
    $vars['classes_array'][] = $vars['view_mode'];
        
    //
    // Template suggestions
    //
    $vars['theme_hook_suggestions'][] = 'node__' . $vars['type'] . '__' . $vars['view_mode'];
    $vars['theme_hook_suggestions'][] = 'node____' . $vars['view_mode'];
}


function vhinandrich_preprocess_field(&$vars){
    $function = __FUNCTION__ . '_' . $vars['element']['#field_name'];
    // for content type in general
    if (function_exists($function))
        $function($vars);
    
    // view_mode version
    $teaserfunc = $function . '__' . $vars['element']['#view_mode'];
    if (function_exists($teaserfunc))
        $teaserfunc($vars);
}

function vhinandrich_preprocess_field_field_media__timeline(&$vars){
    if(count($vars['items'])>1){
        $vars['items'] = array(reset($vars['items']));
        $vars['classes_array'][] = 'gallery';
        $vars['classes_array'][] = 'gallery-' . $vars['element']['#object']->nid;
        $vars['attributes_array']['data-node-id'] = $vars['element']['#object']->nid;
        $vars['theme_hook_suggestions'][] = 'field__field_media__gallery__article__timeline';
    }
}

function vhinandrich_preprocess_field_field_media__full(&$vars){
    if(count($vars['items'])>1){
        $vars['classes_array'][] = 'gallery-full';
        $vars['classes_array'][] = 'gallery-full-' . $vars['element']['#object']->nid;
        $vars['classes_array'][] = 'slide';
        $vars['attributes_array']['data-node-id'] = $vars['element']['#object']->nid;
        $vars['attributes_array']['data-ride'] = 'carousel';
        $vars['attributes_array']['id'] = 'carousel-' . $vars['element']['#object']->nid;
        $vars['theme_hook_suggestions'][] = 'field__field_media__gallery__article__full';
    }
}

function vhinandrich_preprocess_field_field_media__default(&$vars){
    if(count($vars['items'])>1){
        $vars['classes_array'][] = 'gallery-full';
        $vars['classes_array'][] = 'gallery-full-' . $vars['element']['#object']->nid;
        $vars['classes_array'][] = 'slide';
        $vars['attributes_array']['data-node-id'] = $vars['element']['#object']->nid;
        $vars['attributes_array']['data-ride'] = 'carousel';
        $vars['attributes_array']['id'] = 'carousel-' . $vars['element']['#object']->nid;
        $vars['theme_hook_suggestions'][] = 'field__field_media__gallery__article__full';
    }
}

/**
* Implements hook_html_head_alter().
*/
function vhinandrich_html_head_alter(&$head_elements) {
  if(arg(0)=='node' && is_numeric(arg(1))){
    if(isset($head_elements['metatag_twitter:card'])){
      $node = node_load(arg(1));
      if(isset($node->field_media[LANGUAGE_NONE][0])){
        if($node->field_media[LANGUAGE_NONE][0]['type']=='image'){}
        else{
            $head_elements['metatag_twitter:card']['#value'] = 'player';
        }
        
      }
    }
  }
}