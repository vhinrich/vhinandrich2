function init_map(){
  var main_color = '#3498DB',
    saturation_value= -20,
    brightness_value= 5;
  var style= [
    {
      //set saturation for the labels on the map
      elementType: "labels",
      stylers: [
        {saturation: saturation_value}
      ]
    },
      { //poi stands for point of interest - don't show these lables on the map
      featureType: "poi",
      elementType: "labels",
      stylers: [
        {visibility: "off"}
      ]
    },
    {
      //don't show highways lables on the map
          featureType: 'road.highway',
          elementType: 'labels',
          stylers: [
              {visibility: "off"}
          ]
      },
    {
      //don't show local road lables on the map
      featureType: "road.local",
      elementType: "labels.icon",
      stylers: [
        {visibility: "off"}
      ]
    },
    {
      //don't show arterial road lables on the map
      featureType: "road.arterial",
      elementType: "labels.icon",
      stylers: [
        {visibility: "off"}
      ]
    },
    {
      //don't show road lables on the map
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
  var myOptions = {
    zoom:15,
    draggable: false,
    center:new google.maps.LatLng(Drupal.settings.vhinandrich_blocks.map.location.lat,Drupal.settings.vhinandrich_blocks.map.location.lng),
    panControl: false,
    zoomControl: false,
    mapTypeControl: false,
    streetViewControl: false,
    mapTypeId: google.maps.MapTypeId.ROADMAP,
    scrollwheel: false,
    styles: style
  };
  map = new google.maps.Map(document.getElementById("gmap_canvas"), myOptions);
  marker = new google.maps.Marker({map: map,position: new google.maps.LatLng(Drupal.settings.vhinandrich_blocks.map.location.lat,Drupal.settings.vhinandrich_blocks.map.location.lng), animation: google.maps.Animation.DROP});
  // infowindow = new google.maps.InfoWindow();
  // google.maps.event.addListener(marker, "click", function(){
  //   infowindow.open(map,marker);
  // });
  // infowindow.open(map,marker);
}
google.maps.event.addDomListener(window, 'load', init_map);
