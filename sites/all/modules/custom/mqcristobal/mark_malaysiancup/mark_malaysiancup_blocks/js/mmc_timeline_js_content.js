(function ($){
    $('.timeline-contents-container').ready(function(){
        try {
            if ($(window).width() > 767) {
                //$(window).stellar(
                //    {
                //        horizontalScrolling:false,
                //        verticalScrolling:true
                //    }
                //);
            }
        } catch(e) {
            //alert(e);
        }
        
        if ($('.field-photo-video-background').length > 0) {
            var origBgPositions = $('.field-photo-video-background').css('background-position');
            if (origBgPositions) {
                var origBgPositions = origBgPositions.split(' ');
            }
        }
        
        $(window).scroll(function(){
            if ($(window).width() > 1024) {
                if ($('.field-photo-video-background').length > 0) {
                    var bgPosition = $('.field-photo-video-background').css('background-position');
                    if (origBgPositions) {
                        var bgPositions = bgPosition.split(' ');
                        var scrollPercentage = ($(window).scrollTop() / $(window).height()) * 100;
                        if (scrollPercentage > 100) {
                            scrollPercentage = 100;
                        }
                        if (scrollPercentage < 0) {
                            scrollPercentage = 0;
                        }
                        
                        var bgY = parseInt(origBgPositions[1]) - ($(window).height() * (scrollPercentage*.02));
                        var maxY = parseInt($('.field-photo-video-background').css('height')) * .01;
                        maxY *= -1;
                        if (maxY > bgY) {
                            bgY = maxY;
                        }
                        $('.field-photo-video-background').css('background-position', bgPositions[0] + ' ' + bgY + 'px');
                    }
                }
            }
        });
    });
})(jQuery);