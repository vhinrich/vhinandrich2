(function($){
    Drupal.behaviors.timeline_waypoint = {
        loadBg: function(obj){
            if($('.field-name-field-background-media', obj).length){
                $('.timeline-bg-container .timeline-bg-wrapper').hide().html('<div class="timeline-bg-overlay"></div><div class="timeline-bg-image"></div>').fadeIn('fast');
                var src =  $('.field-name-field-background-media img', obj).attr('src');
                $('.timeline-bg-container .timeline-bg-image').css('background-image', 'url("' + src + '")');
            }else{
                $('.timeline-bg-container .timeline-bg-wrapper').fadeOut('fast', function(){
                   $(this).html('');
                });
            }
        },
        reanimateChart: function(obj){

            $('.chart', obj).each(function(i,o){
                try{
                    $(o).data('easyPieChart').update(0).update($(this).attr('data-percent'));
                }catch(e){
                    console.log(e);
                }
            });

        },
        attach: function(context, settings){

            if ($('body .timeline-bg-container').length===0 ) {
                $('body').prepend('<div class="timeline-bg-container"><div class="timeline-bg-wrapper"></div></div>');
            }

            var $things = $('article.node.node-article.timeline');

            if ($things.length > 0) {
                $things.waypoint(function(direction) {
                    if (direction === 'down') {
                        Drupal.behaviors.timeline_waypoint.loadBg(this);
                        try{
                            Drupal.behaviors.timeline_waypoint.reanimateChart(this);
                        }catch(e){
                            console.log(e);
                        }
                    }
                }, { offset: '50%' });

                $things.waypoint(function(direction) {
                    if (direction === 'up') {
                        Drupal.behaviors.timeline_waypoint.loadBg(this);
                        try{
                            Drupal.behaviors.timeline_waypoint.reanimateChart(this);
                        }catch(e){
                            console.log(e);
                        }
                      }
                    }, {
                    offset: function() {
                      // This is the calculation that would give you
                      // "bottom of element hits middle of window"
                      return $.waypoints('viewportHeight') / 2 - $(this).outerHeight();
                    }
                });
            }

            $('.video-js:not(.vjs-controls-enabled)').each(function(i,o){
                _V_($(o).attr('id')).ready(function(){
                    console.log('test');
                });
            });

        }
    };
})(jQuery);
