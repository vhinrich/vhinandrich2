(function($){
  Drupal.behaviors.gallery_loader = {
    attach: function(context, settings){
      $('.gallery-full').remove();
      $('.gallery').removeClass('active');
      
      $('a.field-item-overlay-link').click(function(e){
        e.preventDefault();
        var gallery = $(this).parents('.gallery');
        var nid = $(gallery).attr('data-node-id');
        $('.gallery').removeClass('loading');
        $(gallery).addClass('loading').delay(10000);
        $('.field-item-overlay i', gallery).removeClass('fa-camera').addClass('fa-spinner').addClass('fa-spin');
        $.ajax(
          {
            url: Drupal.settings.basePath + 'node/7/gallery',
            success: function(data){
              $('.gallery-full').remove();
              $('.gallery').removeClass('active');
              $('.gallery').removeClass('loading');
              $('.field-item-overlay i', gallery).removeClass('fa-spin').removeClass('fa-spinner').addClass('fa-camera');
              $(gallery).addClass('active').after(data);
              $('.gallery-full').carousel();
            }
          }
        );
      });
    }
  };
})(jQuery);