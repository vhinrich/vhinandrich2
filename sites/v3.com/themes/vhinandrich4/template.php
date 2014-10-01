<?php

/**
 * @file
 * template.php
 */


function vhinandrich4_preprocess_page(&$vars){
  if(arg(0)=='taxonomy' && arg(1)=='term' && is_numeric(arg(2))){
    $tid = arg(2);
    $taxonomy = taxonomy_term_load($tid);
    if($taxonomy->vocabulary_machine_name=='hastags'){
      $vars['title'] = '#' . $taxonomy->name;
      drupal_set_title($vars['title']);
    }
  }
}

function vhinandrich4_preprocess_html(&$vars){
  $data = array(
    '#tag' => 'link',
    '#attributes' => array(
      'href' => '//maxcdn.bootstrapcdn.com/font-awesome/4.2.0/css/font-awesome.min.css',
      'rel' => 'stylesheet'
    )
  );
  drupal_add_html_head($data, 'fontawesome');
}

function vhinandrich4_preprocess_node(&$vars, $hook) {
  $vars['classes_array'][] = $vars['view_mode'];


  //instagram
  if(isset($vars['field_social_network'][LANGUAGE_NONE]) && isset($vars['field_social_network'][LANGUAGE_NONE][0]) && $vars['field_social_network'][LANGUAGE_NONE][0]['tid']==59){
      $vars['classes_array'][] = 'social-networ-instagram';
      $vars['content']['social-network-icon'] = array(
          '#markup' => '<div class="social-network-icon instagram"><i class="fa fa-instagram"></i></div>',
          '#weight' => -1,
      );
      //$vars['body'] = preg_replace("/@(\w+)/i", "<a href=\"/hashtags/$1\">$0</a>", $vars['body']);
      if(isset($vars['content']['body']) && isset($vars['content']['body'][0])){
          $vars['content']['body'][0]['#markup'] = preg_replace("/@(\w+)/i", "<a href=\"http://instagram.com/$1\" target=\"_blank\">$0</a>", $vars['content']['body'][0]['#markup']);
          $vars['content']['body'][0]['#markup'] = preg_replace("/#(\w+)/i", "<a href=\"/hashtags/$1\">$0</a>", $vars['content']['body'][0]['#markup']);
      }
  }

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
  if (function_exists($vmfunc)){
      $vmfunc($vars, $hook);
  }
  //
  // Template suggestions
  //
  $vars['theme_hook_suggestions'][] = 'node__' . $vars['type'] . '__' . $vars['view_mode'];
  $vars['theme_hook_suggestions'][] = 'node____' . $vars['view_mode'];
}

function vhinandrich4_preprocess_node__featured(&$vars, $hook) {
  // $vars['classes_array'][] = 'row';
  $node = $vars['node'];

  $img_uri = NULL;
  if( (isset($node->field_media_display_image[$node->language]) && count($node->field_media_display_image[$node->language])>0) ){
    $img_uri = $node->field_media_display_image[$node->language][0]['uri'];
  }else{
    if( (isset($node->field_media[$node->language]) && count($node->field_media[$node->language])>0) ){
      $img_uri = $node->field_media[$node->language][0]['uri'];
    }
  }

  $tmp_prefix .= '<a class="media-link" href="' . url('node/' . $vars['nid']) . '">';
  $tmp_suffix .= '</a>';

  if($img_uri){
    $tmp_prefix .= '<div class="featured-image-wrapper" style="background-image:url(' . image_style_url('featured', $img_uri) . ')">';
    $tmp_suffix = '</div>' . $tmp_suffix;
  }

  if(isset($vars['content']['field_media_display_image'])){
    $vars['content']['field_media_display_image']['#prefix'] = $tmp_prefix;
    $vars['content']['field_media_display_image']['#suffix'] = $tmp_suffix;
    if(isset($vars['content']['field_media'])){
      unset($vars['content']['field_media']);
    }
  }
  if(isset($vars['content']['field_media'])){
    $vars['content']['field_media']['#prefix'] = $tmp_prefix;
    $vars['content']['field_media']['#suffix'] = $tmp_suffix;
  }

}

function vhinandrich4_preprocess_node_article__timeline(&$vars){
    //dpm($vars);
    $vars['content']['content_social_buttons']['#weight'] = 99;

    //instagram
    //$vars['title'] = '';
    //if(isset($vars['field_social_network'][LANGUAGE_NONE]) && isset($vars['field_social_network'][LANGUAGE_NONE][0]) && $vars['field_social_network'][LANGUAGE_NONE][0]['tid']==59){
    //    //unset($vars['title']);
    //    $vars['title'] = '';
    //}
    if(isset($vars['content']['body'])){
      $vars['content']['body'][0]['#markup'] = truncate_utf8($vars['content']['body'][0]['#markup'], 99999, TRUE, TRUE);
      $vars['content']['detail_viewer']['#weight'] = -1;
      $vars['content']['detail_viewer']['#markup'] = '<div class="detail-viewer-container"><a href="#node-' . $vars['nid'] . '"><i class="fa fa-align-left"></i></a></div>';
    }
}

