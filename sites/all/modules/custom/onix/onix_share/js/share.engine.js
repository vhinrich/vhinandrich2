/*
 * Manages behaviors for the facebook share number of comments
 */
(function ($) {
  // Admin behaviors for backend
  Drupal.behaviors.facebook_comment = {
    attach: function(context, settings) {
      $('a.fb_comments').click(function(event) {
        event.preventDefault();
        var element = $('div.fb-comments.fb_iframe_widget');
        $('html,body').animate({ scrollTop: $(element).offset().top }, { duration: 'slow', easing: 'swing'});       
      });
    }
  };

}(jQuery));
