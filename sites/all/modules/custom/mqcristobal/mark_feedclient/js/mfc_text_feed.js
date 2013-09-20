(function ($){
    $(window).load(function(){
        var ajaxURL = Drupal.settings.mark_feedclient.ajaxURL;
        var ajaxSource = encodeURIComponent(Drupal.settings.mark_feedclient.sourceHashtag);
        var ajaxPage = 0;
        
        var animateTextFeed = function(){
            $('.mfc-block-text-feed').stop().animate(
                {left: '-' + $('.mfc-block-text-feed').width()},50 * $('.mfc-block-text-feed').width(),function(){
                    $('.mfc-block-text-feed').css('left',0);
                    animateTextFeed();
                }
            );
        }
        
        var loadAjaxContents = function(){
            $.ajax({
                url: ajaxURL + '?source=' + ajaxSource + '&page=' + ajaxPage,
                dataType: 'json',
                success: function(data) {
                    //$('.mfc-block-text-feed-container').html('test');
                    //console.log(data);
                    var rendered_array = data.rendered_array;
                    if(rendered_array.length > 0){
                        $(rendered_array).each(function(index,obj){
                           $('.mfc-block-text-feed-container').append(obj);
                        });
                        //var display_width = 0;
                        //$('.mmc-block-footer-display .footer-display-message .mfc-block-text-feed-container .item').each(function(index, obj){
                        //    display_width += $(obj).outerWidth();
                        //});
                        //$('.mmc-block-footer-display .footer-display-message .mfc-block-text-feed').css('width', display_width);
                        
                        ajaxPage++;
                        loadAjaxContents();
                    }else{
                        ajaxPage = 0;
                        //var tmpWidth = 0;
                        //$('.mfc-block-text-feed-container .item').each(function(inde, obj){
                        //    tmpWidth += $(obj).outerWidth();
                        //});
                        //$(".mfc-block-text-feed-container").endlessScroll({ width: '100%', height: '100px', position: 'absolute', steps: -2, speed: 60, mousestop: true });
                        //$(".mfc-block-text-feed-container").children('div').each(function(index, obj){
                        //    $(obj).css('width', tmpWidth);
                        //});
                        $('.mfc-block-text-feed-container').marquee({
                            speed: 100000,
                            gap: 50,
                            delayBeforeStart: 0,
                            direction: 'left',
                            duplicated: true,
                            pauseOnHover: true
                        });
                    }
                },
                timeout: 10000,
                error: function(jqXHR, status, errorThrown){   //the status returned will be "timeout" 
                    //do something
                    if (status=='timeout') {
                        console.log('timeout :(');
                        loadAjaxContents();
                    }
                } 
            });
        }
        
        loadAjaxContents();
    });
})(jQuery);