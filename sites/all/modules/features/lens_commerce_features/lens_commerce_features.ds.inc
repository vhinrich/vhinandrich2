<?php
/**
 * @file
 * lens_commerce_features.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function lens_commerce_features_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'commerce_order|commerce_order|backoffice';
  $ds_fieldsetting->entity_type = 'commerce_order';
  $ds_fieldsetting->bundle = 'commerce_order';
  $ds_fieldsetting->view_mode = 'backoffice';
  $ds_fieldsetting->settings = array(
    'order_reward_coupon' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['commerce_order|commerce_order|backoffice'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'commerce_order|commerce_order|default';
  $ds_fieldsetting->entity_type = 'commerce_order';
  $ds_fieldsetting->bundle = 'commerce_order';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'download_invoice_pdf_link' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['commerce_order|commerce_order|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'commerce_order|commerce_order|pdf';
  $ds_fieldsetting->entity_type = 'commerce_order';
  $ds_fieldsetting->bundle = 'commerce_order';
  $ds_fieldsetting->view_mode = 'pdf';
  $ds_fieldsetting->settings = array(
    'order_number' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['commerce_order|commerce_order|pdf'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|contact_form_display|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'contact_form_display';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|contact_form_display|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|lens_type|card_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'lens_type';
  $ds_fieldsetting->view_mode = 'card_teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|lens_type|card_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|lens_type|card_teaser_small';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'lens_type';
  $ds_fieldsetting->view_mode = 'card_teaser_small';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|lens_type|card_teaser_small'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|slide|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'slide';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '20',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|slide|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|default';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_square_thumbnail',
    ),
  );
  $export['user|user|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function lens_commerce_features_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'add_to_cart_form_close_link';
  $ds_field->label = 'Add to cart form close link';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="#add-to-cart-[node:nid]" class="btn btn-link btn-add-to-cart-close" data-add-to-cart-node=".node-[node:nid]"><div><i class="glyphicon glyphicon-remove"></i></div></a>',
      'format' => 'super_full_html',
    ),
    'use_token' => 1,
  );
  $export['add_to_cart_form_close_link'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'add_to_cart_form_link';
  $ds_field->label = 'Add to cart form link';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="#add-to-cart-[node:nid]" class="btn btn-link btn-add-to-cart" data-add-to-cart-node=".node-[node:nid]"><div><i class="fa fa-cart-plus"></i></div><div>Add to cart</div></a>',
      'format' => 'super_full_html',
    ),
    'use_token' => 1,
  );
  $export['add_to_cart_form_link'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'add_to_cart_modal_form_link';
  $ds_field->label = 'Add to cart modal form link';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="#modal-add-to-cart-[node:nid]" class="btn btn-link btn-add-to-cart" data-toggle="modal" data-target="#modal-add-to-cart-[node:nid]"><div><i class="fa fa-cart-plus"></i></div><div>Add to cart</div></a>',
      'format' => 'super_full_html',
    ),
    'use_token' => 1,
  );
  $export['add_to_cart_modal_form_link'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'download_invoice_pdf_link';
  $ds_field->label = 'Download Invoice PDF Link';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'commerce_order' => 'commerce_order',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="/invoice-pdf/[commerce-order:order-id]" class="btn btn-success">Download Invoice PDF</a>',
      'format' => 'super_full_html',
    ),
    'use_token' => 1,
  );
  $export['download_invoice_pdf_link'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'order_number';
  $ds_field->label = 'Order Number';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'commerce_order' => 'commerce_order',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '[commerce-order:order-number]',
      'format' => 'super_full_html',
    ),
    'use_token' => 1,
  );
  $export['order_number'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'order_reward_coupon';
  $ds_field->label = 'Order reward coupon';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'commerce_order' => 'commerce_order',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|order_reward_coupon-block',
    'block_render' => '1',
  );
  $export['order_reward_coupon'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'product_image_with_node_link';
  $ds_field->label = 'Product Image with node link';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="[node:url]"><img src="[node:field_media:card_teaser:uri]" class="img-responsive center-block" /></a>',
      'format' => 'super_full_html',
    ),
    'use_token' => 1,
  );
  $export['product_image_with_node_link'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'social_media_link';
  $ds_field->label = 'Social media link';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'block|4',
    'block_render' => '1',
  );
  $export['social_media_link'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'spacer';
  $ds_field->label = 'Spacer';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '&nbsp;',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['spacer'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function lens_commerce_features_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_order|commerce_order|backoffice';
  $ds_layout->entity_type = 'commerce_order';
  $ds_layout->bundle = 'commerce_order';
  $ds_layout->view_mode = 'backoffice';
  $ds_layout->layout = 'panels-twocol_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'commerce_line_items',
        1 => 'commerce_coupon_order_reference',
        2 => 'commerce_order_total',
        3 => 'tracking_add',
        4 => 'tracking',
        5 => 'field_commerce_billy_i_date',
        6 => 'field_commerce_billy_cancel_date',
      ),
      'right' => array(
        7 => 'status',
        8 => 'commerce_customer_shipping',
        9 => 'commerce_customer_billing',
        10 => 'commerce_backoffice_order_payments_quick_edit_payment',
        11 => 'order_reward_coupon',
      ),
    ),
    'fields' => array(
      'commerce_line_items' => 'left',
      'commerce_coupon_order_reference' => 'left',
      'commerce_order_total' => 'left',
      'tracking_add' => 'left',
      'tracking' => 'left',
      'field_commerce_billy_i_date' => 'left',
      'field_commerce_billy_cancel_date' => 'left',
      'status' => 'right',
      'commerce_customer_shipping' => 'right',
      'commerce_customer_billing' => 'right',
      'commerce_backoffice_order_payments_quick_edit_payment' => 'right',
      'order_reward_coupon' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'top' => 'div',
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['commerce_order|commerce_order|backoffice'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_order|commerce_order|default';
  $ds_layout->entity_type = 'commerce_order';
  $ds_layout->bundle = 'commerce_order';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'group_cart',
        1 => 'commerce_line_items',
        2 => 'status',
        3 => 'commerce_coupon_order_reference',
        4 => 'commerce_order_total',
      ),
      'left' => array(
        5 => 'commerce_customer_shipping',
      ),
      'right' => array(
        6 => 'commerce_customer_billing',
      ),
      'bottom' => array(
        7 => 'tracking_add',
        8 => 'tracking',
        9 => 'commerce_backoffice_order_payments_quick_edit_payment',
        10 => 'field_commerce_billy_cancel_date',
        11 => 'field_commerce_billy_i_date',
        12 => 'download_invoice_pdf_link',
      ),
    ),
    'fields' => array(
      'group_cart' => 'top',
      'commerce_line_items' => 'top',
      'status' => 'top',
      'commerce_coupon_order_reference' => 'top',
      'commerce_order_total' => 'top',
      'commerce_customer_shipping' => 'left',
      'commerce_customer_billing' => 'right',
      'tracking_add' => 'bottom',
      'tracking' => 'bottom',
      'commerce_backoffice_order_payments_quick_edit_payment' => 'bottom',
      'field_commerce_billy_cancel_date' => 'bottom',
      'field_commerce_billy_i_date' => 'bottom',
      'download_invoice_pdf_link' => 'bottom',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'top' => 'div',
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['commerce_order|commerce_order|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_order|commerce_order|pdf';
  $ds_layout->entity_type = 'commerce_order';
  $ds_layout->bundle = 'commerce_order';
  $ds_layout->view_mode = 'pdf';
  $ds_layout->layout = 'bootstrap_6_6_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'order_number',
        1 => 'field_commerce_billy_i_date',
        2 => 'field_commerce_billy_cancel_date',
        3 => 'commerce_line_items',
        4 => 'status',
        5 => 'commerce_order_total',
        6 => 'commerce_coupon_order_reference',
      ),
      'left' => array(
        7 => 'commerce_customer_shipping',
      ),
      'right' => array(
        8 => 'commerce_customer_billing',
      ),
      'bottom' => array(
        9 => 'tracking',
      ),
    ),
    'fields' => array(
      'order_number' => 'top',
      'field_commerce_billy_i_date' => 'top',
      'field_commerce_billy_cancel_date' => 'top',
      'commerce_line_items' => 'top',
      'status' => 'top',
      'commerce_order_total' => 'top',
      'commerce_coupon_order_reference' => 'top',
      'commerce_customer_shipping' => 'left',
      'commerce_customer_billing' => 'right',
      'tracking' => 'bottom',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'top' => 'div',
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['commerce_order|commerce_order|pdf'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|contact_form_display|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'contact_form_display';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'group_container',
        1 => 'field_entityform',
        2 => 'group_row',
        3 => 'title',
        4 => 'body',
        5 => 'group_col1',
        6 => 'group_col2',
      ),
    ),
    'fields' => array(
      'group_container' => 'central',
      'field_entityform' => 'central',
      'group_row' => 'central',
      'title' => 'central',
      'body' => 'central',
      'group_col1' => 'central',
      'group_col2' => 'central',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|contact_form_display|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|lens_type|card_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'lens_type';
  $ds_layout->view_mode = 'card_teaser';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'group_card_teaser_wrapper',
        1 => 'field_media',
        2 => 'group_well',
        3 => 'group_cardtext',
        4 => 'title',
        5 => 'product:commerce_price',
      ),
    ),
    'fields' => array(
      'group_card_teaser_wrapper' => 'central',
      'field_media' => 'central',
      'group_well' => 'central',
      'group_cardtext' => 'central',
      'title' => 'central',
      'product:commerce_price' => 'central',
    ),
    'limit' => array(
      'field_media' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        'node-[node:nid]' => 'node-[node:nid]',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'article',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|lens_type|card_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|lens_type|card_teaser_small';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'lens_type';
  $ds_layout->view_mode = 'card_teaser_small';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'group_card_teaser_wrapper',
        1 => 'title',
        2 => 'product:commerce_price',
        3 => 'node_link',
        4 => 'group_well',
        5 => 'field_media',
        6 => 'group_cardtext',
      ),
    ),
    'fields' => array(
      'group_card_teaser_wrapper' => 'central',
      'title' => 'central',
      'product:commerce_price' => 'central',
      'node_link' => 'central',
      'group_well' => 'central',
      'field_media' => 'central',
      'group_cardtext' => 'central',
    ),
    'limit' => array(
      'field_media' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        'node-[node:nid]' => 'node-[node:nid]',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'article',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|lens_type|card_teaser_small'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|lens_type|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'lens_type';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_7_5';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'group_media_row',
        1 => 'field_media',
        2 => 'group_left_row_1',
        3 => 'body',
        4 => 'field_social_icons',
        7 => 'field_savings_price',
        8 => 'group_left_row_1_col_1',
        9 => 'group_left_row_1_col_2',
        10 => 'field_shop_price',
        11 => 'product:commerce_price',
        12 => 'group_text_note_wrapper',
        13 => 'group_media_row_col',
      ),
      'right' => array(
        5 => 'group_well',
        6 => 'field_product',
      ),
    ),
    'fields' => array(
      'group_media_row' => 'left',
      'field_media' => 'left',
      'group_left_row_1' => 'left',
      'body' => 'left',
      'field_social_icons' => 'left',
      'group_well' => 'right',
      'field_product' => 'right',
      'field_savings_price' => 'left',
      'group_left_row_1_col_1' => 'left',
      'group_left_row_1_col_2' => 'left',
      'field_shop_price' => 'left',
      'product:commerce_price' => 'left',
      'group_text_note_wrapper' => 'left',
      'group_media_row_col' => 'left',
    ),
    'limit' => array(
      'field_media' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|lens_type|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|slide|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'slide';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'group_bsic',
        1 => 'group_bsii',
        2 => 'group_bsiti',
        3 => 'field_media',
        4 => 'group_bsitw',
        5 => 'title',
        6 => 'body',
        7 => 'group_bsitwi',
      ),
    ),
    'fields' => array(
      'group_bsic' => 'central',
      'group_bsii' => 'central',
      'group_bsiti' => 'central',
      'field_media' => 'central',
      'group_bsitw' => 'central',
      'title' => 'central',
      'body' => 'central',
      'group_bsitwi' => 'central',
    ),
    'limit' => array(
      'field_media' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|slide|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|default';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'ds_user_picture',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'central',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['user|user|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function lens_commerce_features_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'card_teaser';
  $ds_view_mode->label = 'Card Teaser';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'file' => 'file',
  );
  $export['card_teaser'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'card_teaser_small';
  $ds_view_mode->label = 'Card Teaser Small';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['card_teaser_small'] = $ds_view_mode;

  return $export;
}
