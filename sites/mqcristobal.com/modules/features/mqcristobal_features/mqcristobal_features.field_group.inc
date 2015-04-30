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
  $field_group->identifier = 'group_bodycontainer|node|blog|teaser';
  $field_group->group_name = 'group_bodycontainer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'BodyContainer',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_category',
      2 => 'group_readmorewrapper',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'BodyContainer',
      'instance_settings' => array(
        'classes' => 'group-bodycontainer field-group-html-element',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => 'style="margin-top: 8px"',
      ),
    ),
  );
  $export['group_bodycontainer|node|blog|teaser'] = $field_group;

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
  $field_group->identifier = 'group_portfolio_card_wrapper|node|blog|portfolio_card';
  $field_group->group_name = 'group_portfolio_card_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'portfolio_card';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'PortfolioCardWrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_row',
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
  $export['group_portfolio_card_wrapper|node|blog|portfolio_card'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_readmorewrapper|node|blog|teaser';
  $field_group->group_name = 'group_readmorewrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_bodycontainer';
  $field_group->data = array(
    'label' => 'ReadMoreWrapper',
    'weight' => '14',
    'children' => array(
      0 => 'node_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'ReadMoreWrapper',
      'instance_settings' => array(
        'classes' => 'group-readmorewrapper field-group-html-element text-right',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_readmorewrapper|node|blog|teaser'] = $field_group;

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
  $field_group->identifier = 'group_row1col1|node|blog|portfolio_card';
  $field_group->group_name = 'group_row1col1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'portfolio_card';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'Row1Col1',
    'weight' => '8',
    'children' => array(
      0 => 'body',
      1 => 'field_category',
      2 => 'title',
      3 => 'node_link',
      4 => 'group_user',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Row1Col1',
      'instance_settings' => array(
        'classes' => 'group-row1col1 field-group-html-element col-sm-12',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => 'style="margin:15px 0"',
      ),
    ),
  );
  $export['group_row1col1|node|blog|portfolio_card'] = $field_group;

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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row|node|blog|portfolio_card';
  $field_group->group_name = 'group_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'portfolio_card';
  $field_group->parent_name = 'group_portfolio_card_wrapper';
  $field_group->data = array(
    'label' => 'Row1',
    'weight' => '5',
    'children' => array(
      0 => 'group_row1col1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Row1',
      'instance_settings' => array(
        'classes' => 'group-row field-group-html-element row',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_row|node|blog|portfolio_card'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_userrowcol1|node|blog|full';
  $field_group->group_name = 'group_userrowcol1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_userrow';
  $field_group->data = array(
    'label' => 'UserRowCol1',
    'weight' => '10',
    'children' => array(
      0 => 'ds_user_picture',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'UserRowCol1',
      'instance_settings' => array(
        'classes' => 'group-userrowcol1 field-group-html-element',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => 'style="width:48px;float:left;margin-right:15px"',
      ),
    ),
  );
  $export['group_userrowcol1|node|blog|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_userrowcol1|node|blog|portfolio_card';
  $field_group->group_name = 'group_userrowcol1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'portfolio_card';
  $field_group->parent_name = 'group_userrow';
  $field_group->data = array(
    'label' => 'UserRowCol1',
    'weight' => '15',
    'children' => array(
      0 => 'ds_user_picture',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'UserRowCol1',
      'instance_settings' => array(
        'classes' => 'group-userrowcol1 field-group-html-element',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => 'style="width:48px;float:left;margin-right:15px"',
      ),
    ),
  );
  $export['group_userrowcol1|node|blog|portfolio_card'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_userrowcol1|node|blog|teaser';
  $field_group->group_name = 'group_userrowcol1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_userrow';
  $field_group->data = array(
    'label' => 'UserRowCol1',
    'weight' => '13',
    'children' => array(
      0 => 'ds_user_picture',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'UserRowCol1',
      'instance_settings' => array(
        'classes' => 'group-userrowcol1 field-group-html-element',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => 'style="width:48px;float:left;margin-right:15px"',
      ),
    ),
  );
  $export['group_userrowcol1|node|blog|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_userrowcol2|node|blog|full';
  $field_group->group_name = 'group_userrowcol2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_userrow';
  $field_group->data = array(
    'label' => 'UserRowCol2',
    'weight' => '11',
    'children' => array(
      0 => 'submitted_by',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'UserRowCol2',
      'instance_settings' => array(
        'classes' => 'group-userrowcol2 field-group-html-element',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => 'style="width:auto;float:left"',
      ),
    ),
  );
  $export['group_userrowcol2|node|blog|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_userrowcol2|node|blog|portfolio_card';
  $field_group->group_name = 'group_userrowcol2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'portfolio_card';
  $field_group->parent_name = 'group_userrow';
  $field_group->data = array(
    'label' => 'UserRowCol2',
    'weight' => '16',
    'children' => array(
      0 => 'post_date',
      1 => 'submitted_by',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'UserRowCol2',
      'instance_settings' => array(
        'classes' => 'group-userrowcol2 field-group-html-element',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => 'style="width:auto;float:left"',
      ),
    ),
  );
  $export['group_userrowcol2|node|blog|portfolio_card'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_userrowcol2|node|blog|teaser';
  $field_group->group_name = 'group_userrowcol2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_userrow';
  $field_group->data = array(
    'label' => 'UserRowCol2',
    'weight' => '14',
    'children' => array(
      0 => 'post_date',
      1 => 'submitted_by',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'UserRowCol2',
      'instance_settings' => array(
        'classes' => 'group-userrowcol2 field-group-html-element',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => 'style="width:auto;float:left"',
      ),
    ),
  );
  $export['group_userrowcol2|node|blog|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_userrow|node|blog|full';
  $field_group->group_name = 'group_userrow';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_user';
  $field_group->data = array(
    'label' => 'UserRow',
    'weight' => '7',
    'children' => array(
      0 => 'group_userrowcol1',
      1 => 'group_userrowcol2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-userrow field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_userrow|node|blog|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_userrow|node|blog|portfolio_card';
  $field_group->group_name = 'group_userrow';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'portfolio_card';
  $field_group->parent_name = 'group_user';
  $field_group->data = array(
    'label' => 'UserRow',
    'weight' => '14',
    'children' => array(
      0 => 'group_userrowcol1',
      1 => 'group_userrowcol2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-userrow field-group-fieldset',
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'attributes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_userrow|node|blog|portfolio_card'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_userrow|node|blog|teaser';
  $field_group->group_name = 'group_userrow';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_user';
  $field_group->data = array(
    'label' => 'UserRow',
    'weight' => '2',
    'children' => array(
      0 => 'group_userrowcol1',
      1 => 'group_userrowcol2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'UserRow',
      'instance_settings' => array(
        'classes' => 'group-userrow field-group-html-element',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_userrow|node|blog|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user|node|blog|full';
  $field_group->group_name = 'group_user';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'User',
    'weight' => '0',
    'children' => array(
      0 => 'group_userrow',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'User',
      'instance_settings' => array(
        'classes' => 'group-user field-group-fieldset clearfix',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_user|node|blog|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user|node|blog|portfolio_card';
  $field_group->group_name = 'group_user';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'portfolio_card';
  $field_group->parent_name = 'group_row1col1';
  $field_group->data = array(
    'label' => 'User',
    'weight' => '7',
    'children' => array(
      0 => 'group_userrow',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'User',
      'instance_settings' => array(
        'classes' => 'group-user field-group-html-element clearfix',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_user|node|blog|portfolio_card'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user|node|blog|teaser';
  $field_group->group_name = 'group_user';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'User',
    'weight' => '1',
    'children' => array(
      0 => 'group_userrow',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'User',
      'instance_settings' => array(
        'classes' => 'group-user field-group-html-element clearfix',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_user|node|blog|teaser'] = $field_group;

  return $export;
}
