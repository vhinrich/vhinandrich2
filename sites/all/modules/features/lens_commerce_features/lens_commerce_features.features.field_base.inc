<?php
/**
 * @file
 * lens_commerce_features.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function lens_commerce_features_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'body'
  $field_bases['body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'commerce_coupon_code'
  $field_bases['commerce_coupon_code'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_coupon',
    ),
    'field_name' => 'commerce_coupon_code',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'commerce_coupon_fixed_amount'
  $field_bases['commerce_coupon_fixed_amount'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_coupon',
    ),
    'field_name' => 'commerce_coupon_fixed_amount',
    'indexes' => array(
      'currency_price' => array(
        0 => 'amount',
        1 => 'currency_code',
      ),
    ),
    'label' => 'Fixed Amount',
    'locked' => 0,
    'module' => 'commerce_price',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'commerce_price',
  );

  // Exported field_base: 'commerce_coupon_number_of_uses'
  $field_bases['commerce_coupon_number_of_uses'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_coupon',
    ),
    'field_name' => 'commerce_coupon_number_of_uses',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'commerce_coupon_order_reference'
  $field_bases['commerce_coupon_order_reference'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_order',
      1 => 'commerce_line_item',
    ),
    'field_name' => 'commerce_coupon_order_reference',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(),
      'target_type' => 'commerce_coupon',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'commerce_coupon_percent_amount'
  $field_bases['commerce_coupon_percent_amount'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_coupon',
    ),
    'field_name' => 'commerce_coupon_percent_amount',
    'indexes' => array(),
    'label' => 'Percentage Amount',
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'entity_translation_sync' => FALSE,
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'commerce_coupon_reference'
  $field_bases['commerce_coupon_reference'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_order',
      1 => 'commerce_line_item',
    ),
    'field_name' => 'commerce_coupon_reference',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(),
      'target_type' => 'commerce_coupon',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'commerce_customer_address'
  $field_bases['commerce_customer_address'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_customer_profile',
    ),
    'field_name' => 'commerce_customer_address',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'addressfield',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'addressfield',
  );

  // Exported field_base: 'commerce_customer_billing'
  $field_bases['commerce_customer_billing'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_order',
    ),
    'field_name' => 'commerce_customer_billing',
    'indexes' => array(
      'profile_id' => array(
        0 => 'profile_id',
      ),
    ),
    'locked' => 0,
    'module' => 'commerce_customer',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'options_list_limit' => 50,
      'profile_type' => 'billing',
    ),
    'translatable' => 0,
    'type' => 'commerce_customer_profile_reference',
  );

  // Exported field_base: 'commerce_customer_shipping'
  $field_bases['commerce_customer_shipping'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_order',
    ),
    'field_name' => 'commerce_customer_shipping',
    'indexes' => array(
      'profile_id' => array(
        0 => 'profile_id',
      ),
    ),
    'locked' => 0,
    'module' => 'commerce_customer',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'options_list_limit' => 50,
      'profile_type' => 'shipping',
    ),
    'translatable' => 0,
    'type' => 'commerce_customer_profile_reference',
  );

  // Exported field_base: 'commerce_display_path'
  $field_bases['commerce_display_path'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_line_item',
    ),
    'field_name' => 'commerce_display_path',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'commerce_line_items'
  $field_bases['commerce_line_items'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_order',
    ),
    'field_name' => 'commerce_line_items',
    'indexes' => array(
      'line_item_id' => array(
        0 => 'line_item_id',
      ),
    ),
    'locked' => 1,
    'module' => 'commerce_line_item',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'commerce_line_item_reference',
  );

  // Exported field_base: 'commerce_order_total'
  $field_bases['commerce_order_total'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_order',
    ),
    'field_name' => 'commerce_order_total',
    'indexes' => array(
      'currency_price' => array(
        0 => 'amount',
        1 => 'currency_code',
      ),
    ),
    'locked' => 1,
    'module' => 'commerce_price',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'commerce_price',
  );

  // Exported field_base: 'commerce_price'
  $field_bases['commerce_price'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_product',
    ),
    'field_name' => 'commerce_price',
    'indexes' => array(
      'currency_price' => array(
        0 => 'amount',
        1 => 'currency_code',
      ),
    ),
    'locked' => 1,
    'module' => 'commerce_price',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'commerce_price',
  );

  // Exported field_base: 'commerce_product'
  $field_bases['commerce_product'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_line_item',
    ),
    'field_name' => 'commerce_product',
    'indexes' => array(
      'product_id' => array(
        0 => 'product_id',
      ),
    ),
    'locked' => 1,
    'module' => 'commerce_product_reference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'options_list_limit' => NULL,
    ),
    'translatable' => 0,
    'type' => 'commerce_product_reference',
  );

  // Exported field_base: 'commerce_shipping_service'
  $field_bases['commerce_shipping_service'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_line_item',
    ),
    'field_name' => 'commerce_shipping_service',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 1,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(),
      'allowed_values_function' => 'commerce_shipping_service_options_list',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'commerce_total'
  $field_bases['commerce_total'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_line_item',
    ),
    'field_name' => 'commerce_total',
    'indexes' => array(
      'currency_price' => array(
        0 => 'amount',
        1 => 'currency_code',
      ),
    ),
    'locked' => 1,
    'module' => 'commerce_price',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'commerce_price',
  );

  // Exported field_base: 'commerce_unit_price'
  $field_bases['commerce_unit_price'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_line_item',
    ),
    'field_name' => 'commerce_unit_price',
    'indexes' => array(
      'currency_price' => array(
        0 => 'amount',
        1 => 'currency_code',
      ),
    ),
    'locked' => 1,
    'module' => 'commerce_price',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'commerce_price',
  );

  // Exported field_base: 'eq_node'
  $field_bases['eq_node'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'entityqueue_subqueue',
    ),
    'field_name' => 'eq_node',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 1,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'entityqueue',
      'handler_settings' => array(
        'behaviors' => array(
          'entityqueue' => array(
            'status' => 1,
          ),
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_category'
  $field_bases['field_category'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_category',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'categories',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_commerce_billy_cancel_date'
  $field_bases['field_commerce_billy_cancel_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_commerce_billy_cancel_date',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'second' => 'second',
        'year' => 'year',
      ),
      'timezone_db' => 'UTC',
      'todate' => '',
      'tz_handling' => 'site',
    ),
    'translatable' => 0,
    'type' => 'datestamp',
  );

  // Exported field_base: 'field_commerce_billy_i_date'
  $field_bases['field_commerce_billy_i_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_commerce_billy_i_date',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'second' => 'second',
        'year' => 'year',
      ),
      'timezone_db' => 'UTC',
      'todate' => '',
      'tz_handling' => 'site',
    ),
    'translatable' => 0,
    'type' => 'datestamp',
  );

  // Exported field_base: 'field_contact_type'
  $field_bases['field_contact_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contact_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'General Enquiries' => 'General Enquiries',
        'Feedback' => 'Feedback',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_distance'
  $field_bases['field_distance'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_distance',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        '50.00mm' => '50.00mm',
        '50.50mm' => '50.50mm',
        '51.00mm' => '51.00mm',
        '51.50mm' => '51.50mm',
        '52.00mm' => '52.00mm',
        '52.50mm' => '52.50mm',
        '53.00mm' => '53.00mm',
        '53.50mm' => '53.50mm',
        '54.00mm' => '54.00mm',
        '54.50mm' => '54.50mm',
        '55.00mm' => '55.00mm',
        '55.50mm' => '55.50mm',
        '56.00mm' => '56.00mm',
        '56.50mm' => '56.50mm',
        '57.00mm' => '57.00mm',
        '57.50mm' => '57.50mm',
        '58.00mm' => '58.00mm',
        '58.50mm' => '58.50mm',
        '59.00mm' => '59.00mm',
        '59.50mm' => '59.50mm',
        '60.00mm' => '60.00mm',
        '60.50mm' => '60.50mm',
        '61.00mm' => '61.00mm',
        '61.50mm' => '61.50mm',
        '62.00mm' => '62.00mm',
        '62.50mm' => '62.50mm',
        '63.00mm' => '63.00mm',
        '63.50mm' => '63.50mm',
        '64.00mm' => '64.00mm',
        '64.50mm' => '64.50mm',
        '65.00mm' => '65.00mm',
        '65.50mm' => '65.50mm',
        '66.00mm' => '66.00mm',
        '66.50mm' => '66.50mm',
        '67.00mm' => '67.00mm',
        '67.50mm' => '67.50mm',
        '68.00mm' => '68.00mm',
        '68.50mm' => '68.50mm',
        '69.00mm' => '69.00mm',
        '69.50mm' => '69.50mm',
        '70.00mm' => '70.00mm',
        '70.50mm' => '70.50mm',
        '71.00mm' => '71.00mm',
        '71.50mm' => '71.50mm',
        '72.00mm' => '72.00mm',
        '72.50mm' => '72.50mm',
        '73.00mm' => '73.00mm',
        '73.50mm' => '73.50mm',
        '74.00mm' => '74.00mm',
        '74.50mm' => '74.50mm',
        '75.00mm' => '75.00mm',
        '75.50mm' => '75.50mm',
        '76.00mm' => '76.00mm',
        '76.50mm' => '76.50mm',
        '77.00mm' => '77.00mm',
        '77.50mm' => '77.50mm',
        '78.00mm' => '78.00mm',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_email_address'
  $field_bases['field_email_address'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_email_address',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'email',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'email',
  );

  // Exported field_base: 'field_entityform'
  $field_bases['field_entityform'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_entityform',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'entityqueue' => array(
            'status' => 0,
          ),
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(),
      ),
      'target_type' => 'entityform_type',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_file_image_alt_text'
  $field_bases['field_file_image_alt_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_file_image_alt_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_file_image_title_text'
  $field_bases['field_file_image_title_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_file_image_title_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_gender'
  $field_bases['field_gender'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gender',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'gender',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_image'
  $field_bases['field_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => FALSE,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_left_axis'
  $field_bases['field_left_axis'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_left_axis',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        '000' => '000',
        '001' => '001',
        '002' => '002',
        '003' => '003',
        '004' => '004',
        '005' => '005',
        '006' => '006',
        '007' => '007',
        '008' => '008',
        '009' => '009',
        '010' => '010',
        '011' => '011',
        '012' => '012',
        '013' => '013',
        '014' => '014',
        '015' => '015',
        '016' => '016',
        '017' => '017',
        '018' => '018',
        '019' => '019',
        '020' => '020',
        '021' => '021',
        '022' => '022',
        '023' => '023',
        '024' => '024',
        '025' => '025',
        '026' => '026',
        '027' => '027',
        '028' => '028',
        '029' => '029',
        '030' => '030',
        '031' => '031',
        '032' => '032',
        '033' => '033',
        '034' => '034',
        '035' => '035',
        '036' => '036',
        '037' => '037',
        '038' => '038',
        '039' => '039',
        '040' => '040',
        '041' => '041',
        '042' => '042',
        '043' => '043',
        '044' => '044',
        '045' => '045',
        '046' => '046',
        '047' => '047',
        '048' => '048',
        '049' => '049',
        '050' => '050',
        '051' => '051',
        '052' => '052',
        '053' => '053',
        '054' => '054',
        '055' => '055',
        '056' => '056',
        '057' => '057',
        '058' => '058',
        '059' => '059',
        '060' => '060',
        '061' => '061',
        '062' => '062',
        '063' => '063',
        '064' => '064',
        '065' => '065',
        '066' => '066',
        '067' => '067',
        '068' => '068',
        '069' => '069',
        '070' => '070',
        '071' => '071',
        '072' => '072',
        '073' => '073',
        '074' => '074',
        '075' => '075',
        '076' => '076',
        '077' => '077',
        '078' => '078',
        '079' => '079',
        '080' => '080',
        '081' => '081',
        '082' => '082',
        '083' => '083',
        '084' => '084',
        '085' => '085',
        '086' => '086',
        '087' => '087',
        '088' => '088',
        '089' => '089',
        '090' => '090',
        '091' => '091',
        '092' => '092',
        '093' => '093',
        '094' => '094',
        '095' => '095',
        '096' => '096',
        '097' => '097',
        '098' => '098',
        '099' => '099',
        100 => 100,
        101 => 101,
        102 => 102,
        103 => 103,
        104 => 104,
        105 => 105,
        106 => 106,
        107 => 107,
        108 => 108,
        109 => 109,
        110 => 110,
        111 => 111,
        112 => 112,
        113 => 113,
        114 => 114,
        115 => 115,
        116 => 116,
        117 => 117,
        118 => 118,
        119 => 119,
        120 => 120,
        121 => 121,
        122 => 122,
        123 => 123,
        124 => 124,
        125 => 125,
        126 => 126,
        127 => 127,
        128 => 128,
        129 => 129,
        130 => 130,
        131 => 131,
        132 => 132,
        133 => 133,
        134 => 134,
        135 => 135,
        136 => 136,
        137 => 137,
        138 => 138,
        139 => 139,
        140 => 140,
        141 => 141,
        142 => 142,
        143 => 143,
        144 => 144,
        145 => 145,
        146 => 146,
        147 => 147,
        148 => 148,
        149 => 149,
        150 => 150,
        151 => 151,
        152 => 152,
        153 => 153,
        154 => 154,
        155 => 155,
        156 => 156,
        157 => 157,
        158 => 158,
        159 => 159,
        160 => 160,
        161 => 161,
        162 => 162,
        163 => 163,
        164 => 164,
        165 => 165,
        166 => 166,
        167 => 167,
        168 => 168,
        169 => 169,
        170 => 170,
        171 => 171,
        172 => 172,
        173 => 173,
        174 => 174,
        175 => 175,
        176 => 176,
        177 => 177,
        178 => 178,
        179 => 179,
        180 => 180,
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_left_cylinder'
  $field_bases['field_left_cylinder'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_left_cylinder',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        '-2.00' => '-2.00',
        '-1.75' => -1.75,
        '-1.50' => '-1.50',
        '-1.25' => -1.25,
        '-1.00' => '-1.00',
        '-0.75' => -0.75,
        '-0.50' => '-0.50',
        '-0.25' => -0.25,
        '0.00' => '0.00',
        '+0.25' => '+0.25',
        '+0.50' => '+0.50',
        '+0.75' => '+0.75',
        '+1.00' => '+1.00',
        '+1.25' => '+1.25',
        '+1.50' => '+1.50',
        '+1.75' => '+1.75',
        '+2.00' => '+2.00',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_left_sphere'
  $field_bases['field_left_sphere'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_left_sphere',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        '-10.00' => '-10.00',
        '-9.75' => -9.75,
        '-9.50' => '-9.50',
        '-9.25' => -9.25,
        '-9.00' => '-9.00',
        '-8.75' => -8.75,
        '-8.50' => '-8.50',
        '-8.25' => -8.25,
        '-8.00' => '-8.00',
        '-7.75' => -7.75,
        '-7.50' => '-7.50',
        '-7.25' => -7.25,
        '-7.00' => '-7.00',
        '-6.75' => -6.75,
        '-6.50' => '-6.50',
        '-6.25' => -6.25,
        '-6.00' => '-6.00',
        '-5.75' => -5.75,
        '-5.50' => '-5.50',
        '-5.25' => -5.25,
        '-5.00' => '-5.00',
        '-4.75' => -4.75,
        '-4.50' => '-4.50',
        '-4.25' => -4.25,
        '-4.00' => '-4.00',
        '-3.75' => -3.75,
        '-3.50' => '-3.50',
        '-3.25' => -3.25,
        '-3.00' => '-3.00',
        '-2.75' => -2.75,
        '-2.50' => '-2.50',
        '-2.25' => -2.25,
        '-2.00' => '-2.00',
        '-1.75' => -1.75,
        '-1.50' => '-1.50',
        '-1.25' => -1.25,
        '-1.00' => '-1.00',
        '-0.75' => -0.75,
        '-0.50' => '-0.50',
        '-0.25' => -0.25,
        '0.00' => '0.00',
        '+0.25' => '+0.25',
        '+0.50' => '+0.50',
        '+0.75' => '+0.75',
        '+1.00' => '+1.00',
        '+1.25' => '+1.25',
        '+1.50' => '+1.50',
        '+1.75' => '+1.75',
        '+2.00' => '+2.00',
        '+2.25' => '+2.25',
        '+2.50' => '+2.50',
        '+2.75' => '+2.75',
        '+3.00' => '+3.00',
        '+3.25' => '+3.25',
        '+3.50' => '+3.50',
        '+3.75' => '+3.75',
        '+4.00' => '+4.00',
        '+4.25' => '+4.25',
        '+4.50' => '+4.50',
        '+4.75' => '+4.75',
        '+5.00' => '+5.00',
        '+5.25' => '+5.25',
        '+5.50' => '+5.50',
        '+5.75' => '+5.75',
        '+6.00' => '+6.00',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_media'
  $field_bases['field_media'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_media',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 1,
    'type' => 'file',
  );

  // Exported field_base: 'field_message'
  $field_bases['field_message'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_message',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_other_row_empty_td'
  $field_bases['field_other_row_empty_td'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_other_row_empty_td',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'markup' => array(
        'format' => 'super_full_html',
        'value' => '<td class="col-xs-3">&nbsp;</td><td class="col-xs-3">&nbsp;</td>',
      ),
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  // Exported field_base: 'field_pd_label'
  $field_bases['field_pd_label'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pd_label',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'markup' => array(
        'format' => 'super_full_html',
        'value' => '<th class="text-right col-xs-3">PD</th>',
      ),
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  // Exported field_base: 'field_prescription'
  $field_bases['field_prescription'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prescription',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_prescription_attachment'
  $field_bases['field_prescription_attachment'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prescription_attachment',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_prescription_left_label'
  $field_bases['field_prescription_left_label'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prescription_left_label',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'markup' => array(
        'format' => 'super_full_html',
        'value' => '<th class="text-right col-xs-3">L</th>',
      ),
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  // Exported field_base: 'field_prescription_right_label'
  $field_bases['field_prescription_right_label'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prescription_right_label',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'markup' => array(
        'format' => 'super_full_html',
        'value' => '<th class="text-right col-xs-3">R</th>',
      ),
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  // Exported field_base: 'field_prescription_thead_ths'
  $field_bases['field_prescription_thead_ths'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prescription_thead_ths',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'markup' => array(
        'format' => 'super_full_html',
        'value' => '<th class="text-center col-xs-3">&nbsp;</th>
<th class="text-center col-xs-3">SPHERE</th>
<th class="text-center col-xs-3">CYLINDER</th>
<th class="text-center col-xs-3">AXIS</th>',
      ),
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  // Exported field_base: 'field_product'
  $field_bases['field_product'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_product',
    'indexes' => array(
      'product_id' => array(
        0 => 'product_id',
      ),
    ),
    'locked' => 0,
    'module' => 'commerce_product_reference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'options_list_limit' => '',
    ),
    'translatable' => 0,
    'type' => 'commerce_product_reference',
  );

  // Exported field_base: 'field_right_axis'
  $field_bases['field_right_axis'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_right_axis',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        '000' => '000',
        '001' => '001',
        '002' => '002',
        '003' => '003',
        '004' => '004',
        '005' => '005',
        '006' => '006',
        '007' => '007',
        '008' => '008',
        '009' => '009',
        '010' => '010',
        '011' => '011',
        '012' => '012',
        '013' => '013',
        '014' => '014',
        '015' => '015',
        '016' => '016',
        '017' => '017',
        '018' => '018',
        '019' => '019',
        '020' => '020',
        '021' => '021',
        '022' => '022',
        '023' => '023',
        '024' => '024',
        '025' => '025',
        '026' => '026',
        '027' => '027',
        '028' => '028',
        '029' => '029',
        '030' => '030',
        '031' => '031',
        '032' => '032',
        '033' => '033',
        '034' => '034',
        '035' => '035',
        '036' => '036',
        '037' => '037',
        '038' => '038',
        '039' => '039',
        '040' => '040',
        '041' => '041',
        '042' => '042',
        '043' => '043',
        '044' => '044',
        '045' => '045',
        '046' => '046',
        '047' => '047',
        '048' => '048',
        '049' => '049',
        '050' => '050',
        '051' => '051',
        '052' => '052',
        '053' => '053',
        '054' => '054',
        '055' => '055',
        '056' => '056',
        '057' => '057',
        '058' => '058',
        '059' => '059',
        '060' => '060',
        '061' => '061',
        '062' => '062',
        '063' => '063',
        '064' => '064',
        '065' => '065',
        '066' => '066',
        '067' => '067',
        '068' => '068',
        '069' => '069',
        '070' => '070',
        '071' => '071',
        '072' => '072',
        '073' => '073',
        '074' => '074',
        '075' => '075',
        '076' => '076',
        '077' => '077',
        '078' => '078',
        '079' => '079',
        '080' => '080',
        '081' => '081',
        '082' => '082',
        '083' => '083',
        '084' => '084',
        '085' => '085',
        '086' => '086',
        '087' => '087',
        '088' => '088',
        '089' => '089',
        '090' => '090',
        '091' => '091',
        '092' => '092',
        '093' => '093',
        '094' => '094',
        '095' => '095',
        '096' => '096',
        '097' => '097',
        '098' => '098',
        '099' => '099',
        100 => 100,
        101 => 101,
        102 => 102,
        103 => 103,
        104 => 104,
        105 => 105,
        106 => 106,
        107 => 107,
        108 => 108,
        109 => 109,
        110 => 110,
        111 => 111,
        112 => 112,
        113 => 113,
        114 => 114,
        115 => 115,
        116 => 116,
        117 => 117,
        118 => 118,
        119 => 119,
        120 => 120,
        121 => 121,
        122 => 122,
        123 => 123,
        124 => 124,
        125 => 125,
        126 => 126,
        127 => 127,
        128 => 128,
        129 => 129,
        130 => 130,
        131 => 131,
        132 => 132,
        133 => 133,
        134 => 134,
        135 => 135,
        136 => 136,
        137 => 137,
        138 => 138,
        139 => 139,
        140 => 140,
        141 => 141,
        142 => 142,
        143 => 143,
        144 => 144,
        145 => 145,
        146 => 146,
        147 => 147,
        148 => 148,
        149 => 149,
        150 => 150,
        151 => 151,
        152 => 152,
        153 => 153,
        154 => 154,
        155 => 155,
        156 => 156,
        157 => 157,
        158 => 158,
        159 => 159,
        160 => 160,
        161 => 161,
        162 => 162,
        163 => 163,
        164 => 164,
        165 => 165,
        166 => 166,
        167 => 167,
        168 => 168,
        169 => 169,
        170 => 170,
        171 => 171,
        172 => 172,
        173 => 173,
        174 => 174,
        175 => 175,
        176 => 176,
        177 => 177,
        178 => 178,
        179 => 179,
        180 => 180,
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_right_cylinder'
  $field_bases['field_right_cylinder'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_right_cylinder',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        '-2.00' => '-2.00',
        '-1.75' => -1.75,
        '-1.50' => '-1.50',
        '-1.25' => -1.25,
        '-1.00' => '-1.00',
        '-0.75' => -0.75,
        '-0.50' => '-0.50',
        '-0.25' => -0.25,
        '0.00' => '0.00',
        '+0.25' => '+0.25',
        '+0.50' => '+0.50',
        '+0.75' => '+0.75',
        '+1.00' => '+1.00',
        '+1.25' => '+1.25',
        '+1.50' => '+1.50',
        '+1.75' => '+1.75',
        '+2.00' => '+2.00',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_right_sphere'
  $field_bases['field_right_sphere'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_right_sphere',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        '-10.00' => '-10.00',
        '-9.75' => -9.75,
        '-9.50' => '-9.50',
        '-9.25' => -9.25,
        '-9.00' => '-9.00',
        '-8.75' => -8.75,
        '-8.50' => '-8.50',
        '-8.25' => -8.25,
        '-8.00' => '-8.00',
        '-7.75' => -7.75,
        '-7.50' => '-7.50',
        '-7.25' => -7.25,
        '-7.00' => '-7.00',
        '-6.75' => -6.75,
        '-6.50' => '-6.50',
        '-6.25' => -6.25,
        '-6.00' => '-6.00',
        '-5.75' => -5.75,
        '-5.50' => '-5.50',
        '-5.25' => -5.25,
        '-5.00' => '-5.00',
        '-4.75' => -4.75,
        '-4.50' => '-4.50',
        '-4.25' => -4.25,
        '-4.00' => '-4.00',
        '-3.75' => -3.75,
        '-3.50' => '-3.50',
        '-3.25' => -3.25,
        '-3.00' => '-3.00',
        '-2.75' => -2.75,
        '-2.50' => '-2.50',
        '-2.25' => -2.25,
        '-2.00' => '-2.00',
        '-1.75' => -1.75,
        '-1.50' => '-1.50',
        '-1.25' => -1.25,
        '-1.00' => '-1.00',
        '-0.75' => -0.75,
        '-0.50' => '-0.50',
        '-0.25' => -0.25,
        '0.00' => '0.00',
        '+0.25' => '+0.25',
        '+0.50' => '+0.50',
        '+0.75' => '+0.75',
        '+1.00' => '+1.00',
        '+1.25' => '+1.25',
        '+1.50' => '+1.50',
        '+1.75' => '+1.75',
        '+2.00' => '+2.00',
        '+2.25' => '+2.25',
        '+2.50' => '+2.50',
        '+2.75' => '+2.75',
        '+3.00' => '+3.00',
        '+3.25' => '+3.25',
        '+3.50' => '+3.50',
        '+3.75' => '+3.75',
        '+4.00' => '+4.00',
        '+4.25' => '+4.25',
        '+4.50' => '+4.50',
        '+4.75' => '+4.75',
        '+5.00' => '+5.00',
        '+5.25' => '+5.25',
        '+5.50' => '+5.50',
        '+5.75' => '+5.75',
        '+6.00' => '+6.00',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_savings_price'
  $field_bases['field_savings_price'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_savings_price',
    'indexes' => array(
      'currency_price' => array(
        0 => 'amount',
        1 => 'currency_code',
      ),
    ),
    'locked' => 0,
    'module' => 'commerce_price',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'commerce_price',
  );

  // Exported field_base: 'field_shop_price'
  $field_bases['field_shop_price'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_shop_price',
    'indexes' => array(
      'currency_price' => array(
        0 => 'amount',
        1 => 'currency_code',
      ),
    ),
    'locked' => 0,
    'module' => 'commerce_price',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'commerce_price',
  );

  // Exported field_base: 'field_social_icons'
  $field_bases['field_social_icons'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_social_icons',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'socialicon_field',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'social_icons',
  );

  // Exported field_base: 'field_tags'
  $field_bases['field_tags'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tags',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'tags',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
