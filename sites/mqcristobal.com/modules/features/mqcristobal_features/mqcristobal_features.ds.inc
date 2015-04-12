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
    'custom_google_map' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
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
	var	main_color = \'#2d313f\',
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
        2 => 'custom_google_map',
        3 => 'group_row1',
        4 => 'group_row2',
        5 => 'referenced_entityform_css',
        6 => 'title',
        7 => 'body',
        8 => 'field_entityform',
        9 => 'spacer',
        10 => 'group_row1col1',
        11 => 'group_row1col2',
      ),
    ),
    'fields' => array(
      'spacertop' => 'central',
      'group_container' => 'central',
      'custom_google_map' => 'central',
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

  return $export;
}
