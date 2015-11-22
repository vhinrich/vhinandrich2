<?php

/**
 * @file
 * template.php
 */

function sglens_preprocess_page(&$variables){
  $variables['main_container_wrapper_classes_array'][] = 'main-container-wrapper';
  $container_class_array = array(
    'node*',
    'cart*',
    'user*',
    'checkout*',
    'admin*'
  );

  $path = current_path();
  $path_alias = drupal_lookup_path('alias', $path);
  foreach($container_class_array as $path_check){
    if(drupal_match_path($path, $path_check) || drupal_match_path($path_alias, $path_check)){
      $variables['main_container_wrapper_classes_array'][] = 'container';
    }
  }
  // if(isset($variables['node']) || in_array(current_path(), $container_class_array)){
  //   $variables['main_container_wrapper_classes_array'][] = 'container';
  // }
  $variables['main_container_wrapper_classes'] = implode(' ', $variables['main_container_wrapper_classes_array']);
}

function sglens_preprocess_html(&$variables){
  $variables['classes_array'][] = 'theme-sglens';
  $variables['classes_array'][] = 'navbar-is-' . theme_get_setting('bootstrap_navbar_position');

  $color_scheme = theme_get_setting('bootstrap_color_scheme');
  if ($color_scheme) {
    $variables['classes_array'][] = 'color-scheme-' . $color_scheme;
    $path = drupal_get_path('theme', 'sglens');
    drupal_add_css($path . '/scss/color_schemes/' . $color_scheme . '.scss');
  }

  // font awesome
  $attributes = array(
    'rel' => 'stylesheet',
    'href' => '//maxcdn.bootstrapcdn.com/font-awesome/4.3.0/css/font-awesome.min.css'
  );
  drupal_add_html_head_link($attributes, TRUE);

  // google font - open sans
  $attributes = array(
    'rel' => 'stylesheet',
    'href' => '//fonts.googleapis.com/css?family=Open+Sans:300italic,400italic,600italic,700italic,800italic,400,300,600,700,800',
    'type' => 'text/css'
  );
  drupal_add_html_head_link($attributes, TRUE);

  // goole font
  $attributes = array(
    'rel' => 'stylesheet',
    'href' => '//fonts.googleapis.com/css?family=Roboto+Slab:400,100,300,700',
    'type' => 'text/css'
  );
  drupal_add_html_head_link($attributes, TRUE);

  // drupal_add_js('https://google-code-prettify.googlecode.com/svn/loader/run_prettify.js');
}

function sglens_preprocess_field(&$variables){
  $function = __FUNCTION__ . '_' . $variables['element']['#view_mode'];
  if(function_exists($function)){
    $function($variables);
  }

  $function = $function . '_' . $variables['element']['#field_name'];
  if(function_exists($function)){
    $function($variables);
  }

  $function = __FUNCTION__ . '_' . $variables['element']['#field_name'];
  if(function_exists($function)){
    $function($variables);
  }
}

function sglens_preprocess_field_card_teaser_small_node_link(&$variables){
  foreach($variables['items'] as $item_index => $item){
    $read_more_html = t('Read more');
    $variables['items'][$item_index]['#markup'] = l($read_more_html, 'node/' . $variables['element']['#object']->nid, array('html' => TRUE, 'attributes' => array('class' => array('btn', 'btn-default', 'btn-xs'))));
  }
}

function sglens_preprocess_field_card_teaser_node_link(&$variables){
  foreach($variables['items'] as $item_index => $item){
    $read_more_html = '<div><i class="fa fa-eye"></i></div><div>' . t('Read more') . '</div>';
    $variables['items'][$item_index]['#markup'] = l($read_more_html, 'node/' . $variables['element']['#object']->nid, array('html' => TRUE, 'attributes' => array('class' => array('btn', 'btn-link'))));
  }
}

function sglens_preprocess_field_card_teaser_field_product(&$variables){
  $element = $variables['element'];
  $node = $element['#object'];
  foreach($variables['items'] as $item_index => $item){
    $variables['items'][$item_index]['#prefix'] = '<div class="modal fade" id="modal-add-to-cart-' . $node->nid . '" tabindex="-1" role="dialog" aria-labelledby="addToCartModalLabel-' . $node->nid . '" aria-hidden="true">
  <div class="modal-dialog">
    <div class="modal-content">
      <div class="modal-header">
        <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
        <h4 class="modal-title" id="addToCartModalLabel-' . $node->nid . '">' . t('Add %title to cart', array('%title' => $node->title)) . '</h4>
      </div>
      <div class="modal-body">';
    $variables['items'][$item_index]['#suffix'] = '</div>
    </div>
  </div>
</div>';
  }
}

