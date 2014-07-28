<?php

/**
 * @file
 * template.php
 */

 function mqcristobal_preprocess_html(&$vars){
    $google_font = array(
        '#tag' => 'link',
        '#attributes' => array(
            'href' => 'http://fonts.googleapis.com/css?family=Open+Sans:300italic,400italic,600italic,700italic,800italic,400,300,600,700,800|Oswald:400,700,300',
            'rel' => 'stylesheet',
            'type' => 'text/css'
        )
    );
    drupal_add_html_head($google_font, 'google_font');

    $fontawesome = array(
        '#tag' => 'link',
        '#attributes' => array(
            'href' => '//maxcdn.bootstrapcdn.com/font-awesome/4.1.0/css/font-awesome.min.css',
            'rel' => 'stylesheet'
        )
    );
    drupal_add_html_head($fontawesome, 'fontawesome');


 }


function mqcristobal_preprocess_node(&$vars){
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

function mqcristobal_preprocess_field(&$vars, $hook){
    $function = __FUNCTION__ . '__' . $vars['element']['#field_name'];
    if (function_exists($function))
        $function($vars, $hook);
}

function mqcristobal_preprocess_field__field_background_media(&$vars, $hook){
    foreach($vars['items'] as $key => $item){
        $img_url = image_style_url($item['file']['#style_name'], $item['file']['#path']);
        $vars['items'][$key]['image_url'] = $img_url;
    }
}

function mqcristobal_preprocess_node__homepage_teaser_1(&$vars){
    if(empty($vars['field_background_media'])){
        $vars['content']['field_background_media'] = array('#markup' => '<div class="field field-name-field-background-media field-type-file field-label-hidden"><div class="field-items"><div class="field-item even"><div class="background-media-empty">&nbsp;</div></div></div></div>');
    }
}
function mqcristobal_preprocess_node__homepage_teaser_2(&$vars){
    if(empty($vars['field_background_media'])){
        $vars['content']['field_background_media'] = array('#markup' => '<div class="field field-name-field-background-media field-type-file field-label-hidden"><div class="field-items"><div class="field-item even"><div class="background-media-empty">&nbsp;</div></div></div></div>');
    }
}
function mqcristobal_preprocess_node__homepage_teaser_3(&$vars){
    if(empty($vars['field_background_media'])){
        $vars['content']['field_background_media'] = array('#markup' => '<div class="field field-name-field-background-media field-type-file field-label-hidden"><div class="field-items"><div class="field-item even"><div class="background-media-empty">&nbsp;</div></div></div></div>');
    }
}

function mqcristobal_preprocess_taxonomy_term(&$vars){
    $function = __FUNCTION__ . '_' . $vars['vocabulary_machine_name'];
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
    $vars['theme_hook_suggestions'][] = 'taxonomy_term__' . $vars['vocabulary_machine_name'] . '__' . $vars['view_mode'];
    $vars['theme_hook_suggestions'][] = 'taxonomy_term____' . $vars['view_mode'];
}

function mqcristobal_preprocess_taxonomy_term__homepage_teaser_1(&$vars){
    if(empty($vars['field_background_media'])){
        $vars['content']['field_background_media'] = array('#markup' => '<div class="field field-name-field-background-media field-type-file field-label-hidden"><div class="field-items"><div class="field-item even"><div class="background-media-empty">&nbsp;</div></div></div></div>');
    }
}
function mqcristobal_preprocess_taxonomy_term__homepage_teaser_2(&$vars){
    if(empty($vars['field_background_media'])){
        $vars['content']['field_background_media'] = array('#markup' => '<div class="field field-name-field-background-media field-type-file field-label-hidden"><div class="field-items"><div class="field-item even"><div class="background-media-empty">&nbsp;</div></div></div></div>');
    }
}
function mqcristobal_preprocess_taxonomy_term__homepage_teaser_3(&$vars){
    if(empty($vars['field_background_media'])){
        $vars['content']['field_background_media'] = array('#markup' => '<div class="field field-name-field-background-media field-type-file field-label-hidden"><div class="field-items"><div class="field-item even"><div class="background-media-empty">&nbsp;</div></div></div></div>');
    }
}

function mqcristobal_preprocess_views_view(&$vars){
    $function = __FUNCTION__ . '_' . $vars['view']->name;

    if(function_exists($function)){
        $function($vars);
    }

    $display_function = $function . '__' . $vars['view']->current_display;
    if(function_exists($display_function)){
        $display_function($vars);
    }
}

function mqcristobal_preprocess_views_view_taxonomy_term__panel_pane_1(&$vars){
    $term = taxonomy_term_load($vars['view']->args[0]);
    $vars['view_content'] = taxonomy_term_view($term, 'homepage_teaser_3');
}
