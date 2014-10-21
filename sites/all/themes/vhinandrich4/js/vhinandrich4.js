(function($){
  Drupal.behaviors.vhinandrich4 = {
    initMainMenu: function(context, settings){
      $('header#navbar').affix({
        offset: {
          top: function(){
            return $('#site-header').height() - 51;
          }
        }
      });
    },
    initFlowType: function(context, settings){
      $('.vhinrich-header h1').flowtype(
        {
         minimum   : 320,
         maximum   : 1200,
         minFont   : 12,
         maxFont   : 92,
         fontRatio : 10
        }
      );
      $('.vhinrich-header h2').flowtype(
        {
         minimum   : 320,
         maximum   : 1200,
         minFont   : 10,
         maxFont   : 32,
         fontRatio : 10
        }
      );
    },
    initVideoJs: function(context, settings){
      if($(context).hasClass('view-display-id-videos_block') || ($(context).hasClass('view-id-taxonomy_term') && $(context).hasClass('view-display-id-page'))){
        if($('.view .video-js').length > 0){
          $('.view .video-js').each(function(i,o){
            var player = null;
            if($('.pager-load-more').length > 0){
            }else{
              player = videojs($(o).attr('id'));
              if(player.Rb){

              }else{
                player.dispose();
              }
            }
            player = videojs($(o).attr('id'), {}, function(){
              // console.log($(o).attr('id'));
            });
          });
        }
      }
    },
    attach: function(context, settings){
      this.initMainMenu(context, settings);
      this.initFlowType(context, settings);
      this.initVideoJs(context, settings);
    }
  };
})(jQuery);
