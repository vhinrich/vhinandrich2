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
        $vars['theme_hook_suggestions'][] = 'field__field_media__gallery__article__timeline';
    }
}