<?php

/**
 * @file
 * template.php
 */

function todaymicro2_preprocess_html(&$vars){
  $vars['classes_array'][] = 'row-offcanvas';
  $vars['classes_array'][] = 'row-offcanvas-right';
}

function todaymicro2_preprocess_node(&$vars) {
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

function todaymicro2_preprocess_node_article__entry_list(&$vars) {
  //$vars['content']['field_photo']['#markup'] = '<div class="field field-name-field-photo field-type-file field-label-hidden"><div class="field-items"><div class="field-item even"><img typeof="foaf:Image" src="' . drupal_get_path('theme', 'todaymicro2') . '/images/6-9-clear.png" width="640" height="360" alt=""></div></div></div>';
}

function todaymicro2_preprocess_node_entry__entry_list(&$vars) {
  
}
function todaymicro2_preprocess_node_entry__entry_winner_list(&$vars) {
  if(isset($vars['content']['body']) && isset($vars['content']['body'][0])){
    $vars['content']['body'][0]['#markup'] = truncate_utf8($vars['content']['body'][0]['#markup'], 100, true, true);
  }
}
function todaymicro2_preprocess_field_body__entry_winner_list(&$vars) {
  $vars['classes_array'][] = 'fitText1';
}
function todaymicro2_preprocess_node_entry__full(&$vars) {
  
}
function todaymicro2_preprocess_node_entry(&$vars) {
  if(isset($vars['content']['content_social_buttons']))
    $vars['content']['content_social_buttons']['#weight'] = 99;
  if(isset($vars['content']['content_social_buttons_js']))
    $vars['content']['content_social_buttons_js']['#weight'] = 98;
}

function todaymicro2_preprocess_field(&$vars) {
  $function = __FUNCTION__ . '_' . $vars['element']['#field_name'];
  // for content type in general
  if (function_exists($function))
    $function($vars);
  
  $viewmodeFunction = $function . '__' . $vars['element']['#view_mode'];
  if (function_exists($viewmodeFunction))
    $viewmodeFunction($vars);
}

function todaymicro2_preprocess_field_content_social_buttons__full(&$vars){
  if($key = array_search('clearfix', $vars['classes_array'])){
    //unset($vars['classes_array'][$key]);
  }
}
function todaymicro2_preprocess_field_content_social_buttons_js__full(&$vars){
  if($key = array_search('clearfix', $vars['classes_array'])){
    //unset($vars['classes_array'][$key]);
  }
}
function todaymicro2_preprocess_field_field_full_name__full(&$vars){
  //dpm($vars);
  //foreach($vars['items'] as $key => $item){
  //  $vars['items'][$key]['#prefix'] = '<span class="icon"><i class="fa fa-user fa-fw"></i></span>';
  //}
}
function todaymicro2_preprocess_field_field_photo_category(&$vars){
  foreach($vars['items'] as $key => $item){
    $vars['items'][$key]['#href'] = 'entries/' . strtolower($vars['items'][$key]['#title']);
  }
}

function todaymicro2_preprocess_page(&$vars) {
  //data-spy="affix" data-offset-top="60" data-offset-bottom="200"
  //$vars['navbar_attributes_array']['data-spy'] = 'affix';
  //$vars['navbar_attributes_array']['data-offset-top'] = '1';
  //$vars['navbar_attributes'] = drupal_attributes($vars['navbar_attributes_array']); //convert array_attributes to string attributes
}


function todaymicro2_html_head_alter(&$head_elements) {
  if(arg(0)=='node' && is_numeric(arg(1))){
    if(isset($head_elements['metatag_twitter:card'])){
      //$node = node_load(arg(1));
      //if($node->type == 'episode'){
      //  $results = views_get_view_result('voicestoday_episode_stream', 'attachment_1');
      //  if(count($results)>0){
      //    $result = reset($results);
      //    $node = node_load($result->nid);
      //  }
      //}
      //if(isset($node->field_image_video[LANGUAGE_NONE][0])){
      //  if($node->field_image_video[LANGUAGE_NONE][0]['type']=='image'){
      //    
      //  }else{
      //    $head_elements['metatag_twitter:card']['#value'] = 'player';
      //  }
      //}
    }
  }
}

function todaymicro2_form_alter(&$form, &$form_state, $form_id){
  if($form_id=='entry_node_form'){
    if(isset($form['actions']['submit']) && $form['actions']['submit']){
      $form['actions']['submit']['#value'] = t('Submit');
      $form['actions']['submit']['#submit'][0] = '_todaymicro2_form_alter_entry_submit';
    }elseif(isset($form['ajax-submit'])){
      $form['ajax-submit']['#value'] = t('Submit');
    }
  }
  if(isset($form['title'])){
    $form['title']['#attributes']['placeholder'] = $form['title']['#title'];
    $element['#attributes']['classes'][] = 'field-has-placeholder';
  }
}

function _todaymicro2_form_alter_entry_submit($form, $form_state){
  $node = node_form_submit_build_node($form, $form_state);
  $insert = empty($node->nid);
  node_save($node);
  $node_link = l(t('view'), 'node/' . $node->nid);
  $watchdog_args = array(
    '@type' => $node->type,
    '%title' => $node->title,
  );
  $t_args = array(
    '@type' => node_type_get_name($node),
    '%title' => $node->title,
  );

  if ($insert) {
    watchdog('content', '@type: added %title.', $watchdog_args, WATCHDOG_NOTICE, $node_link);
    drupal_set_message(t('@type %title has been created.', $t_args));
  }
  else {
    watchdog('content', '@type: updated %title.', $watchdog_args, WATCHDOG_NOTICE, $node_link);
    drupal_set_message(t('@type %title has been updated.', $t_args));
  }
  if ($node->nid) {
    $form_state['values']['nid'] = $node->nid;
    $form_state['nid'] = $node->nid;
    //$form_state['redirect'] = node_access('view', $node) ? 'node/' . $node->nid : '<front>';
    drupal_goto('node/add/entry', array('query' => array('r' => strtotime('now'))));
  }
  else {
    // In the unlikely case something went wrong on save, the node will be
    // rebuilt and node form redisplayed the same way as in preview.
    drupal_set_message(t('The post could not be saved.'), 'error');
    $form_state['rebuild'] = TRUE;
  }
  // Clear the page and block caches.
  cache_clear_all();
}

function todaymicro2_field_widget_form_alter(&$element, &$form_state, $context){
  //dpm($element);
  if(isset($element['#type'])){
    switch ($element['#type']){
      case 'field_email':
      case 'textfield':
      case 'field_contact_number':
        $element['#attributes']['placeholder'] = $element['#title'];
        $element['#attributes']['class'][] = 'field-has-placeholder';
        break;
    }
  }else{
    $elements = element_children($element);
    foreach($elements as $key){
      if(isset($element[$key]['#type'])){
        switch ($element[$key]['#type']){
          case 'textfield':
            $element[$key]['#attributes']['placeholder'] = $element[$key]['#title'];
            $element[$key]['#attributes']['class'][] = 'field-has-placeholder';
            break;
        }
      }
    }
  }
  //if($element['#type']=='textfield'){
  //  $element['#attributes']['placeholder'] = $element['#title'];
  //  unset($element['#title']);
  //}
}

//function todaymicro2_menu_link__main_menu($variables){
//  $element = $variables['element'];
//  $sub_menu = '';
//
//  if ($element['#below']) {
//    $sub_menu = drupal_render($element['#below']);
//  }
//  //$output =  l('<div class="front">' . $element['#title'] . '</div>' . '<div class="back">' . $element['#title'] . '</div>', $element['#href'], $element['#localized_options']);
//  //$output =  '<a href="' . $element['#href'] . '"><span class="front">' . $element['#title'] . '</span>' . '<span class="back">' . $element['#title'] . '</span></a>';
//  $output = '';
//  $output .=  '<div class="front">' . l($element['#title'], $element['#href'], $element['#localized_options']) . '</div>';
//  $output .=  '<div class="back">' . l($element['#title'], $element['#href'], $element['#localized_options']) . '</div>';
//  return '<li' . drupal_attributes($element['#attributes']) . '><div class="roll">' . $output . '</div>' . $sub_menu . "</li>\n";
//}

function todaymicro2_views_load_more_pager($vars) {
  global $pager_page_array, $pager_total;

  $tags = $vars['tags'];
  $element = $vars['element'];
  $parameters = $vars['parameters'];

  $li_next = theme('pager_next',
    array(
      'text' => (isset($tags[3]) ? $tags[3] : t($vars['more_button_text'])),
      'element' => $element,
      'interval' => 1,
      'parameters' => $parameters,
    )
  );
  if (empty($li_next)) {
    $li_next = "";
  }

  if ($pager_total[$element] > 1) {
    $items[] = array(
      'class' => array('pager-next'),
      'data' => $li_next,
    );
    return theme('item_list',
      array(
        'items' => $items,
        'title' => NULL,
        'type' => 'ul',
        'attributes' => array('class' => array('pager', 'pager-load-more')),
      )
    );
  }
}