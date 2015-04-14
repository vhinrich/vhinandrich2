<?php

/**
 * @file
 * template.php
 */

function mqcristobalv2_preprocess_html(&$variables){
  // font awesome
  $attributes = array(
    'rel' => 'stylesheet',
    'href' => '//maxcdn.bootstrapcdn.com/font-awesome/4.3.0/css/font-awesome.min.css'
  );
  drupal_add_html_head_link($attributes, TRUE);

  drupal_add_js('https://google-code-prettify.googlecode.com/svn/loader/run_prettify.js');
}

function mqcristobalv2_preprocess_page(&$variables){
  // if(in_array('container', $variables['navbar_classes_array'])){
  //   if($container_index = array_search('container', $variables['navbar_classes_array'])){
  //     unset($variables['navbar_classes_array'][$container_index]);
  //   }
  //   $variables['navbar_classes_array'][] = 'container-fluid';
  // }
  // dpm($variables);
}

function mqcristobalv2_preprocess_image(&$variables){
  $variables['attributes']['class'][] = 'img-responsive';
  $variables['attributes']['class'][] = 'center-block';
}

function mqcristobalv2_preprocess_node(&$variables){
  $variables['classes_array'][] = 'node-display-' . str_replace('_', '-', $variables['view_mode']);
}

function mqcristobalv2_preprocess_field(&$variables){
  $function = __FUNCTION__ . '_' . $variables['element']['#view_mode'];
  if(function_exists($function)){
    $function($variables);
  }
}

function mqcristobalv2_preprocess_field_full(&$variables){
  $function = __FUNCTION__ . '_' . $variables['element']['#field_name'];
  if(function_exists($function)){
    $function($variables);
  }
}

function mqcristobalv2_preprocess_field_teaser(&$variables){
  $function = __FUNCTION__ . '_' . $variables['element']['#field_name'];
  if(function_exists($function)){
    $function($variables);
  }
}

function mqcristobalv2_preprocess_field_portfolio_card(&$variables){
  $function = __FUNCTION__ . '_' . $variables['element']['#field_name'];
  if(function_exists($function)){
    $function($variables);
  }
}

function mqcristobalv2_preprocess_field_teaser_ds_user_picture(&$variables){
  if(isset($variables['element']['#object']->uid)){
    $user = user_load($variables['element']['#object']->uid);
    foreach($variables['items'] as $item_key => $item){
      $user_photo_var = array();
      $user_photo_var['account'] = $user;
      mqcristobalv2_preprocess_user_picture($user_photo_var);
      $variables['items'][$item_key]['#markup'] = $user_photo_var['user_picture'];
    }
  }
}

function mqcristobalv2_preprocess_field_full_field_site_features(&$variables){
  foreach($variables['items'] as $item_key => $item){
    $variables['items'][$item_key]['#options']['attributes']['class'][] = 'btn';
    $variables['items'][$item_key]['#options']['attributes']['class'][] = 'btn-xs';
    $variables['items'][$item_key]['#options']['attributes']['class'][] = 'btn-primary';
  }
}

function mqcristobalv2_preprocess_field_portfolio_card_field_site_features(&$variables){
  foreach($variables['items'] as $item_key => $item){
    $variables['items'][$item_key]['#options']['attributes']['class'][] = 'btn';
    $variables['items'][$item_key]['#options']['attributes']['class'][] = 'btn-xs';
    $variables['items'][$item_key]['#options']['attributes']['class'][] = 'btn-primary';
  }
}

function mqcristobalv2_preprocess_field_portfolio_card_field_media(&$variables){
  foreach($variables['items'] as $item_key => $item){
    $nid = $variables['element']['#object']->nid;
    $url = url('node/' . $nid);
    $variables['items'][$item_key]['#prefix'] = '<a href="' . $url . '" class="animate-zoom-in">';
    $variables['items'][$item_key]['#suffix'] = '</a>';
  }
}

function mqcristobalv2_form_contact_form_entityform_edit_form_alter(&$form, &$form_state){
  $form['actions']['submit']['#attributes']['class'][] = 'btn-lg';
  $form['actions']['submit']['#attributes']['class'][] = 'btn-success';
  $form['actions']['submit']['#prefix'] = '<div class="text-center">';
  $form['actions']['submit']['#suffix'] = '</div>';
}

function mqcristobalv2_preprocess_user_picture(&$variables){
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
