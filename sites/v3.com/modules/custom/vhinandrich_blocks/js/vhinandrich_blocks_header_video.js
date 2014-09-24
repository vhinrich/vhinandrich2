(function($){
  Drupal.behaviors.vhinandrich_blocks_video_header = {
    initVideoHeader: function(context, settings){
      $(window).load(function(){
        if($('#block-vhinandrich-blocks-vr-header-video .video-js > video > source').length===0){
          $('#block-vhinandrich-blocks-vr-header-video .video-js > video').css('display', 'none');
          $('#block-vhinandrich-blocks-vr-header-video .video-js > .vjs-poster').css('display', 'block');
        }
      });
    },
    attach: function(context, settings){
      this.initVideoHeader(context, settings);
    }
  };
})(jQuery);
