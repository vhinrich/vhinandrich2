(function($){
  Drupal.behaviors.gallery_loader = {
    attach: function(context, settings){
      $('.gallery-full').remove();
      $('.gallery').removeClass('active');
      
      $('a.field-item-overlay-link').click(function(e){
        e.preventDefault();
        var gallery = $(this).parents('.gallery');
        var nid = $(gallery).attr('data-node-id');
        $.ajax(
          {
            url: Drupal.settings.basePath + 'node/7/gallery',
            success: function(data){
              $('.gallery-full').remove();
              $('.gallery').removeClass('active');
              $(gallery).addClass('active').after(data);
              $('.gallery-full').carousel();
            }
          }
        );
      });
    }
  };
})(jQuery);