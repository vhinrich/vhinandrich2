<?php

/**
 * @file
 * template.php
 */

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

function mqcristobalv2_preprocess_field_portfolio_card(&$variables){
  $function = __FUNCTION__ . '_' . $variables['element']['#field_name'];
  if(function_exists($function)){
    $function($variables);
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
  $form['actions']['submit']['#attributes']['class'][] = 'btn-primary';
  $form['actions']['submit']['#prefix'] = '<div class="text-center">';
  $form['actions']['submit']['#suffix'] = '</div>';
}
