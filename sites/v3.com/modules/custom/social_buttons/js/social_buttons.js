(function($){
  Drupal.behaviors.social_buttons = {
    toggleShare: function(obj, state){
      if (state) {
        $('.social-buttons-wrapper').html('<h2>SHARE <span>' + $(obj).attr('data-title') + '</span></h2><div>' + $(obj).html() + '</div>');
        //referesh like button
        var socialElement = $('.social-buttons-wrapper');
        FB.XFBML.parse(socialElement[0]);
        
        twttr.widgets.load();
        
        gapi.plusone.go();
      }else{
        $('.social-buttons-wrapper').html('');
      }
    },
    attach: function(context, settings){
      
      ////init sidr
      //$(this).sidr(
      //    {
      //      name: 'social-buttons-container',
      //      side: 'right'
      //    }
      //);
      //
      //$('.field-name-social-buttons').click(function(e){
      //  
      //  
      //  if ($('#social-buttons-container').css('display')=='none') {
      //    $('.social-buttons-wrapper').html('<h2>SHARE</h2><div>' + $(this).html() + '</div>');
      //    //referesh like button
      //    var socialElement = $('.social-buttons-wrapper');
      //    FB.XFBML.parse(socialElement[0]);
      //    
      //    twttr.widgets.load();
      //    
      //    gapi.plusone.go();
      //    
      //    $.sidr('open', 'social-buttons-container');
      //  }else{
      //    $.sidr('close', 'social-buttons-container');
      //  }
      //  
      //});
      //
      //$('article, article *').click(function(e){
      //  $.sidr('close', 'social-buttons-container');
      //});
      
      $('.field-name-social-buttons').click(function(e){
        Drupal.behaviors.social_buttons.toggleShare($(this), !$('.row-offcanvas').hasClass('active'));
        $('.row-offcanvas').toggleClass('active');
        //$('.row-offcanvas.active').click(function(e){
        //  Drupal.behaviors.social_buttons.toggleShare($(this), false);
        //  $('.row-offcanvas').removeClass('active');
        //});
      });
      
      
      
    }
  };
})(jQuery);