function sglens_preprocess_image(&$variables){
  $variables['attributes']['class'][] = 'img-responsive';
  $variables['attributes']['class'][] = 'center-block';
}

/**
 * Implements hook_FORM_ID_alter.
 * checkout form
 */
function sglens_form_commerce_checkout_form_checkout_alter(&$form, &$form_state){
  // if(isset($form['customer_profile_shipping']) && isset($form['customer_profile_billing'])){
  //   $form['customer_profile_shipping']['#prefix'] = '<div class="row"><div class="col-sm-6">';
  //   $form['customer_profile_shipping']['#suffix'] = '<div></div></div>';

  //   $form['customer_profile_billing']['#prefix'] = '<div class="col-sm-6">';
  //   $form['customer_profile_billing']['#suffix'] = '<div></div></div></div>';
  // }

  // if(isset($form['commerce_coupon'])){
  //   $form['commerce_coupon']['#suffix'] = '<div>';
  //   $form['commerce_coupon']['#suffix'] = '<div></div></div>';
  // }
}

function sglens_commerce_checkout_progress_list(&$variables){
  $path = drupal_get_path('module', 'commerce_checkout_progress');
  drupal_add_css($path . '/commerce_checkout_progress.css');

  extract($variables);

  // Option to display back pages as links.
  if ($link) {
    // Load the *shopping cart* order. It gets deleted on last page.
    if (module_exists('commerce_cart') && $order = commerce_cart_order_load($GLOBALS['user']->uid)) {
      $order_id = $order->order_id;
    }
    // If we don't have the Cart module and are on the checkout page, load the
    // order from the arguments.
    elseif (arg(0) == 'checkout' && $order_id = arg(1)) {
      $order = commerce_order_load($order_id);
    }
  }

  // This is where we build up item list that will be themed
  // This variable is used with $variables['link'], see more in inside comment.
  $visited = TRUE;
  // Our list of progress pages.
  $progress = array();
  foreach ($items as $page_id => $page) {
    $class = array();
    if ($page_id === $current_page) {
      $class[] = 'active';
      // Active page and next pages should not be linked.
      $visited = FALSE;
    }
    if (isset($items[$current_page]['prev_page']) && $page_id === $items[$current_page]['prev_page']) {
      $class[] = 'previous';
    }
    if (isset($items[$current_page]['next_page']) && $page_id === $items[$current_page]['next_page']) {
      $class[] = 'next';
    }
    $class[] = $page_id;
    $data = t($page['title']);

    if ($visited) {
      $class[] = 'visited'; // Issue #1345942.

      // On checkout complete page, the checkout order is deleted.
      if (isset($order_id) && $order_id) {
        // If a user is on step 1, clicking a link next steps will be redirect them back.
        // Only render the link on the pages those user has already been on.
        // Make sure the loaded order is the same one found in the URL.
        if (arg(1) == $order_id) {
          $href = isset($page['href']) ? $page['href'] : "checkout/{$order_id}/{$page_id}";
          $data = l(filter_xss($data), $href, array('html' => TRUE));
        }
      }
    }else{
      $data = l($data, current_path(), array('fragment' => 'block-system-main'));
      $class[] = 'disabled';
    }

    $item = array(
      'data'  => $data,
      'class' => $class,
    );
    // Only set li title if the page has help text.
    if (isset($page['help'])) {
      //#1322436 Filter help text to be sure it contains NO html.
      $help = strip_tags($page['help']);
      // Make sure help has text event after filtering html.
      if (!empty($help)) {
        $item['title'] = $help;
      }
    }
    // Add item to progress array.
    $progress[] = $item;
  }

  $classes = array(
    // 'commerce-checkout-progress',
    'clearfix',
    'inline',
    'checkout-pages-' . count($progress),
    'nav',
    'nav-tabs'
  );
  return theme('item_list', array(
    'items' => $progress,
    'type' => $type,
    'attributes' => array('class' => $classes),
  ));
}

/**
 * Implmements template_preprocess_views_view
 */
