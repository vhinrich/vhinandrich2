<?php
/**
 * @file
 * mqcristobal_features.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mqcristobal_features_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cardimagewrapper|node|article|portfolio_card';
  $field_group->group_name = 'group_cardimagewrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'portfolio_card';
  $field_group->parent_name = 'group_row1col1';
  $field_group->data = array(
    'label' => 'CardImageWrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_media',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'CardImageWrapper',
      'instance_settings' => array(
        'classes' => 'card-media-wrapper',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_cardimagewrapper|node|article|portfolio_card'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container|node|content_form|full';
  $field_group->group_name = 'group_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'content_form';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Container',
    'weight' => '1',
    'children' => array(
      0 => 'group_row1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Container',
      'instance_settings' => array(
        'classes' => 'container center-block',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_container|node|content_form|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_portfolio_card_wrapper|node|article|portfolio_card';
  $field_group->group_name = 'group_portfolio_card_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'portfolio_card';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'PortfolioCardWrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_row1',
      1 => 'group_row2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'PortfolioCardWrapper',
      'instance_settings' => array(
        'classes' => 'group-portfolio-card-wrapper field-group-html-element container-fluid portfolio-card-wrapper uniform-height',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => 'data-uniform-height-group="portfolio"',
      ),
    ),
  );
  $export['group_portfolio_card_wrapper|node|article|portfolio_card'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row1col1|node|article|default';
  $field_group->group_name = 'group_row1col1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row1';
  $field_group->data = array(
    'label' => 'Row1Col1',
    'weight' => '11',
    'children' => array(),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Row1Col1',
      'instance_settings' => array(
        'classes' => 'col-sm-12',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_row1col1|node|article|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row1col1|node|article|portfolio_card';
  $field_group->group_name = 'group_row1col1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'portfolio_card';
  $field_group->parent_name = 'group_row1';
  $field_group->data = array(
    'label' => 'Row1Col1',
    'weight' => '11',
    'children' => array(
      0 => 'group_cardimagewrapper',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Row1Col1',
      'instance_settings' => array(
        'classes' => 'col-sm-12',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_row1col1|node|article|portfolio_card'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row1col1|node|content_form|full';
  $field_group->group_name = 'group_row1col1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'content_form';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_row1';
  $field_group->data = array(
    'label' => 'Row1Col1',
    'weight' => '18',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Row1Col1',
      'instance_settings' => array(
        'classes' => 'col-sm-6',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_row1col1|node|content_form|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row1col2|node|content_form|full';
  $field_group->group_name = 'group_row1col2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'content_form';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_row1';
  $field_group->data = array(
    'label' => 'Row1Col2',
    'weight' => '19',
    'children' => array(
      0 => 'field_entityform',
      1 => 'spacer',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Row1Col2',
      'instance_settings' => array(
        'classes' => 'col-sm-6',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_row1col2|node|content_form|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row1|node|article|default';
  $field_group->group_name = 'group_row1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Row1',
    'weight' => '14',
    'children' => array(
      0 => 'group_row1col1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Row1',
      'instance_settings' => array(
        'classes' => 'row',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_row1|node|article|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row1|node|article|portfolio_card';
  $field_group->group_name = 'group_row1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'portfolio_card';
  $field_group->parent_name = 'group_portfolio_card_wrapper';
  $field_group->data = array(
    'label' => 'Row1',
    'weight' => '1',
    'children' => array(
      0 => 'group_row1col1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Row1',
      'instance_settings' => array(
        'classes' => 'row',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_row1|node|article|portfolio_card'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row1|node|content_form|full';
  $field_group->group_name = 'group_row1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'content_form';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_container';
  $field_group->data = array(
    'label' => 'Row1',
    'weight' => '2',
    'children' => array(
      0 => 'group_row1col1',
      1 => 'group_row1col2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Row1',
      'instance_settings' => array(
        'classes' => 'row',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_row1|node|content_form|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row2col1|node|article|portfolio_card';
  $field_group->group_name = 'group_row2col1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'portfolio_card';
  $field_group->parent_name = 'group_row2';
  $field_group->data = array(
    'label' => 'Row2Col1',
    'weight' => '7',
    'children' => array(
      0 => 'field_site_features',
      1 => 'title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Row2Col1',
      'instance_settings' => array(
        'classes' => 'col-sm-12',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
        'required_fields' => 1,
      ),
      'formatter' => '',
    ),
  );
  $export['group_row2col1|node|article|portfolio_card'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row2|node|article|portfolio_card';
  $field_group->group_name = 'group_row2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'portfolio_card';
  $field_group->parent_name = 'group_portfolio_card_wrapper';
  $field_group->data = array(
    'label' => 'Row2',
    'weight' => '2',
    'children' => array(
      0 => 'group_row2col1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Row2',
      'instance_settings' => array(
        'classes' => 'row',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_row2|node|article|portfolio_card'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row2|node|content_form|full';
  $field_group->group_name = 'group_row2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'content_form';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Row2',
    'weight' => '3',
    'children' => array(),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Row2',
      'instance_settings' => array(
        'classes' => 'row',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_row2|node|content_form|full'] = $field_group;

  return $export;
}
