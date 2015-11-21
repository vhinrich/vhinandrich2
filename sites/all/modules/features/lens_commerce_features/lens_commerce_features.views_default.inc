<?php
/**
 * @file
 * lens_commerce_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function lens_commerce_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'banner_slides';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Banner Slides';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'row';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
  $handler->display->display_options['style_options']['interval'] = '8000';
  $handler->display->display_options['style_options']['navigation'] = 1;
  $handler->display->display_options['style_options']['indicators'] = 1;
  $handler->display->display_options['style_options']['pause'] = 1;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Relationship: Entityqueue: Content Queue */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;
  $handler->display->display_options['relationships']['entityqueue_relationship']['limit'] = 1;
  $handler->display->display_options['relationships']['entityqueue_relationship']['queues'] = array(
    'banner_slides' => 'banner_slides',
    'lens_type_order' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Entityqueue: Content Queue Position */
  $handler->display->display_options['sorts']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['sorts']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['sorts']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['banner_slides'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content Queue'),
    t('Block'),
  );
  $export['banner_slides'] = $view;

  $view = new view();
  $view->name = 'lens_type_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Lens type List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'row';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-sm-6 col-md-4';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'card_teaser';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="container-fluid">
<h2>Our Lenses</h2>
<h3>Our lenses correct <em>Myopia</em> (also known as short-sighted or near-sighted), <em>Hyperopia</em> and <em>Presbyopia</em> (old age yes having problems reading)</h3>
<p>&nbsp;</p>
<p>&nbsp;</p>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Entityqueue: Content Queue */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['label'] = 'Node Queue';
  $handler->display->display_options['relationships']['entityqueue_relationship']['limit'] = 0;
  $handler->display->display_options['relationships']['entityqueue_relationship']['queues'] = array(
    'lens_type_order' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Subqueue: Subqueue ID */
  $handler->display->display_options['sorts']['subqueue_id']['id'] = 'subqueue_id';
  $handler->display->display_options['sorts']['subqueue_id']['table'] = 'entityqueue_subqueue';
  $handler->display->display_options['sorts']['subqueue_id']['field'] = 'subqueue_id';
  $handler->display->display_options['sorts']['subqueue_id']['relationship'] = 'entityqueue_relationship';
  $handler->display->display_options['sorts']['subqueue_id']['order'] = 'DESC';
  /* Sort criterion: Entityqueue: Content Queue Position */
  $handler->display->display_options['sorts']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['sorts']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['sorts']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lens_type' => 'lens_type',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');

  /* Display: Content pane 2 */
  $handler = $view->new_display('panel_pane', 'Content pane 2', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-6 col-md-4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'card_teaser_small';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="container-fluid">
<h2><strong>Other</strong> Lens types</h2>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  $handler->display->display_options['pane_title'] = 'Lens type list (others)';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:commerce_coupon.commerce_coupon_code',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $translatables['lens_type_list'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<div class="container-fluid">
<h2>Our Lenses</h2>
<h3>Our lenses correct <em>Myopia</em> (also known as short-sighted or near-sighted), <em>Hyperopia</em> and <em>Presbyopia</em> (old age yes having problems reading)</h3>
<p>&nbsp;</p>
<p>&nbsp;</p>
</div>'),
    t('Node Queue'),
    t('Content pane'),
    t('View panes'),
    t('Content pane 2'),
    t('<div class="container-fluid">
<h2><strong>Other</strong> Lens types</h2>
</div>'),
    t('All'),
    t('Lens type list (others)'),
  );
  $export['lens_type_list'] = $view;

  $view = new view();
  $view->name = 'order_reward_coupon';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_coupon';
  $view->human_name = 'Order reward coupon';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Order reward coupon';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'coupon_id' => 'coupon_id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'coupon_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Commerce Coupon: Coupon ID */
  $handler->display->display_options['fields']['coupon_id']['id'] = 'coupon_id';
  $handler->display->display_options['fields']['coupon_id']['table'] = 'commerce_coupon';
  $handler->display->display_options['fields']['coupon_id']['field'] = 'coupon_id';
  $handler->display->display_options['fields']['coupon_id']['exclude'] = TRUE;
  /* Field: Commerce Coupon: Coupon Code */
  $handler->display->display_options['fields']['commerce_coupon_code']['id'] = 'commerce_coupon_code';
  $handler->display->display_options['fields']['commerce_coupon_code']['table'] = 'field_data_commerce_coupon_code';
  $handler->display->display_options['fields']['commerce_coupon_code']['field'] = 'commerce_coupon_code';
  $handler->display->display_options['fields']['commerce_coupon_code']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Commerce Coupon: Granted amount */
  $handler->display->display_options['fields']['granted_amount']['id'] = 'granted_amount';
  $handler->display->display_options['fields']['granted_amount']['table'] = 'commerce_coupon';
  $handler->display->display_options['fields']['granted_amount']['field'] = 'granted_amount';
  /* Field: Commerce Coupon: Is active */
  $handler->display->display_options['fields']['is_active']['id'] = 'is_active';
  $handler->display->display_options['fields']['is_active']['table'] = 'commerce_coupon';
  $handler->display->display_options['fields']['is_active']['field'] = 'is_active';
  $handler->display->display_options['fields']['is_active']['not'] = 0;
  /* Field: Commerce Coupon: Maximum number of Uses */
  $handler->display->display_options['fields']['commerce_coupon_number_of_uses']['id'] = 'commerce_coupon_number_of_uses';
  $handler->display->display_options['fields']['commerce_coupon_number_of_uses']['table'] = 'field_data_commerce_coupon_number_of_uses';
  $handler->display->display_options['fields']['commerce_coupon_number_of_uses']['field'] = 'commerce_coupon_number_of_uses';
  $handler->display->display_options['fields']['commerce_coupon_number_of_uses']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Commerce Coupon: Operations */
  $handler->display->display_options['fields']['operations']['id'] = 'operations';
  $handler->display->display_options['fields']['operations']['table'] = 'commerce_coupon';
  $handler->display->display_options['fields']['operations']['field'] = 'operations';
  $handler->display->display_options['fields']['operations']['add_destination'] = 0;
  /* Contextual filter: Commerce Coupon: From order (field_from_order) */
  $handler->display->display_options['arguments']['field_from_order_target_id']['id'] = 'field_from_order_target_id';
  $handler->display->display_options['arguments']['field_from_order_target_id']['table'] = 'field_data_field_from_order';
  $handler->display->display_options['arguments']['field_from_order_target_id']['field'] = 'field_from_order_target_id';
  $handler->display->display_options['arguments']['field_from_order_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_from_order_target_id']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_from_order_target_id']['default_argument_options']['code'] = 'return arg(2);';
  $handler->display->display_options['arguments']['field_from_order_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_from_order_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_from_order_target_id']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['order_reward_coupon'] = array(
    t('Master'),
    t('Order reward coupon'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Coupon ID'),
    t('.'),
    t(','),
    t('Coupon Code'),
    t('Granted amount'),
    t('Is active'),
    t('Maximum number of Uses'),
    t('Operations'),
    t('All'),
    t('Block'),
  );
  $export['order_reward_coupon'] = $view;

  $view = new view();
  $view->name = 'user_reward_coupon_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_coupon';
  $view->human_name = 'User reward coupon list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'coupon_id' => 'coupon_id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'coupon_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 'striped',
    'bordered' => 'bordered',
    'hover' => 0,
    'condensed' => 0,
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p>Earn coupons by purchasing!</p>';
  $handler->display->display_options['footer']['area']['format'] = 'super_full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>You have not earn any coupons yet.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'super_full_html';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_earned_coupons_user']['id'] = 'reverse_field_earned_coupons_user';
  $handler->display->display_options['relationships']['reverse_field_earned_coupons_user']['table'] = 'commerce_coupon';
  $handler->display->display_options['relationships']['reverse_field_earned_coupons_user']['field'] = 'reverse_field_earned_coupons_user';
  $handler->display->display_options['relationships']['reverse_field_earned_coupons_user']['required'] = TRUE;
  /* Field: Commerce Coupon: Coupon ID */
  $handler->display->display_options['fields']['coupon_id']['id'] = 'coupon_id';
  $handler->display->display_options['fields']['coupon_id']['table'] = 'commerce_coupon';
  $handler->display->display_options['fields']['coupon_id']['field'] = 'coupon_id';
  $handler->display->display_options['fields']['coupon_id']['exclude'] = TRUE;
  /* Field: Commerce Coupon: Coupon Code */
  $handler->display->display_options['fields']['commerce_coupon_code']['id'] = 'commerce_coupon_code';
  $handler->display->display_options['fields']['commerce_coupon_code']['table'] = 'field_data_commerce_coupon_code';
  $handler->display->display_options['fields']['commerce_coupon_code']['field'] = 'commerce_coupon_code';
  $handler->display->display_options['fields']['commerce_coupon_code']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Commerce Coupon: From order */
  $handler->display->display_options['fields']['field_from_order']['id'] = 'field_from_order';
  $handler->display->display_options['fields']['field_from_order']['table'] = 'field_data_field_from_order';
  $handler->display->display_options['fields']['field_from_order']['field'] = 'field_from_order';
  $handler->display->display_options['fields']['field_from_order']['settings'] = array(
    'link' => 0,
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Commerce Coupon: Granted amount */
  $handler->display->display_options['fields']['granted_amount']['id'] = 'granted_amount';
  $handler->display->display_options['fields']['granted_amount']['table'] = 'commerce_coupon';
  $handler->display->display_options['fields']['granted_amount']['field'] = 'granted_amount';
  /* Field: Commerce Coupon: Maximum number of Uses */
  $handler->display->display_options['fields']['commerce_coupon_number_of_uses']['id'] = 'commerce_coupon_number_of_uses';
  $handler->display->display_options['fields']['commerce_coupon_number_of_uses']['table'] = 'field_data_commerce_coupon_number_of_uses';
  $handler->display->display_options['fields']['commerce_coupon_number_of_uses']['field'] = 'commerce_coupon_number_of_uses';
  $handler->display->display_options['fields']['commerce_coupon_number_of_uses']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Commerce Coupon: Times used */
  $handler->display->display_options['fields']['times_used']['id'] = 'times_used';
  $handler->display->display_options['fields']['times_used']['table'] = 'commerce_coupon';
  $handler->display->display_options['fields']['times_used']['field'] = 'times_used';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_earned_coupons_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Commerce Coupon: Is active */
  $handler->display->display_options['filters']['is_active']['id'] = 'is_active';
  $handler->display->display_options['filters']['is_active']['table'] = 'commerce_coupon';
  $handler->display->display_options['filters']['is_active']['field'] = 'is_active';
  $handler->display->display_options['filters']['is_active']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'user',
      'context' => 'entity:commerce_coupon.commerce-coupon-code',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );
  $translatables['user_reward_coupon_list'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<p>Earn coupons by purchasing!</p>'),
    t('<p>You have not earn any coupons yet.</p>'),
    t('User referencing Commerce Coupon from field_earned_coupons'),
    t('Coupon ID'),
    t('.'),
    t(','),
    t('Coupon Code'),
    t('From order'),
    t('Granted amount'),
    t('Maximum number of Uses'),
    t('Times used'),
    t('All'),
    t('Content pane'),
    t('View panes'),
  );
  $export['user_reward_coupon_list'] = $view;

  return $export;
}
