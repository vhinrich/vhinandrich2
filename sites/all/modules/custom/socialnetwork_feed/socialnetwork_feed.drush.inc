<?php

function socialnetwork_feed_drush_command(){
  $items['socialnetwork-feed-ingest'] = array(
    'description' => 'Run ingestion',
    'callback' => 'socialnetwork_feed_drush_feed_ingest',
  );

  return $items;
}

function socialnetwork_feed_drush_feed_ingest(){
  // drush command wrapper
  socialnetwork_feed_ingest(); // call socialnetwork_feed_ingest()
}
