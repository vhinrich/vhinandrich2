(function($){
    $('.view-display-id-block_1 .view-header').ready(function(){
        $('.view-display-id-block_1 .view-header').click(function(){
           if($('.view-display-id-block_1 .view-content').hasClass('expanded')){
            $('.view-display-id-block_1').removeClass('expanded');
            $('.view-display-id-block_1 .view-content').removeClass('expanded');
            $('.view-display-id-block_1 .view-header').removeClass('expanded');
            $('.main-container.container').removeClass('expanded');
            $('.footer.container').removeClass('expanded');
           }else{
            $('.view-display-id-block_1').addClass('expanded');
            $('.view-display-id-block_1 .view-content').addClass('expanded');
            $('.view-display-id-block_1 .view-header').addClass('expanded');
            $('.main-container.container').addClass('expanded');
            $('.footer.container').addClass('expanded');
           }
        });
    });
    $(window).load(function(){
        //init fancybox
        $(".fancybox").fancybox();
    });
    $(document).ready(function(){
        $('body').ready(function(){
           $('body').append('<div class="preloader"></div>');
           $(window).load(function(){
            $('body .preloader').stop().animate(
                {opacity:0},'fast', function(){
                    $(this).css('display','none');
                }
            )
           });
        });
        
        $('.view-display-id-default .views-row').css('min-height', $(window).height());
        $('article.node-page').css('min-height', $(window).height());
        
        $('.view-display-id-default .views-row').first().addClass('active');
        
        //$('article.node').waypoint({
        //    offset: function(){
        //        return -$(this).height() / 3.5;
        //    },
        //    handler: function(direction){
        //        if (direction=='up') {
        //            //if ($(this).prev().length>0) {
        //                //$('html, body').animate(
        //                //    {scrollTop: $(this).offset().top}, 1000
        //                //);
        //            //}
        //            $('html, body').stop();
        //        }else{
        //            //if ($(this).next().length>0) {
        //                $('html, body').stop().animate(
        //                    {scrollTop: $(this).offset().top + $(this).height()}, 1000
        //                );
        //            //}
        //        }
        //    }
        //});
        
        $('.background-media.video').waypoint({
            offset: function(){
                return -$(this).height() / 2;
            },
            handler: function(direction){
                $('.background-media.video').css('display', 'block');
                if (direction=='up') {
                    //$('.background-media.photo').css('display', 'none');
                    //$('.background-media.video').css('display', 'block');
                    //$('html, body').stop().animate(
                    //    {scrollTop: $('.background-media.video').offset().top}
                    //);
                    if ($('.videoBG video').length > 0) {
                        $('.videoBG video').get(0).play();
                    }
                }else{
                    //$('.background-media.photo').css('display', 'block');
                    //$('.background-media.video').css('display', 'none');
                    if ($('.videoBG video').length > 0) {
                        $('.videoBG video').get(0).pause();
                    }
                }
            }
        });
        $('.background-media.photo').waypoint({
            handler: function(direction) {
                $('.background-media.video').css('display', 'none');
                if (direction=='up') {
                    //$('.background-media.video').css('display', 'block');
                    //$('.background-media.photo').css('display', 'none');
                    //$('html, body').animate(
                    //    {scrollTop: $('.background-media.video').offset().top}
                    //);
                    //$('.videoBG video').play();
                    //console.log('3');
                }else{
                    //$('.background-media.video').css('display', 'none');
                    //$('.background-media.photo').css('display', 'block');
                    //$('html, body').animate(
                    //    {scrollTop: $('.background-media.photo').offset().top}
                    //);
                    //$('.videoBG video').pause();
                    //console.log('4');
                }
            }
        });
    });
})(jQuery);