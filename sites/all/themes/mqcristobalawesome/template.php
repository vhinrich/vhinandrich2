<?php

/**
 * @file template.php
 */

function mqcristobalawesome_js_alter(&$javascript){
  global $user;
  
  $path = $_GET['q'];
  if(strpos(strtolower($path),'admin')>-1 || $user->uid > 0){
      //$jquery_module_path = drupal_get_path('module', 'jquery_update');
      //$jquery_path_old = $jquery_module_path . '/replace/jquery/1.5/jquery.min.js'; //depends on the jquery version set
      //$jquery_path_new = $jquery_module_path . '/replace/jquery/1.7/jquery.min.js'; //depends on the jquery version set
      //$javascript[$jquery_path_old]['data'] = $jquery_path_new;
  }else{
    // Replace with current version.
    if(module_exists('jquery_update')){
      $jquery_module_path = drupal_get_path('module', 'jquery_update');
      $jquery_path_old = $jquery_module_path . '/replace/jquery/1.5/jquery.min.js'; //depends on the jquery version set
      $jquery_path_new = $jquery_module_path . '/replace/jquery/1.7/jquery.min.js'; //depends on the jquery version set
      $javascript[$jquery_path_old]['data'] = $jquery_path_new;
    }else{
      $jQuery_version = '1.8.3'; //jquery 1.10 got some issues with the msie object
      $javascript['misc/jquery.js']['data'] = drupal_get_path('theme', 'bootstrap_subtheme').'/js/jquery-' . $jQuery_version . '.min.js';
      $javascript['misc/jquery.js']['version'] = $jQuery_version;
    }
  }
}

function mqcristobalawesome_form_alter(&$form, &$form_state, $form_id){
  if($form_id=='user_login'){
    $form['actions']['submit']['#value'] = 'Sign in';
    $form['actions']['submit']['#attributes']['class'][] = 'btn-primary';
    $form['name']['#title_display'] = 'invisible';
    $form['pass']['#title_display'] = 'invisible';
    $form['name']['#description'] = '';
    $form['pass']['#description'] = '';
    $form['name']['#attributes']['placeholder'] = 'Username';
    $form['pass']['#attributes']['placeholder'] = 'Password';
  }
  
  if($form_id=='views_form_editor_content_listing_page'){
    $form['select']['operation']['#options'][0] = '- choose an action -';
    $form['select']['#collapsible'] = 0;
    $form['select']['submit']['#value'] = 'Apply';
  }
  if($form_id=='views_exposed_form'){
    $form['type']['#options']['story'] = 'Article';
    $form['submit']['#value'] = 'Search';
  }
}

function mqcristobalawesome_preprocess_page(&$variables){
  if(arg(0)=='node' && arg(1)=='add' && arg(2)=='story'){
    $variables['title'] = 'Create Article';
  }
  if(arg(0)=='node' && arg(1)=='add' && arg(2)=='infographic'){
    $variables['title'] = 'Create Embed Template';
    $infographicCT = node_type_get_types();
    $infographicCT = $infographicCT['infographic'];
    $variables['form_desc'] = $infographicCT->description;
  }
  if(arg(0)=='node' && is_numeric(arg(1))){
    if(isset($variables['node']->field_photo_vide[LANGUAGE_NONE][0])){
      $image_url = image_style_url('large_square_thumbnail', $variables['node']->field_photo_video[LANGUAGE_NONE][0]['uri']);
    }else{
      $image_url = 'http://www.todayonline.com/sites/all/themes/today/FacebookPantalla.png';
    }
    $data = array(
      '#tag' => 'meta',
      '#attributes' => array(
        'property' => 'og:image',
        'content' => $image_url,
      ),
    );
    $key = 'og_image_node';
    drupal_add_html_head($data, $key);
  }
}

function mqcristobalawesome_menu_alter(&$callback)
{
  unset($callback['user/password']); //remove request new password
}

function mqcristobalawesome_preprocess_html(&$vars, $hook) {
  if ( module_exists("mark_omniture") ) {
    $vars['omniture'] = mark_omniture_get_tags();
  }
}

function _generate_background_media($background_media, $style = null){
  if(strstr($background_media[0]['filemime'], 'video')){
    $return = '<script>
      (function($){
        $(window).load(function(){
          $(".background-media.video").videoBG({
            mp4: "' . file_create_url($background_media[0]['uri']) .'",
            ogv: "' . file_create_url($background_media[1]['uri']) .'",
            webm: "' . file_create_url($background_media[2]['uri']) .'",
            poster: "' . image_style_url($style, $background_media[3]['uri']) .'",
            position: "scroll",
            zIndex: -1,
            opacity: 1
          });
        });
      })(jQuery);
    </script>';
    $return .= '<div class="background-media video">';
    $return .= '</div>';
  }else{
    $return = '';
    $return .= '<div class="background-media photo" style="background-image: url(' . file_create_url($background_media[0]['uri']) . ')">';
    $return .= '</div>';
  }
  return $return;
}

function mqcristobalawesome_preprocess_node(&$vars) {
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
  
  if($vars['type']=='page'){
    if(isset($vars['field_background_media'][LANGUAGE_NONE])){
      $vars['background_media'] = _generate_background_media($vars['field_background_media'][LANGUAGE_NONE], 'extra_large');
    }
  }

  //
  // Template suggestions
  //
  $vars['theme_hook_suggestions'][] = 'node__' . $vars['type'] . '__' . $vars['view_mode'];
  $vars['theme_hook_suggestions'][] = 'node____' . $vars['view_mode'];
}