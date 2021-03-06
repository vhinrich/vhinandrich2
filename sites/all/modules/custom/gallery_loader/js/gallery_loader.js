(function($){
  Drupal.behaviors.gallery_loader = {
    attach: function(context, settings){
      if($('body.page-node').length==0){
        $('.gallery-full').remove();
        $('.gallery').removeClass('active');
      }else{
        if($.isFunction($.fn.carousel)){
          $('.gallery-full').carousel();
          $('.gallery-full').swipe( {
            swipeLeft: function() {
              $(this).carousel('next');
            },
            swipeRight: function() {
              $(this).carousel('prev');
            },
            allowPageScroll: 'vertical'
          });
        }
      }
      
      $('.left.carousel-control').click(function(e){
        e.preventDefault();
        var carousel = $(this).parents('.gallery-full');
        $(carousel).carousel('next');
      });
      $('.right.carousel-control').click(function(e){
        e.preventDefault();
        var carousel = $(this).parents('.gallery-full');
        $(carousel).carousel('prev');
      });
      
      $('a.field-item-overlay-link').click(function(e){
        e.preventDefault();
        var gallery = $(this).parents('.gallery');
        var nid = $(gallery).attr('data-node-id');
        $('.gallery').removeClass('loading');
        $(gallery).addClass('loading').delay(10000);
        $('.field-item-overlay i', gallery).removeClass('fa-camera').addClass('fa-spinner').addClass('fa-spin');
        $.ajax(
          {
            url: Drupal.settings.basePath + 'node/' + nid + '/gallery',
            success: function(data){
              $('.gallery-full').remove();
              $('.gallery').removeClass('active');
              $('.gallery').removeClass('loading');
              $('.field-item-overlay i', gallery).removeClass('fa-spin').removeClass('fa-spinner').addClass('fa-camera');
              $(gallery).addClass('active').after(data);
              if($.isFunction($.fn.carousel)){
                $('.gallery-full').carousel();
                $('.gallery-full').swipe( {
                  swipeLeft: function() {
                    $(this).carousel('next');
                  },
                  swipeRight: function() {
                    $(this).carousel('prev');
                  },
                  allowPageScroll: 'vertical'
                });
              }
            }
          }
        );
      });
    }
  };
})(jQuery);