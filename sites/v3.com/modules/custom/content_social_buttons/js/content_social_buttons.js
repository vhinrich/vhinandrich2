(function($){
  Drupal.behaviors.content_social_buttons = {
    toggleShare: function(obj, state){
      if (state) {
        $('.content-social-buttons-wrapper').html('<h2>SHARE <span>' + $(obj).attr('data-title') + '</span></h2><div>' + $(obj).html() + '</div>');
        //referesh like button
        var socialElement = $('.content-social-buttons-wrapper');
        FB.XFBML.parse(socialElement[0]);
        
        twttr.widgets.load();
        
        gapi.plusone.go();
      }else{
        $('.content-social-buttons-wrapper').html('');
      }
    },
    attach: function(context, settings){
      
      $('.field-name-content-social-buttons').click(function(e){
        Drupal.behaviors.content_social_buttons.toggleShare($(this), !$('.row-offcanvas').hasClass('active'));
        $('.row-offcanvas').toggleClass('active');
        //$('.row-offcanvas.active').click(function(e){
        //  Drupal.behaviors.social_buttons.toggleShare($(this), false);
        //  $('.row-offcanvas').removeClass('active');
        //});
      });
      
      
      
    }
  };
})(jQuery);