<?php

/**
 * @file
 * template.php
 */

 function mqcristobal_preprocess_html($variables){
    $google_font = array(
        '#tag' => 'link',
        '#attributes' => array(
            'href' => 'http://fonts.googleapis.com/css?family=Open+Sans:300italic,400italic,600italic,700italic,800italic,400,300,600,700,800',
            'rel' => 'stylesheet',
            'type' => 'text/css'
        )
    );
    drupal_add_html_head($google_font, 'google_font');
    
    $fontawesome = array(
        '#tag' => 'link',
        '#attributes' => array(
            'href' => '//maxcdn.bootstrapcdn.com/font-awesome/4.1.0/css/font-awesome.min.css',
            'rel' => 'stylesheet'
        )
    );
    drupal_add_html_head($fontawesome, 'fontawesome');
    

 }