<?php
/**
 * @file
 * mqcristobal_features.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mqcristobal_features_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|portfolio_card';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'portfolio_card';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|article|portfolio_card'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|portfolio_small_card';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'portfolio_small_card';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h6',
        'class' => '',
      ),
    ),
  );
  $export['node|article|portfolio_small_card'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blog|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'submitted_by' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'ds_time_ago',
    ),
    'ds_user_picture' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'ds_picture_square_thumbnail',
    ),
  );
  $export['node|blog|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blog|portfolio_card';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog';
  $ds_fieldsetting->view_mode = 'portfolio_card';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'submitted_by' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_time_ago',
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_square_thumbnail',
    ),
  );
  $export['node|blog|portfolio_card'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blog|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '15',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'submitted_by' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'ds_time_ago',
    ),
    'ds_user_picture' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'ds_picture_square_thumbnail',
    ),
  );
  $export['node|blog|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|content_form|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'content_form';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|content_form|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|content_form|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'content_form';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'referenced_entityform_css' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'spacer' => array(
      'weight' => '15',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'spacertop' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|content_form|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function mqcristobal_features_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'custom_google_map';
  $ds_field->label = 'Custom Google Map';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div class="google-map-wrapper">
<style>
.google-map-wrapper p{display:none}
</style>
<section id="cd-google-map">
<!-- #google-container will contain the map  -->
<div id="google-container" style="height:600px;width:100%"></div>
<!-- #cd-zoom-in and #zoom-out will be used to create our custom buttons for zooming-in/out -->
<div id="cd-zoom-in"></div>
<div id="cd-zoom-out"></div>
</section>
<script src="https://maps.googleapis.com/maps/api/js?key=AIzaSyCT33LcLQB5MMZfYIWr6WriAo1BYb4HDSI"></script>
<script>
jQuery(document).ready(function($){
	//set your google maps parameters
	var latitude = 1.3908341,
		longitude = 103.7525647,
		map_zoom = 15;

	//google map custom marker icon - .png fallback for IE11
	var is_internetExplorer11= navigator.userAgent.toLowerCase().indexOf(\'trident\') > -1;
	var marker_url = \'/sites/mqcristobal.com/files/cd-icon-location.png\';
		
	//define the basic color of your map, plus a value for saturation and brightness
	var	main_color = \'#2196f3\',
		saturation_value= -20,
		brightness_value= 5;

	//we define here the style of the map
	var style= [ 
		{
			//set saturation for the labels on the map
			elementType: "labels",
			stylers: [
				{saturation: saturation_value}
			]
		},  
	    {	//poi stands for point of interest - don\'t show these lables on the map 
			featureType: "poi",
			elementType: "labels",
			stylers: [
				{visibility: "off"}
			]
		},
		{
			//don\'t show highways lables on the map
	        featureType: \'road.highway\',
	        elementType: \'labels\',
	        stylers: [
	            {visibility: "off"}
	        ]
	    }, 
		{ 	
			//don\'t show local road lables on the map
			featureType: "road.local", 
			elementType: "labels.icon", 
			stylers: [
				{visibility: "off"} 
			] 
		},
		{ 
			//don\'t show arterial road lables on the map
			featureType: "road.arterial", 
			elementType: "labels.icon", 
			stylers: [
				{visibility: "off"}
			] 
		},
		{
			//don\'t show road lables on the map
			featureType: "road",
			elementType: "geometry.stroke",
			stylers: [
				{visibility: "off"}
			]
		}, 
		//style different elements on the map
		{ 
			featureType: "transit", 
			elementType: "geometry.fill", 
			stylers: [
				{ hue: main_color },
				{ visibility: "on" }, 
				{ lightness: brightness_value }, 
				{ saturation: saturation_value }
			]
		}, 
		{
			featureType: "poi",
			elementType: "geometry.fill",
			stylers: [
				{ hue: main_color },
				{ visibility: "on" }, 
				{ lightness: brightness_value }, 
				{ saturation: saturation_value }
			]
		},
		{
			featureType: "poi.government",
			elementType: "geometry.fill",
			stylers: [
				{ hue: main_color },
				{ visibility: "on" }, 
				{ lightness: brightness_value }, 
				{ saturation: saturation_value }
			]
		},
		{
			featureType: "poi.sport_complex",
			elementType: "geometry.fill",
			stylers: [
				{ hue: main_color },
				{ visibility: "on" }, 
				{ lightness: brightness_value }, 
				{ saturation: saturation_value }
			]
		},
		{
			featureType: "poi.attraction",
			elementType: "geometry.fill",
			stylers: [
				{ hue: main_color },
				{ visibility: "on" }, 
				{ lightness: brightness_value }, 
				{ saturation: saturation_value }
			]
		},
		{
			featureType: "poi.business",
			elementType: "geometry.fill",
			stylers: [
				{ hue: main_color },
				{ visibility: "on" }, 
				{ lightness: brightness_value }, 
				{ saturation: saturation_value }
			]
		},
		{
			featureType: "transit",
			elementType: "geometry.fill",
			stylers: [
				{ hue: main_color },
				{ visibility: "on" }, 
				{ lightness: brightness_value }, 
				{ saturation: saturation_value }
			]
		},
		{
			featureType: "transit.station",
			elementType: "geometry.fill",
			stylers: [
				{ hue: main_color },
				{ visibility: "on" }, 
				{ lightness: brightness_value }, 
				{ saturation: saturation_value }
			]
		},
		{
			featureType: "landscape",
			stylers: [
				{ hue: main_color },
				{ visibility: "on" }, 
				{ lightness: brightness_value }, 
				{ saturation: saturation_value }
			]
			
		},
		{
			featureType: "road",
			elementType: "geometry.fill",
			stylers: [
				{ hue: main_color },
				{ visibility: "on" }, 
				{ lightness: brightness_value }, 
				{ saturation: saturation_value }
			]
		},
		{
			featureType: "road.highway",
			elementType: "geometry.fill",
			stylers: [
				{ hue: main_color },
				{ visibility: "on" }, 
				{ lightness: brightness_value }, 
				{ saturation: saturation_value }
			]
		}, 
		{
			featureType: "water",
			elementType: "geometry",
			stylers: [
				{ hue: main_color },
				{ visibility: "on" }, 
				{ lightness: brightness_value }, 
				{ saturation: saturation_value }
			]
		}
	];
		
	//set google map options
	var map_options = {
      	center: new google.maps.LatLng(latitude, longitude),
      	zoom: map_zoom,
      	panControl: false,
      	zoomControl: false,
      	mapTypeControl: false,
      	streetViewControl: false,
      	mapTypeId: google.maps.MapTypeId.ROADMAP,
      	scrollwheel: false,
      	styles: style,
        draggable: false
    }
    //inizialize the map
	var map = new google.maps.Map(document.getElementById(\'google-container\'), map_options);
	//add a custom marker to the map				
	var marker = new google.maps.Marker({
	  	position: new google.maps.LatLng(latitude, longitude),
	    map: map,
	    visible: true,
	 	icon: marker_url,
	});

	//add custom buttons for the zoom-in/zoom-out on the map
	function CustomZoomControl(controlDiv, map) {
		//grap the zoom elements from the DOM and insert them in the map 
	  	var controlUIzoomIn= document.getElementById(\'cd-zoom-in\'),
	  		controlUIzoomOut= document.getElementById(\'cd-zoom-out\');
	  	controlDiv.appendChild(controlUIzoomIn);
	  	controlDiv.appendChild(controlUIzoomOut);

		// Setup the click event listeners and zoom-in or out according to the clicked element
		google.maps.event.addDomListener(controlUIzoomIn, \'click\', function() {
		    map.setZoom(map.getZoom()+1)
		});
		google.maps.event.addDomListener(controlUIzoomOut, \'click\', function() {
		    map.setZoom(map.getZoom()-1)
		});
	}

	var zoomControlDiv = document.createElement(\'div\');
 	var zoomControl = new CustomZoomControl(zoomControlDiv, map);

  	//insert the zoom div on the top left of the map
  	map.controls[google.maps.ControlPosition.LEFT_TOP].push(zoomControlDiv);
});
</script>
</div>',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['custom_google_map'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'referenced_entityform_css';
  $ds_field->label = 'Referenced Entityform CSS';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<style>
.entity-entityform-type > h2{display:none}
</style>',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['referenced_entityform_css'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'spacer';
  $ds_field->label = 'SpacerBottom';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div style="margin-bottom:60px"></div>',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['spacer'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'spacertop';
  $ds_field->label = 'SpacerTop';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div style="margin-top:60px"></div>',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['spacertop'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mqcristobal_features_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'entityform|contact_form|default';
  $ds_layout->entity_type = 'entityform';
  $ds_layout->bundle = 'contact_form';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_email_address',
        1 => 'field_message',
      ),
    ),
    'fields' => array(
      'field_email_address' => 'central',
      'field_message' => 'central',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
      'central' => array(
        'col-sm-12' => 'col-sm-12',
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
  $export['entityform|contact_form|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_media',
        1 => 'body',
        2 => 'field_link',
        3 => 'field_source',
        4 => 'field_site_features',
        5 => 'field_tags',
      ),
    ),
    'fields' => array(
      'field_media' => 'central',
      'body' => 'central',
      'field_link' => 'central',
      'field_source' => 'central',
      'field_site_features' => 'central',
      'field_tags' => 'central',
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
  $export['node|article|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|portfolio_card';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'portfolio_card';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'group_portfolio_card_wrapper',
        1 => 'title',
        2 => 'group_cardimagewrapper',
        3 => 'group_row1',
        4 => 'field_site_features',
        5 => 'group_row2',
        6 => 'field_media',
        7 => 'group_row2col1',
        8 => 'group_row1col1',
      ),
    ),
    'fields' => array(
      'group_portfolio_card_wrapper' => 'central',
      'title' => 'central',
      'group_cardimagewrapper' => 'central',
      'group_row1' => 'central',
      'field_site_features' => 'central',
      'group_row2' => 'central',
      'field_media' => 'central',
      'group_row2col1' => 'central',
      'group_row1col1' => 'central',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
      'central' => array(
        'col-sm-12' => 'col-sm-12',
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
  $export['node|article|portfolio_card'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|portfolio_small_card';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'portfolio_small_card';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_media',
      ),
      'right' => array(
        1 => 'title',
      ),
    ),
    'fields' => array(
      'field_media' => 'left',
      'title' => 'right',
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
  $export['node|article|portfolio_small_card'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'body',
        1 => 'field_category',
      ),
    ),
    'fields' => array(
      'body' => 'central',
      'field_category' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|blog|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'group_user',
        1 => 'field_category',
        2 => 'body',
        3 => 'submitted_by',
        4 => 'group_userrow',
        5 => 'ds_user_picture',
        6 => 'group_userrowcol1',
        7 => 'group_userrowcol2',
      ),
    ),
    'fields' => array(
      'group_user' => 'central',
      'field_category' => 'central',
      'body' => 'central',
      'submitted_by' => 'central',
      'group_userrow' => 'central',
      'ds_user_picture' => 'central',
      'group_userrowcol1' => 'central',
      'group_userrowcol2' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|blog|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog|portfolio_card';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog';
  $ds_layout->view_mode = 'portfolio_card';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'ds_user_picture',
        1 => 'group_portfolio_card_wrapper',
        2 => 'submitted_by',
        3 => 'group_row',
        4 => 'title',
        5 => 'group_user',
        6 => 'group_row1col1',
        7 => 'body',
        8 => 'field_category',
        9 => 'node_link',
        10 => 'group_userrow',
        11 => 'group_userrowcol1',
        12 => 'group_userrowcol2',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'central',
      'group_portfolio_card_wrapper' => 'central',
      'submitted_by' => 'central',
      'group_row' => 'central',
      'title' => 'central',
      'group_user' => 'central',
      'group_row1col1' => 'central',
      'body' => 'central',
      'field_category' => 'central',
      'node_link' => 'central',
      'group_userrow' => 'central',
      'group_userrowcol1' => 'central',
      'group_userrowcol2' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|blog|portfolio_card'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title',
        1 => 'group_user',
        2 => 'group_bodycontainer',
        3 => 'group_userrow',
        4 => 'ds_user_picture',
        5 => 'submitted_by',
        6 => 'field_category',
        7 => 'group_userrowcol1',
        8 => 'body',
        9 => 'group_readmorewrapper',
        10 => 'group_userrowcol2',
        11 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'central',
      'group_user' => 'central',
      'group_bodycontainer' => 'central',
      'group_userrow' => 'central',
      'ds_user_picture' => 'central',
      'submitted_by' => 'central',
      'field_category' => 'central',
      'group_userrowcol1' => 'central',
      'body' => 'central',
      'group_readmorewrapper' => 'central',
      'group_userrowcol2' => 'central',
      'node_link' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|blog|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|content_form|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'content_form';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'body',
      ),
      'right' => array(
        2 => 'field_entityform',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'body' => 'left',
      'field_entityform' => 'right',
    ),
    'classes' => array(),
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
  $export['node|content_form|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|content_form|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'content_form';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'spacertop',
        1 => 'group_container',
        2 => 'group_row1',
        3 => 'group_row2',
        4 => 'referenced_entityform_css',
        5 => 'title',
        6 => 'body',
        7 => 'field_entityform',
        8 => 'spacer',
        9 => 'group_row1col1',
        10 => 'group_row1col2',
      ),
    ),
    'fields' => array(
      'spacertop' => 'central',
      'group_container' => 'central',
      'group_row1' => 'central',
      'group_row2' => 'central',
      'referenced_entityform_css' => 'central',
      'title' => 'central',
      'body' => 'central',
      'field_entityform' => 'central',
      'spacer' => 'central',
      'group_row1col1' => 'central',
      'group_row1col2' => 'central',
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
  $export['node|content_form|full'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function mqcristobal_features_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'homepage_teaser_1';
  $ds_view_mode->label = 'Homepage Teaser 1';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'file' => 'file',
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['homepage_teaser_1'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'homepage_teaser_2';
  $ds_view_mode->label = 'Homepage Teaser 2';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'file' => 'file',
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['homepage_teaser_2'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'homepage_teaser_3';
  $ds_view_mode->label = 'Homepage Teaser 3';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'file' => 'file',
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['homepage_teaser_3'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'portfolio';
  $ds_view_mode->label = 'Portfolio';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'file' => 'file',
  );
  $export['portfolio'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'portfolio_card';
  $ds_view_mode->label = 'Portfolio Card';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['portfolio_card'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'portfolio_full_image';
  $ds_view_mode->label = 'Portfolio Full Image';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['portfolio_full_image'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'portfolio_small_card';
  $ds_view_mode->label = 'Portfolio Small Card';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['portfolio_small_card'] = $ds_view_mode;

  return $export;
}
