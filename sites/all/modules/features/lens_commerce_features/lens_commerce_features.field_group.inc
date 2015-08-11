<?php
/**
 * @file
 * lens_commerce_features.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function lens_commerce_features_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_add_to_cart_inner|node|lens_type|card_teaser';
  $field_group->group_name = 'group_add_to_cart_inner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lens_type';
  $field_group->mode = 'card_teaser';
  $field_group->parent_name = 'group_add_to_cart_wrapper';
  $field_group->data = array(
    'label' => 'Add to cart inner',
    'weight' => '7',
    'children' => array(
      0 => 'add_to_cart_form_close_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Add to cart inner',
      'instance_settings' => array(
        'classes' => 'group-add-to-cart-inner field-group-html-element add-to-cart-inner',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_add_to_cart_inner|node|lens_type|card_teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_add_to_cart_wrapper|node|lens_type|card_teaser';
  $field_group->group_name = 'group_add_to_cart_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lens_type';
  $field_group->mode = 'card_teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Add to cart wrapper',
    'weight' => '11',
    'children' => array(
      0 => 'group_add_to_cart_inner',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Add to cart wrapper',
      'instance_settings' => array(
        'classes' => 'group-add-to-cart-wrapper field-group-html-element add-to-cart-wrapper',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_add_to_cart_wrapper|node|lens_type|card_teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_c_t_read_more_inner|node|lens_type|card_teaser';
  $field_group->group_name = 'group_c_t_read_more_inner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lens_type';
  $field_group->mode = 'card_teaser';
  $field_group->parent_name = 'group_c_t_read_more_wrapper';
  $field_group->data = array(
    'label' => 'Card Teaser Read More Inner',
    'weight' => '1',
    'children' => array(
      0 => 'field_product',
      1 => 'add_to_cart_modal_form_link',
      2 => 'node_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Card Teaser Read More Inner',
      'instance_settings' => array(
        'classes' => 'group-c-t-read-more-inner field-group-html-element read-more-inner',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_c_t_read_more_inner|node|lens_type|card_teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_c_t_read_more_overlay|node|lens_type|card_teaser';
  $field_group->group_name = 'group_c_t_read_more_overlay';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lens_type';
  $field_group->mode = 'card_teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card Teaser Read More Overlay',
    'weight' => '3',
    'children' => array(
      0 => 'spacer',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Card Teaser Read More Overlay',
      'instance_settings' => array(
        'classes' => 'group-c-t-read-more-overlay field-group-html-element read-more-overlay',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_c_t_read_more_overlay|node|lens_type|card_teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_c_t_read_more_wrapper|node|lens_type|card_teaser';
  $field_group->group_name = 'group_c_t_read_more_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lens_type';
  $field_group->mode = 'card_teaser';
  $field_group->parent_name = 'group_well';
  $field_group->data = array(
    'label' => 'Card Teaser Read More Wrapper',
    'weight' => '4',
    'children' => array(
      0 => 'group_c_t_read_more_inner',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Card Teaser Read More Wrapper',
      'instance_settings' => array(
        'classes' => 'group-c-t-read-more-wrapper field-group-html-element read-more-wrapper',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_c_t_read_more_wrapper|node|lens_type|card_teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_teaser_wrapper|node|lens_type|card_teaser';
  $field_group->group_name = 'group_card_teaser_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lens_type';
  $field_group->mode = 'card_teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card Teaser Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_well',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Card Teaser Wrapper',
      'instance_settings' => array(
        'classes' => 'group-card-teaser-wrapper field-group-html-element center-block card-teaser-wrapper',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => 'style="max-width:340px"',
      ),
    ),
  );
  $export['group_card_teaser_wrapper|node|lens_type|card_teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_teaser_wrapper|node|lens_type|card_teaser_small';
  $field_group->group_name = 'group_card_teaser_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lens_type';
  $field_group->mode = 'card_teaser_small';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card Teaser Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_well',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Card Teaser Wrapper',
      'instance_settings' => array(
        'classes' => 'group-card-teaser-wrapper field-group-html-element center-block card-teaser-wrapper',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => 'style="max-width:340px"',
      ),
    ),
  );
  $export['group_card_teaser_wrapper|node|lens_type|card_teaser_small'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cardtext|node|lens_type|card_teaser';
  $field_group->group_name = 'group_cardtext';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lens_type';
  $field_group->mode = 'card_teaser';
  $field_group->parent_name = 'group_well';
  $field_group->data = array(
    'label' => 'CardText',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'product:commerce_price',
      2 => 'title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'CardText',
      'instance_settings' => array(
        'classes' => 'group-cardtext field-group-html-element text-center',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => 'style="padding:15px 15px 35px;border-top:1px solid #E3E1DE"',
      ),
    ),
  );
  $export['group_cardtext|node|lens_type|card_teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cardtext|node|lens_type|card_teaser_small';
  $field_group->group_name = 'group_cardtext';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lens_type';
  $field_group->mode = 'card_teaser_small';
  $field_group->parent_name = 'group_well';
  $field_group->data = array(
    'label' => 'CardText',
    'weight' => '24',
    'children' => array(
      0 => 'product:commerce_price',
      1 => 'title',
      2 => 'node_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'CardText',
      'instance_settings' => array(
        'classes' => 'group-cardtext field-group-html-element text-center',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => 'style="padding:15px 15px 35px;border-top:1px solid #E3E1DE"',
      ),
    ),
  );
  $export['group_cardtext|node|lens_type|card_teaser_small'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cart|commerce_order|commerce_order|default';
  $field_group->group_name = 'group_cart';
  $field_group->entity_type = 'commerce_order';
  $field_group->bundle = 'commerce_order';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Cart',
    'weight' => '0',
    'children' => array(
      0 => 'commerce_line_items',
      1 => 'commerce_order_total',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Cart',
      'instance_settings' => array(
        'classes' => 'group-cart field-group-html-element clearfix',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_cart|commerce_order|commerce_order|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categorize|node|lens_type|form';
  $field_group->group_name = 'group_categorize';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lens_type';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_other_info';
  $field_group->data = array(
    'label' => 'Categorize',
    'weight' => '48',
    'children' => array(
      0 => 'field_category',
      1 => 'field_gender',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-categorize field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_categorize|node|lens_type|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col1|node|contact_form_display|default';
  $field_group->group_name = 'group_col1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_form_display';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'Col1',
    'weight' => '9',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Col1',
      'instance_settings' => array(
        'classes' => 'group-col1 field-group-html-element col-sm-6',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_col1|node|contact_form_display|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col2|node|contact_form_display|default';
  $field_group->group_name = 'group_col2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_form_display';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'Col2',
    'weight' => '10',
    'children' => array(
      0 => 'field_entityform',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Col2',
      'instance_settings' => array(
        'classes' => 'group-col2 field-group-html-element col-sm-6',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_col2|node|contact_form_display|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container|node|contact_form_display|default';
  $field_group->group_name = 'group_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_form_display';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Container',
    'weight' => '0',
    'children' => array(
      0 => 'group_row',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Container',
      'instance_settings' => array(
        'classes' => 'group-container field-group-html-element container',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_container|node|contact_form_display|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_row_1_col_1|node|lens_type|default';
  $field_group->group_name = 'group_left_row_1_col_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lens_type';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_left_row_1';
  $field_group->data = array(
    'label' => 'Left Row 1 Col 1',
    'weight' => '10',
    'children' => array(
      0 => 'field_social_icons',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Left Row 1 Col 1',
      'instance_settings' => array(
        'classes' => 'group-left-row-1-col-1 field-group-html-element col-xs-6',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_left_row_1_col_1|node|lens_type|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_row_1_col_2|node|lens_type|default';
  $field_group->group_name = 'group_left_row_1_col_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lens_type';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_left_row_1';
  $field_group->data = array(
    'label' => 'Left Row 1 Col 2',
    'weight' => '11',
    'children' => array(
      0 => 'field_shop_price',
      1 => 'product:commerce_price',
      2 => 'group_text_note_wrapper',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Left Row 1 Col 2',
      'instance_settings' => array(
        'classes' => 'group-left-row-1-col-2 field-group-html-element col-xs-6 text-right',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_left_row_1_col_2|node|lens_type|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_row_1|node|lens_type|default';
  $field_group->group_name = 'group_left_row_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lens_type';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Left Row 1',
    'weight' => '2',
    'children' => array(
      0 => 'group_left_row_1_col_1',
      1 => 'group_left_row_1_col_2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Left Row 1',
      'instance_settings' => array(
        'classes' => 'group-left-row-1 field-group-html-element row',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => 'style="margin-top:30px"',
      ),
    ),
  );
  $export['group_left_row_1|node|lens_type|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media_row_col|node|lens_type|default';
  $field_group->group_name = 'group_media_row_col';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lens_type';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_media_row';
  $field_group->data = array(
    'label' => 'Media row column',
    'weight' => '17',
    'children' => array(
      0 => 'field_media',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Media row column',
      'instance_settings' => array(
        'classes' => 'group-media-row-col field-group-html-element col-sm-12',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_media_row_col|node|lens_type|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media_row|node|lens_type|default';
  $field_group->group_name = 'group_media_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lens_type';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media row',
    'weight' => '0',
    'children' => array(
      0 => 'group_media_row_col',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Media row',
      'instance_settings' => array(
        'classes' => 'group-media-row field-group-html-element row',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_media_row|node|lens_type|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other_col_left|field_collection_item|field_prescription|form';
  $field_group->group_name = 'group_other_col_left';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_prescription';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_other_row';
  $field_group->data = array(
    'label' => 'Left group',
    'weight' => '49',
    'children' => array(
      0 => 'field_distance',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Left group',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-other-col-left field-group-html-element col-xs-3',
        'element' => 'td',
        'show_label' => '0',
        'label_element' => 'label',
        'attributes' => '',
      ),
    ),
  );
  $export['group_other_col_left|field_collection_item|field_prescription|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other_info|node|lens_type|form';
  $field_group->group_name = 'group_other_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lens_type';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other Info',
    'weight' => '11',
    'children' => array(
      0 => 'group_categorize',
      1 => 'group_pricing_extra',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-other-info field-group-tabs',
      ),
    ),
  );
  $export['group_other_info|node|lens_type|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other_row|field_collection_item|field_prescription|form';
  $field_group->group_name = 'group_other_row';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_prescription';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_prescription_tbody';
  $field_group->data = array(
    'label' => 'Other Row',
    'weight' => '44',
    'children' => array(
      0 => 'field_pd_label',
      1 => 'field_other_row_empty_td',
      2 => 'group_other_col_left',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Other Row',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-other-row field-group-html-element',
        'element' => 'tr',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_other_row|field_collection_item|field_prescription|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prescription_attach_row|field_collection_item|field_prescription|form';
  $field_group->group_name = 'group_prescription_attach_row';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_prescription';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Prescription Attachment Row',
    'weight' => '1',
    'children' => array(
      0 => 'group_prscriptn_attach_row_col',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Prescription Attachment Row',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-prescription-attach-row field-group-html-element row',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_prescription_attach_row|field_collection_item|field_prescription|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prescription_column|field_collection_item|field_prescription|form';
  $field_group->group_name = 'group_prescription_column';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_prescription';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_prescription_row';
  $field_group->data = array(
    'label' => 'Prescription Column',
    'weight' => '40',
    'children' => array(
      0 => 'group_prescription_table',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Prescription Column',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-prescription-column field-group-html-element col-xs-12',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_prescription_column|field_collection_item|field_prescription|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prescription_row_left_col|field_collection_item|field_prescription|form';
  $field_group->group_name = 'group_prescription_row_left_col';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_prescription';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_prescription_tbody';
  $field_group->data = array(
    'label' => 'Left',
    'weight' => '43',
    'children' => array(
      0 => 'field_prescription_left_label',
      1 => 'group_prescription_td4',
      2 => 'group_prescription_td5',
      3 => 'group_prescription_td6',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Left',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-prescription-row-left-col field-group-html-element',
        'element' => 'tr',
        'show_label' => '0',
        'label_element' => 'label',
        'attributes' => '',
      ),
    ),
  );
  $export['group_prescription_row_left_col|field_collection_item|field_prescription|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prescription_row_right_col|field_collection_item|field_prescription|form';
  $field_group->group_name = 'group_prescription_row_right_col';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_prescription';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_prescription_tbody';
  $field_group->data = array(
    'label' => 'Right',
    'weight' => '42',
    'children' => array(
      0 => 'field_prescription_right_label',
      1 => 'group_prescription_td1',
      2 => 'group_prescription_td2',
      3 => 'group_prescription_td3',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Right',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-prescription-row-right-col field-group-html-element',
        'element' => 'tr',
        'show_label' => '0',
        'label_element' => 'label',
        'attributes' => '',
      ),
    ),
  );
  $export['group_prescription_row_right_col|field_collection_item|field_prescription|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prescription_row|field_collection_item|field_prescription|form';
  $field_group->group_name = 'group_prescription_row';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_prescription';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Prescription Row',
    'weight' => '2',
    'children' => array(
      0 => 'group_prescription_column',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Prescription Row',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-prescription-row field-group-html-element row text-left',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_prescription_row|field_collection_item|field_prescription|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prescription_table|field_collection_item|field_prescription|form';
  $field_group->group_name = 'group_prescription_table';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_prescription';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_prescription_column';
  $field_group->data = array(
    'label' => 'Prescription Table',
    'weight' => '5',
    'children' => array(
      0 => 'group_prescription_tbody',
      1 => 'group_prescription_thead',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Prescription Table',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-prescription-table field-group-html-element table',
        'element' => 'table',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_prescription_table|field_collection_item|field_prescription|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prescription_tbody|field_collection_item|field_prescription|form';
  $field_group->group_name = 'group_prescription_tbody';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_prescription';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_prescription_table';
  $field_group->data = array(
    'label' => 'Prescription tbody',
    'weight' => '52',
    'children' => array(
      0 => 'group_other_row',
      1 => 'group_prescription_row_left_col',
      2 => 'group_prescription_row_right_col',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Prescription tbody',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-prescription-tbody field-group-html-element',
        'element' => 'tbody',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_prescription_tbody|field_collection_item|field_prescription|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prescription_td1|field_collection_item|field_prescription|form';
  $field_group->group_name = 'group_prescription_td1';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_prescription';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_prescription_row_right_col';
  $field_group->data = array(
    'label' => 'Prescription td1',
    'weight' => '57',
    'children' => array(
      0 => 'field_right_sphere',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Prescription td1',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-prescription-td1 field-group-html-element col-xs-3',
        'element' => 'td',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_prescription_td1|field_collection_item|field_prescription|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prescription_td2|field_collection_item|field_prescription|form';
  $field_group->group_name = 'group_prescription_td2';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_prescription';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_prescription_row_right_col';
  $field_group->data = array(
    'label' => 'Prescription td2',
    'weight' => '58',
    'children' => array(
      0 => 'field_right_cylinder',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Prescription td2',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-prescription-td2 field-group-html-element col-xs-3',
        'element' => 'td',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_prescription_td2|field_collection_item|field_prescription|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prescription_td3|field_collection_item|field_prescription|form';
  $field_group->group_name = 'group_prescription_td3';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_prescription';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_prescription_row_right_col';
  $field_group->data = array(
    'label' => 'Prescription td3',
    'weight' => '59',
    'children' => array(
      0 => 'field_right_axis',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Prescription td3',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-prescription-td3 field-group-html-element col-xs-3',
        'element' => 'td',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_prescription_td3|field_collection_item|field_prescription|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prescription_td4|field_collection_item|field_prescription|form';
  $field_group->group_name = 'group_prescription_td4';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_prescription';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_prescription_row_left_col';
  $field_group->data = array(
    'label' => 'Prescription td4',
    'weight' => '7',
    'children' => array(
      0 => 'field_left_sphere',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Prescription td4',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-prescription-td4 field-group-html-element col-xs-3',
        'element' => 'td',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_prescription_td4|field_collection_item|field_prescription|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prescription_td5|field_collection_item|field_prescription|form';
  $field_group->group_name = 'group_prescription_td5';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_prescription';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_prescription_row_left_col';
  $field_group->data = array(
    'label' => 'Prescription td5',
    'weight' => '8',
    'children' => array(
      0 => 'field_left_cylinder',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Prescription td5',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-prescription-td5 field-group-html-element col-xs-3',
        'element' => 'td',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_prescription_td5|field_collection_item|field_prescription|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prescription_td6|field_collection_item|field_prescription|form';
  $field_group->group_name = 'group_prescription_td6';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_prescription';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_prescription_row_left_col';
  $field_group->data = array(
    'label' => 'Prescription td6',
    'weight' => '9',
    'children' => array(
      0 => 'field_left_axis',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Prescription td6',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-prescription-td6 field-group-html-element col-xs-3',
        'element' => 'td',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_prescription_td6|field_collection_item|field_prescription|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prescription_thead_row|field_collection_item|field_prescription|form';
  $field_group->group_name = 'group_prescription_thead_row';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_prescription';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_prescription_thead';
  $field_group->data = array(
    'label' => 'Prescription thead row',
    'weight' => '51',
    'children' => array(
      0 => 'field_prescription_thead_ths',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Prescription thead row',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-prescription-thead-row field-group-html-element',
        'element' => 'tr',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_prescription_thead_row|field_collection_item|field_prescription|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prescription_thead|field_collection_item|field_prescription|form';
  $field_group->group_name = 'group_prescription_thead';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_prescription';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_prescription_table';
  $field_group->data = array(
    'label' => 'Prescription thead',
    'weight' => '51',
    'children' => array(
      0 => 'group_prescription_thead_row',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Prescription thead',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-prescription-thead field-group-html-element',
        'element' => 'thead',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_prescription_thead|field_collection_item|field_prescription|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pricing_extra|node|lens_type|form';
  $field_group->group_name = 'group_pricing_extra';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lens_type';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_other_info';
  $field_group->data = array(
    'label' => 'Pricing extra',
    'weight' => '49',
    'children' => array(
      0 => 'field_shop_price',
      1 => 'field_savings_price',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-pricing-extra field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pricing_extra|node|lens_type|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prscriptn_attach_row_col|field_collection_item|field_prescription|form';
  $field_group->group_name = 'group_prscriptn_attach_row_col';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_prescription';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_prescription_attach_row';
  $field_group->data = array(
    'label' => 'Prescription Attachment Row Col',
    'weight' => '39',
    'children' => array(
      0 => 'field_prescription_attachment',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Prescription Attachment Row Col',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-prscriptn-attach-row-col field-group-html-element col-sm-12',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_prscriptn_attach_row_col|field_collection_item|field_prescription|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row|node|contact_form_display|default';
  $field_group->group_name = 'group_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact_form_display';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_container';
  $field_group->data = array(
    'label' => 'Row',
    'weight' => '6',
    'children' => array(
      0 => 'group_col1',
      1 => 'group_col2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Row',
      'instance_settings' => array(
        'classes' => 'group-row field-group-html-element row',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_row|node|contact_form_display|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_note_wrapper|node|lens_type|default';
  $field_group->group_name = 'group_text_note_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lens_type';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_left_row_1_col_2';
  $field_group->data = array(
    'label' => 'Text Note Wrapper',
    'weight' => '17',
    'children' => array(
      0 => 'field_savings_price',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Text Note Wrapper',
      'instance_settings' => array(
        'classes' => 'group-text-note-wrapper field-group-html-element text-info',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_text_note_wrapper|node|lens_type|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_well|node|lens_type|card_teaser';
  $field_group->group_name = 'group_well';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lens_type';
  $field_group->mode = 'card_teaser';
  $field_group->parent_name = 'group_card_teaser_wrapper';
  $field_group->data = array(
    'label' => 'Well',
    'weight' => '1',
    'children' => array(
      0 => 'field_media',
      1 => 'group_cardtext',
      2 => 'group_c_t_read_more_wrapper',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Well',
      'instance_settings' => array(
        'classes' => 'well well-no-padding uniform-height',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => 'data-uniform-height-group="lens-type-card" style="min-height:550px"',
      ),
    ),
  );
  $export['group_well|node|lens_type|card_teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_well|node|lens_type|card_teaser_small';
  $field_group->group_name = 'group_well';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lens_type';
  $field_group->mode = 'card_teaser_small';
  $field_group->parent_name = 'group_card_teaser_wrapper';
  $field_group->data = array(
    'label' => 'Well',
    'weight' => '19',
    'children' => array(
      0 => 'field_media',
      1 => 'group_cardtext',
      2 => 'group_media_row',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Well',
      'instance_settings' => array(
        'classes' => 'well well-no-padding uniform-height',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => 'data-uniform-height-group="lens-type-card"',
      ),
    ),
  );
  $export['group_well|node|lens_type|card_teaser_small'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_well|node|lens_type|default';
  $field_group->group_name = 'group_well';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lens_type';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Product Well',
    'weight' => '4',
    'children' => array(
      0 => 'field_product',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Product Well',
      'instance_settings' => array(
        'classes' => 'group-well field-group-html-element add-to-cart-well well',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_well|node|lens_type|default'] = $field_group;

  return $export;
}
