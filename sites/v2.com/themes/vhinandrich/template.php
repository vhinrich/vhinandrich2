<?php

/**
 * @file template.php
 */

function vhinandrich_js_alter(&$javascript){
  global $user;
  
  $path = $_GET['q'];
  foreach($javascript as $key => $script){
    if(strstr($key, 'jquery.parallax.min.js') || strstr($key, 'waypoints.min.js')){
        $javascript[$key]['scope'] = 'footer';
    }
  }
  //if(strpos(strtolower($path),'admin')>-1 || $user->uid > 0){
  //    //$jquery_module_path = drupal_get_path('module', 'jquery_update');
  //    //$jquery_path_old = $jquery_module_path . '/replace/jquery/1.5/jquery.min.js'; //depends on the jquery version set
  //    //$jquery_path_new = $jquery_module_path . '/replace/jquery/1.7/jquery.min.js'; //depends on the jquery version set
  //    //$javascript[$jquery_path_old]['data'] = $jquery_path_new;
  //}else{
  //  // Replace with current version.
  //  if(module_exists('jquery_update')){
  //    $jquery_module_path = drupal_get_path('module', 'jquery_update');
  //    $jquery_path_old = $jquery_module_path . '/replace/jquery/1.5/jquery.min.js'; //depends on the jquery version set
  //    $jquery_path_new = $jquery_module_path . '/replace/jquery/1.7/jquery.min.js'; //depends on the jquery version set
  //    $javascript[$jquery_path_old]['data'] = $jquery_path_new;
  //  }else{
  //    $jQuery_version = '1.8.3'; //jquery 1.10 got some issues with the msie object
  //    $javascript['misc/jquery.js']['data'] = drupal_get_path('theme', 'bootstrap_subtheme').'/js/jquery-' . $jQuery_version . '.min.js';
  //    $javascript['misc/jquery.js']['version'] = $jQuery_version;
  //  }
  //}
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
    
    if($field_settings = $vars['field_settings']){
        $entityFieldSettings = entity_load('field_collection_item', array($field_settings[LANGUAGE_NONE][0]['value']));
        $entityFieldSettings = reset($entityFieldSettings);
        $vars['content_css'] = '';
        if(isset($entityFieldSettings->field_css_code) && isset($entityFieldSettings->field_css_code[LANGUAGE_NONE][0])){
            $vars['content_css'] = '<style>' . $entityFieldSettings->field_css_code[LANGUAGE_NONE][0]['value'] . '</style>';
        }
        $vars['content_js'] = '';
        if(isset($entityFieldSettings->field_js_code) && isset($entityFieldSettings->field_js_code[LANGUAGE_NONE][0])){
            $vars['content_js'] = '<script>' . $entityFieldSettings->field_js_code[LANGUAGE_NONE][0]['value'] . '</script>';
        }
    }
    
    //
    // Template suggestions
    //
    $vars['theme_hook_suggestions'][] = 'node__' . $vars['type'] . '__' . $vars['view_mode'];
    $vars['theme_hook_suggestions'][] = 'node____' . $vars['view_mode'];
}

function vhinandrich_preprocess_node_page__main_front(&$vars){
    $node = node_load($vars['nid']);
    $vars['title'] = $node->title;
    
    $url = url('node/' . $vars['nid']);
    $urls = explode('/', $url);
    $vars['id'] = end($urls);
}

function vhinandrich_preprocess_node_page__front_nodes(&$vars){
    $url = url('node/' . $vars['nid']);
    $urls = explode('/', $url);
    $vars['id'] = end($urls);
}

function vhinandrich_preprocess_node_video__front_nodes(&$vars){
    $node = node_load($vars['nid']);
    $vars['title'] = $node->title;
    
    $url = url('node/' . $vars['nid']);
    $url = url('node/' . $vars['nid']);
    $urls = explode('/', $url);
    $vars['id'] = end($urls);
}

function vhinandrich_preprocess_node_photo__front_nodes(&$vars){
    $node = node_load($vars['nid']);
    $vars['title'] = $node->title;
    
    $url = url('node/' . $vars['nid']);
    $url = url('node/' . $vars['nid']);
    $urls = explode('/', $url);
    $vars['id'] = end($urls);
    
    $vars['photo_count'] = count($vars['field_photo']);
    if($vars['photo_count'] > 1){
        $vars['classes_array'][] = 'more-than-one';
        
        $newFieldPhoto = array();
        $newFieldPhoto2 = array();
        if($vars['photo_count'] < 12){
            $multiplier = ($vars['photo_count'] % 4) * 4;
            if($multiplier==0)
                $multiplier = 4;
        }else{
            $multiplier = 1;
        }
        $fieldPhotoChildren = array_intersect_key($vars['content']['field_photo'], element_children($vars['content']['field_photo']));
        for($i=0;$i<$multiplier;$i++){
            $newFieldPhoto = array_merge($newFieldPhoto, $vars['field_photo']);
            $newFieldPhoto2 = array_merge($newFieldPhoto2, $fieldPhotoChildren);
        }
        $vars['field_photo'] = $newFieldPhoto;
        $vars['content']['field_photo']['#items'] = $newFieldPhoto;
        array_walk($newFieldPhoto2, '_photoWeightUpdate');
        $vars['content']['field_photo'] = array_merge($vars['content']['field_photo'], $newFieldPhoto2);
    }
    
    
    $vars['attributes_array']['data-photo-count'] = $vars['photo_count'];
}
function _photoWeightUpdate(&$value, $key){
    $value['#weight'] = $key;
}


function vhinandrich_preprocess_field(&$vars){
    if($vars['element']['#view_mode'] == 'front_nodes' && $vars['element']['#bundle'] == 'video'){
        if($vars['element']['#field_name']=='field_video'){
            $vars['classes_array'][] = 'col-md-7';
            //foreach($vars['element']['#items'] as $key => $item){
            //    if($key>0){
            //        $entity = file_load($item['fid']);
            //        $entity_view = file_view($entity, 'media_preview');
            //        $vars['element'][$key] = $entity_view;
            //        $vars['items'][$key] = $entity_view;
            //    }
            //}
        }
        if($vars['element']['#field_name']=='body'){
            $vars['classes_array'][] = 'col-md-5';
        }
    }
    if($vars['element']['#view_mode'] == 'front_nodes' && $vars['element']['#bundle'] == 'photo'){
        if($vars['element']['#field_name'] == 'field_photo'){
            $photoElements = element_children($vars['element']);
            foreach($photoElements as $key){
                $vars['element'][$key]['file']['#attributes']['data-test'] = 'test123';
            }
            $vars['attributes_array']['data-depth'] = '.8';
            $vars['classes_array'][] = 'layer';
        }
    }
}