function sglens_preprocess_views_view(&$variables){
  $function = __FUNCTION__ . '_' .  $variables['name'];
  if(function_exists($function)){
    $function($variables);
  }

  $function .= '_' . $variables['display_id'];
  if(function_exists($function)){
    $function($variables);
  }

  $variables['view_header_classes'] = '';
  if(isset($variables['view_header_classes_array'])){
    $variables['view_header_classes'] .= implode(' ', $variables['view_header_classes_array']);
  }
  $variables['view_content_classes'] = '';
  if(isset($variables['view_content_classes_array'])){
    $variables['view_content_classes'] .= implode(' ', $variables['view_content_classes_array']);
  }
}

function sglens_preprocess_views_view_lens_type_list(&$variables){
  $variables['view_header_classes_array'][] = 'container';
  $variables['view_content_classes_array'][] = 'container';
}

function sglens_preprocess_views_view_lens_type_list_panel_pane_2(&$variables){
  // $variables['view_header_classes_array'][] = 'container-fluid';
  // $variables['view_content_classes_array'][] = 'container-fluid';
  if(in_array('container', $variables['view_header_classes_array'])){
    $index = array_search('container', $variables['view_header_classes_array']);
    unset($variables['view_header_classes_array'][$index]);
  }
  if(in_array('container', $variables['view_content_classes_array'])){
    $index = array_search('container', $variables['view_content_classes_array']);
    unset($variables['view_content_classes_array'][$index]);
  }
}

function sglens_form_contact_form_entityform_edit_form_alter(&$form, &$form_state){
  $form['actions']['submit']['#attributes']['class'][] = 'btn';
  $form['actions']['submit']['#attributes']['class'][] = 'btn-success';
}

function sglens_form_user_register_form_alter(&$form, &$form_state){
  // $form['actions']['facebook_signup'] = array(
  //   '#markup' => l('<i class="fa fa-facebook"></i>&nbsp;&nbsp;' . t('Register with Facebook'), 'user/simple-fb-connect', array('html' => TRUE, 'attributes' => array('class' => array('btn', 'btn-primary'))))
  // );
}

function sglens_form_user_login_alter(&$form, &$form_state){
  $form['actions']['facebook_signin'] = array(
    '#markup' => l('<i class="fa fa-facebook"></i>&nbsp;&nbsp;' . t('Login with Facebook'), 'user/simple-fb-connect', array('html' => TRUE, 'attributes' => array('class' => array('btn', 'btn-primary'))))
  );
}

function sglens_preprocess_user_picture(&$variables){
  $variables ['user_picture'] = '';
  if (variable_get('user_pictures', 0)) {
    $account = $variables ['account'];
    if (!empty($account->picture)) {
      // @TODO: Ideally this function would only be passed file objects, but
      // since there's a lot of legacy code that JOINs the {users} table to
      // {node} or {comments} and passes the results into this function if we
      // a numeric value in the picture field we'll assume it's a file id
      // and load it for them. Once we've got user_load_multiple() and
      // comment_load_multiple() functions the user module will be able to load
      // the picture files in mass during the object's load process.
      if (is_numeric($account->picture)) {
        $account->picture = file_load($account->picture);
      }
      if (!empty($account->picture->uri)) {
        $filepath = $account->picture->uri;
      }
    }
    elseif (variable_get('user_picture_default', '')) {
      $filepath = variable_get('user_picture_default', '');
    }
    if (isset($filepath)) {
      $alt = t("@user's picture", array('@user' => format_username($account)));
      // If the image does not have a valid Drupal scheme (for eg. HTTP),
      // don't load image styles.
      if (module_exists('image') && file_valid_uri($filepath) && $style = variable_get('user_picture_style', '')) {
        $variables ['user_picture'] = theme('image_style', array('style_name' => $style, 'path' => $filepath, 'alt' => $alt, 'title' => $alt, 'attributes' => array('class' => array('img-circle'))));
      }
      else {
        $variables ['user_picture'] = theme('image', array('path' => $filepath, 'alt' => $alt, 'title' => $alt, 'attributes' => array('class' => array('img-circle'))));
      }
      if (!empty($account->uid) && user_access('access user profiles')) {
        $attributes = array('attributes' => array('title' => t('View user profile.')), 'html' => TRUE);
        $variables ['user_picture'] = l($variables ['user_picture'], "user/$account->uid", $attributes);
      }
    }
  }
}

function sglens_menu_local_tasks_alter(&$data, $router_item, $root_path){
  global $user;
  if(!in_array('administrator', $user->roles) || !in_array('store manager', $user->roles)){
    if(isset($router_item['map']) && count($router_item['map']) > 0 && in_array('user', $router_item['map'])){
      unset($data['tabs'][0]);
    }
  }
}
