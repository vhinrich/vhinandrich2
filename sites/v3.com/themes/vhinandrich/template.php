<?php

/**
 * @file template.php
 */

function vhinandrich_js_alter(&$scripts){
    if (variable_get('uglifyjs_skip_uglify', FALSE)) {
    return;
  }
  $uglify = vhinandrich_uglifyjs_info($scripts);

  $uglify_map = array();
  if ($cache = cache_get('uglifyjs_map') && isset($cache) && count($cache->data)>0) {
    $uglify_map = $cache->data;
  }
  else {
    $uglify = vhinandrich_uglifyjs_info($scripts);

    foreach ($uglify as $script) {
      $uglify_map[$script] = array('data' => $script);
    }
    uglifyjs_uglify($uglify_map);
    cache_set('uglifyjs_map', $uglify_map, 'cache', CACHE_TEMPORARY);
  }

  foreach ($uglify_map as $script) {
    // If there was a problem minifying the script we won't make any changes.
    if (isset($script['uglified_data']) && isset($scripts[$script['data']])) {
      $scripts[$script['data']]['data'] = $script['uglified_data'];
    }
  }
}

function vhinandrich_preprocess_page(&$vars){
    
}

function vhinandrich_uglifyjs_info($scripts){
    //$scripts = array(
    //    // Core.
    //    'misc/ajax.js',
    //    'misc/authorize.js',
    //    'misc/autocomplete.js',
    //    'misc/batch.js',
    //    'misc/collapse.js',
    //    'misc/drupal.js',
    //    'misc/form.js',
    //    'misc/jquery.ba-bbq.js',
    //    'misc/jquery.cookie.js',
    //    'misc/jquery.form.js',
    //    'misc/jquery.js',
    //    'misc/jquery.once.js',
    //    'misc/machine-name.js',
    //    'misc/progress.js',
    //    'misc/states.js',
    //    'misc/tabledrag.js',
    //    'misc/tableheader.js',
    //    'misc/tableselect.js',
    //    'misc/textarea.js',
    //    'misc/timezone.js',
    //    'misc/vertical-tabs.js'
    //);
    $tmpScripts = array();
    foreach($scripts as $key => $script){
        if(strstr($key, '.js') && !strstr($key, '//')){
            $tmpScripts[] = $key;
        }
    }
    return $tmpScripts;
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

function vhinandrich_form_alter(&$form){
    if(isset($form['#node']) && $form['#node']->type=='webform'){
      if(isset($form['submitted'])){
        $formChildren = element_children($form['submitted']);
        foreach($formChildren as $key){
            $child = $form['submitted'][$key];
            if($child['#type']=='webform_email'){
                $form['submitted'][$key]['#attributes']['class'][] = 'form-control';
            }
        }
      }
    }
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

function vhinandrich_preprocess_field_social_buttons__full(&$vars){  
}

function vhinandrich_preprocess_field_social_button__full(&$vars){
  $vars['classes_array'][] = 'fa';
  $item = reset($vars['items']);
  $vars['classes_array'][] = 'fa-' . $item['name'];
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