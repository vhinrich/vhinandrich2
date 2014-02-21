(function($){
  Drupal.behaviors.content_social_buttons = {
    toggleShare: function(obj, state){
      if (state) {
        $('.content-social-buttons-wrapper').html('<div class="content-social-buttons-close btn">X</div><h2>SHARE <span>' + $(obj).attr('data-title') + '</span></h2><div>' + $(obj).html() + '</div>');
      }else{
        $('.content-social-buttons-wrapper').html('');
      }
    },
    refreshSocialButtons: function(){
      if (typeof FB !== "undefined") {
        var socialElement = $('.field-name-content-social-buttons .field-items .field-item');
        $.each(socialElement, function(i, o){
          if ($(o).hasClass('fb-rendered')) {
            //code
          }else{
            $(o).addClass('fb-rendered');
            FB.XFBML.parse(o);
          }
        });
      }
      
      try{
        if (typeof twttr !== "undefined")
          twttr.widgets.load();
      }catch(e){
        console.log(e);
      }
      
      if (typeof gapi !== "undefined")
        gapi.plusone.go();
    },
    attach: function(context, settings){
      
      Drupal.behaviors.content_social_buttons.refreshSocialButtons();
      
      $('.field-name-content-social-buttons.btn').click(function(e){
        Drupal.behaviors.content_social_buttons.toggleShare($(this), !$('.row-offcanvas').hasClass('active'));
        $('.row-offcanvas').toggleClass('active');
        
        $('.content-social-buttons-close.btn').click(function(e){
          Drupal.behaviors.content_social_buttons.toggleShare($(this), false);
          $('.row-offcanvas').removeClass('active');
        });
      });
      
      
      
    }
  };
})(jQuery);