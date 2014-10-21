(function($){
  Drupal.behaviors.content_social_buttons = {
    //toggleShare: function(obj, state){
    //  if (state) {
    //    $('.content-social-buttons-wrapper').html('<h2>SHARE <span>' + $(obj).attr('data-title') + '</span></h2><div>' + $(obj).html() + '</div>');
    //    if ($('.content-social-buttons-close.btn').length<=0) {
    //      $('body').append('<div class="content-social-buttons-close btn">X</div>');
    //    }
    //    $('.content-social-buttons-close.btn').click(function(e){
    //      Drupal.behaviors.content_social_buttons.toggleShare($(this), false);
    //      $('.row-offcanvas').removeClass('active');
    //    });
    //  }else{
    //    $('.content-social-buttons-wrapper').html('');
    //    $('.content-social-buttons-close.btn').remove();
    //  }
    //},
    //refreshSocialButtons: function(){
    //  if (typeof FB !== "undefined") {
    //    var socialElement = $('.field-name-content-social-buttons .field-items .field-item');
    //    $.each(socialElement, function(i, o){
    //      if ($('.fb-like', o).length == 0 || $(o).hasClass('fb-rendered')) {
    //        //code
    //      }else{
    //        $(o).addClass('fb-rendered');
    //        FB.XFBML.parse(o);
    //      }
    //    });
    //  }
    //  
    //  try{
    //    if (typeof twttr !== "undefined")
    //      twttr.widgets.load();
    //  }catch(e){
    //    console.log(e);
    //  }
    //  
    //  if (typeof gapi !== "undefined")
    //    gapi.plusone.go();
    //},
    //socialButtonClick: function(){
    //  Drupal.behaviors.content_social_buttons.toggleShare($(this), !$('.row-offcanvas').hasClass('active'));
    //  $('.row-offcanvas').toggleClass('active');
    //},
    //attach: function(context, settings){
    //  
    //  Drupal.behaviors.content_social_buttons.refreshSocialButtons();
    //  //$('.field-name-content-social-buttons.btn').unbind('click', Drupal.behaviors.content_social_buttons.socialButtonClick);
    //  //$('.field-name-content-social-buttons.btn').bind('click', Drupal.behaviors.content_social_buttons.socialButtonClick);
    //}
    refreshSocialButtons: function(){
      if (typeof FB !== "undefined") {
        var socialElement = $('.field-name-content-social-buttons-js .field-items .field-item');
        $.each(socialElement, function(i, o){
          if ($('.fb-like', o).length == 0 || $(o).hasClass('fb-rendered')) {
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
      
      if ($('.field-name-content-social-buttons > .field-items > .field-item > .field a').length > 0) {
        $('.field-name-content-social-buttons > .field-items > .field-item > .field a').unbind('click').bind('click', function(e){
          e.preventDefault();
          var url = $(this).attr('href');
          window.open(url, 'share', 'width=600,height=400,scrollbars=yes');
        });
      }
      
    }
  };
})(jQuery);