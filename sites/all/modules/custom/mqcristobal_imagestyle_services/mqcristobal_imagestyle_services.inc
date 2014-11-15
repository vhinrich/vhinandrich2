<?php

function _mqc_is_s_index($data){
  $query = db_select('image_styles', 'img_s');
  $query->fields('img_s');
  $result = $query->execute();
  while($record = $result->fetchAssoc()){
    $image_styles[] = $record;
  }
  return $image_styles;
}

function _mqc_is_s_image_from_uri($image_style){
  $image = array();
  if(isset($_GET['uri']) && $uri = $_GET['uri']){
    $uri = check_plain($uri);
    $url = image_style_url($image_style, $uri);
    $image['url'] = $url;
  }else{
  }
  return (object) $image;
}

function _mqc_is_s_image_from_uri_access($op = 'view', $args = array()){
  // return TRUE for all :)
  return TRUE;
}
