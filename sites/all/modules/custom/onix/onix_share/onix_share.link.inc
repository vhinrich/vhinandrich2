<?php

/**
 * @file
 * File to build the required share links for social media.
 */

/**
 * Implements custom function _onix_share_get_social_links($nid) to get
 * the social links of an specific Node
 */
function _onix_share_get_social_links($nid, $exceptions = array()) {

  drupal_add_js(drupal_get_path('module', 'onix_share') . '/js/share.engine.js');

  $items = array();
  $social = '';
  
   //$url = url('node/' . $nid, array('absolute' => TRUE));
   $url = 'http://www.vhinandrich.com';
   $url .= url('node/'. $nid);
    /*
  // Bookmark
  $options = array(
    'query' => drupal_get_destination(),
    'attributes' => array(
      'class' => array('bookmark-link'),
      'id' => 'bookmark-link',
    ),
  );
  $dest = drupal_get_destination();
  $url = url($dest['destination'], array('absolute' => TRUE));
  $items[] = array(
    'data' => l(t('get-bookmark-link'), 'get/bookmark/link/' . $nid, array('attributes' => array('class' => 'get-bookmark-link'), 'query' => array('destination' => $url))),
    'class' => array("icon bookmarks")
  );
  */  
  // Facebook comments
  // enable count comments facebook
  
  // Facebook
  $items[] = array(
    'data' => '<div class="fb icon"><div class="fb-like" data-href="' . $url . '" data-send="false" data-layout="button_count" data-width="100" data-show-faces="false"></div></div>',
    'class' => array('facebook')
    );
  
    
 // Twitter
    $items[] = array(
      'data' => '<div class="twitter icon"><a href="https://twitter.com/share"
                class="twitter-share-button"
                data-size="small"
                data-count="horizontal"
                data-lang="en">Tweet</a>
                </div>',
      'class' => array('twitter')
      );

  $image = '';

  // Pinterest
  //$items[] = array(
  //  'data' => '<a href="http://pinterest.com/pin/create/button/?url=' . $url . '&media=' . $image . '&description=TODAYonline.com - ' . $url . '" class="pin-it-button" count-layout="none"><img border="0" src="//assets.pinterest.com/images/PinExt.png" title="Pin It" /></a>',
  //      'class' => array("pinterest")
  //  );

  // Tumblr
  //$items[] = array(
  //  'data' => '<a href="http://www.tumblr.com/share" title="Share on Tumblr" style="display:inline-block; text-indent:-9999px; overflow:hidden; width:20px; height:20px; background:url(\'http://platform.tumblr.com/v1/share_4.png\') top left no-repeat transparent;">Share on Tumblr</a>',
  //  'class' => array('tumblr')
  //  );
  
  // Google+
  //$items[] = array(
  //  'data' => "<div>
  //         <g:plusone size='medium'></g:plusone>
  //         <script type=\"text/javascript\">
  //           window.___gcfg = {lang: 'en-GB'};
  //
  //           (function() {
  //           var po = document.createElement('script'); po.type = 'text/javascript'; po.async = true;
  //           po.src = 'https://apis.google.com/js/plusone.js';
  //           var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(po, s);
  //           })();
  //          </script></div>",
  //    'class' => array("googleplus")
  //  );
  
  $enabled_facebook_comments_all = variable_get('onix_facebook_enableall', FALSE);
  if ($enabled_facebook_comments_all && !in_array('facebook_comments_all', $exceptions)) {
    $items[] = array(
      'data' => '<a class="fancybox" href="#fb-comments-' . $nid . '" class="fb_comments"><div class="fb-comment-icon">Comments</div></a>',
        'class' => array('facebook_comment')
      );
  } //end enable comments facebook 

  $social = theme_item_list(array(
    'items' => $items,
    'title' => '',
    'type' => 'ul',
    'attributes' => array(
      'id' => 'social-links',
      'class' => 'clearfix')
     ));

  return $social;
}
