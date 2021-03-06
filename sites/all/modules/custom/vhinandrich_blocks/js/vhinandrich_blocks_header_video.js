(function($){
  Drupal.behaviors.vhinandrich_blocks_header_video = {
    initHeaderVideo: function(context, settings){
      $(window).load(function(){
        if(
          (
            ($('#block-vhinandrich-blocks-vr-header-video video.video-js').length>0 && $('#block-vhinandrich-blocks-vr-header-video video.video-js > source').length===0) ||
            $('#block-vhinandrich-blocks-vr-header-video .video-js > video > source').length===0
          ) ||
          (
            typeof settings.vhinandrich_blocks.header_video.poster_only !== 'undefined' &&
            settings.vhinandrich_blocks.header_video.poster_only
          )
        ){
          $('#block-vhinandrich-blocks-vr-header-video .video-js > video').css('display', 'none');
          $('#block-vhinandrich-blocks-vr-header-video .video-js > .vjs-poster').css('display', 'block');
          $('#block-vhinandrich-blocks-vr-header-video video.video-js').css('display', 'none');
          $('#block-vhinandrich-blocks-vr-header-video video.video-js + .vjs-poster').css('display', 'block');
        }
      });
    },
    attach: function(context, settings){
      this.initHeaderVideo(context, settings);
    }
  };
})(jQuery);
