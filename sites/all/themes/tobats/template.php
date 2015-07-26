<?php

/**
 * @file
 * template.php
 */

/**
 * implement template_preprocess_node
 */
function tobats_preprocess_node(&$variables){
	$variables['classes_array'][] = 'node-' . $variables['view_mode'];
	$variables['theme_hook_suggestions'][] = 'node__' . $variables['type'] . '__' . $variables['view_mode'];

  if(isset($variables['display_submitted']) && $variables['display_submitted']){
    $time_ago = format_interval(REQUEST_TIME - $variables['created']) . t(' ago');
    $variables['submitted'] = '<div class="submitted-container"><div class="name-container">' . $variables['name'] . '</div><div class="date-container">' . $time_ago . '</div></div>';
  }
}

function tobats_preprocess_page(&$variables){
  if(isset($variables['navbar_classes_array']) && in_array('container', $variables['navbar_classes_array'])){
    $key = array_search('container', $variables['navbar_classes_array']);
    unset($variables['navbar_classes_array'][$key]);
  }
  $variables['navbar_classes_array'][] = 'container-fluid';
}

function tobats_preprocess_field(&$variables, $hook){
  $function = __FUNCTION__ . '_' . $variables['element']['#field_name'];
  if(function_exists($function)){
    $function($variables);
  }
}

function tobats_preprocess_field_ds_user_picture(&$variables){
  $variables['theme_hook_suggestions'][] = 'field__ds_user_picture__product__' . $variables['element']['#view_mode'];
  if(isset($variables['element']['#object']->uid)){
    $user = user_load($variables['element']['#object']->uid);
    foreach($variables['items'] as $item_key => $item){
      $user_photo_var = array();
      $user_photo_var['account'] = $user;
      tobats_preprocess_user_picture($user_photo_var);
      $variables['items'][$item_key]['#markup'] = $user_photo_var['user_picture'];
    }
  }
}

function tobats_preprocess_image(&$variables){
  $variables['attributes']['class'][] = 'img-responsive';
  $variables['attributes']['class'][] = 'center-block';
}

function tobats_preprocess_user_picture(&$variables){
  $variables['user_picture'] = '';
  if(variable_get('user_pictures', 0)){
    $account = $variables['account'];
    if(!empty($account->picture)){
      if(is_numeric($account->picture)){
        $account->picture = file_load($account->picture);
      }
      if (!empty($account->picture->uri)){
        $filepath = $account->picture->uri;
      }
    }elseif(variable_get('user_picture_default', '')){
      $filepath = variable_get('user_picture_default', '');
    }
    if(isset($filepath)){
      $alt = t("@user's picture", array('@user' => format_username($account)));
      if(module_exists('image') && file_valid_uri($filepath) && $style = variable_get('user_picture_style', '')){
        $variables['user_picture'] = theme('image_style', array('style_name' => $style, 'path' => $filepath, 'alt' => $alt, 'title' => $alt, 'attributes' => array('class' => array('img-circle'))));
      }else{
        $variables['user_picture'] = theme('image', array('path' => $filepath, 'alt' => $alt, 'title' => $alt, 'attributes' => array('class' => array('img-circle'))));
      }
      if(!empty($account->uid) && user_access('access user profiles')){
        $attributes = array('attributes' => array('title' => t('View user profile.')), 'html' => TRUE);
        $variables['user_picture'] = l($variables ['user_picture'], "user/$account->uid", $attributes);
      }
    }
  }
}
