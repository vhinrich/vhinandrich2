(function($){
  Drupal.behaviors.social_icons_buttons = {
    attach: function(context, settings){
      if ($('.social-icons-list a:not([href*="mailto"])').length > 0) {
        $('.social-icons-list a:not([href*="mailto"])').unbind('click').bind('click', function(e){
          e.preventDefault();
          var url = $(this).attr('href');
          window.open(url, 'share', 'width=600,height=400,scrollbars=yes');
        });
      }

    }
  };
})(jQuery);