function vhinandrich4_preprocess_node__full(&$vars, $hook){
  $vars['content']['content_social_buttons']['#weight'] = 98;
  $vars['content']['content_social_buttons_js']['#weight'] = 98;
  unset($vars['content']['social-network-icon']);
}

function vhinandrich4_form_alter(&$form){
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

    if(isset($form['#node']) && strtolower($form['#node']->title) == 'contact us'){
      $form['#attributes']['class'][] = 'row';
      $elements = element_children($form['submitted']);
      foreach($elements as $key){
        if($form['submitted'][$key]['#type'] !== 'textarea'){
          $form['submitted'][$key]['#prefix'] = '<div class="col-sm-6">';
          $form['submitted'][$key]['#suffix'] = '</div>';
        }else{
          $form['submitted'][$key]['#prefix'] = '<div class="col-sm-12" style="clear:both">';
          $form['submitted'][$key]['#suffix'] = '</div>';
        }
      }
      $form['actions']['submit']['#value'] = '<i class="button-icon glyphicon glyphicon-send"></i><span class="button-caption">Send</span>';
      $form['actions']['submit']['#attributes'] = array('class' => array('btn-lg', 'btn-primary'));
      $form['actions']['submit']['#prefix'] = '<div class="col-sm-12" style="clear:both">';
      $form['actions']['submit']['#suffix'] = '</div>';
    }
}

function vhinandrich4_preprocess_field(&$vars){
    $function = __FUNCTION__ . '_' . $vars['element']['#field_name'];
    // for content type in general
    if (function_exists($function)){
      $function($vars);
    }
    // view_mode version
    $teaserfunc = $function . '__' . $vars['element']['#view_mode'];
    if (function_exists($teaserfunc)){
      $teaserfunc($vars);
    }
}

function vhinandrich4_preprocess_field_field_media__timeline(&$vars){
    if(count($vars['items'])>1){
        $vars['items'] = array(reset($vars['items']));
        $vars['classes_array'][] = 'gallery';
        $vars['classes_array'][] = 'gallery-' . $vars['element']['#object']->nid;
        $vars['attributes_array']['data-node-id'] = $vars['element']['#object']->nid;
        $vars['theme_hook_suggestions'][] = 'field__field_media__gallery__article__timeline';
    }
}

function vhinandrich4_preprocess_field_field_media__featured(&$vars){
  // $vars['classes_array'][] = 'col-sm-9';
  // if(count($vars['items'])>1){
  //     $vars['items'] = array(reset($vars['items']));
  // }
  if(count($vars['items'])>1){
      $vars['items'] = array(reset($vars['items']));
      $vars['classes_array'][] = 'gallery';
      $vars['classes_array'][] = 'gallery-' . $vars['element']['#object']->nid;
      $vars['attributes_array']['data-node-id'] = $vars['element']['#object']->nid;
  }
}


function vhinandrich4_preprocess_field_field_media__full(&$vars){
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

function vhinandrich4_preprocess_field_field_media__default(&$vars){
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

function vhinandrich4_preprocess_field_content_social_buttons(&$vars){
  $vars['classes_array'][] = 'fa';
  $vars['classes_array'][] = 'fa-share';
}

function vhinandrich4_preprocess_field_content_social_buttons__full(&$vars){
  foreach($vars['classes_array'] as $key => $class){
    if($class=='btn')
      unset($vars['classes_array'][$key]);

    if($class=='fa-share')
      unset($vars['classes_array'][$key]);
  }
}

function vhinandrich4_preprocess_field_content_social_button__timeline(&$vars){
  //$vars['classes_array'][] = 'fa';
  //$item = reset($vars['items']);
  //$vars['classes_array'][] = 'fa-' . $item['name'];
}

/**
* Implements hook_html_head_alter().
*/
function vhinandrich4_html_head_alter(&$head_elements) {
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

function vhinandrich4_preprocess_views_view_field(&$vars){
  $view = $vars['view'];
  $field= $vars['field'];
  $function = __FUNCTION__ . '_' . $view->name . '_' . $field->field_info['field_name'];
  if(function_exists($function)){
    $function($vars);
  }
}

function vhinandrich4_preprocess_views_view_field_latest_instagram_field_media(&$vars){
  $field_data = $vars['row']->_field_data;
  $node = NULL;
  if(isset($field_data['nid']) && $field_data['nid']['entity_type']=='node'){
    // this is a node
    $node = $field_data['nid']['entity'];
  }

  if($node &&
    isset($node->field_media_display_image[$node->language]) &&
    count($node->field_media_display_image[$node->language]) > 0){
    $row = $vars['row'];
    // $image_style = $row->field_field_media[0]['rendered']['file']['#style_name'];
    $image_style = 'thumbnail';
    $args['style_name'] = $image_style;
    $args['path'] = $node->field_media_display_image[$node->language][0]['uri'];
    $img = theme_image_style($args);
    $vars['output'] = $img;
  }
}

function vhinandrich4_preprocess_views_view_field_more_posts_field_media(&$vars){
  vhinandrich4_preprocess_views_view_field_latest_instagram_field_media($vars);
}
function vhinandrich4_preprocess_views_view_field_related_posts_field_media(&$vars){
  vhinandrich4_preprocess_views_view_field_latest_instagram_field_media($vars);
}
