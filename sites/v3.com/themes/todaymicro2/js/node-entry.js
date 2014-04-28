(function($){
    
    Drupal.behaviors.nodeEntry = {
        adjustColumnWidth: function(){
            $('article.node.node-entry.full .entry-main-content').removeAttr('style');
            $('article.node.node-entry.full .entry-header').removeAttr('style');
            
            var img = $('body.page-node.node-type-entry article.node.node-entry .field-name-field-photo img');
            $('article.node.node-entry.full .entry-main-content').css('width', ($(img).width()));
            $('article.node.node-entry.full .entry-header').css('width', $(window).width() - ($(img).width() + 20));
            if ($('article.node.node-entry.full .entry-header').width() <= 0) {
                $('article.node.node-entry.full .entry-main-content').removeAttr('style');
                $('article.node.node-entry.full .entry-header').removeAttr('style');
            }
        },
        adjustPhotoWidth: function(){
            var img = $('body.page-node.node-type-entry article.node.node-entry .field-name-field-photo img');
            if ($(img).length > 0 ) {
                if ($(img).height() > $(img).width()) {
                    if (!$('body.page-node.node-type-entry article.node.node-entry').hasClass('fitHeight')) {
                        $('body.page-node.node-type-entry article.node.node-entry').addClass('fitHeight');
                    }
                }
            }
        },
        entriesBackToTop: function(){
            // goto 'Top' button
            if($('.view-id-entries_approved').length>0){
                $('.entry-back-to-top').addClass('hide');
                $.waypoints.settings.scrollThrottle = 25;
                $('.view-id-entries_approved').waypoint(function(direction) {
                    $('.entry-back-to-top').toggleClass('hide', direction === "up");
                }, {
                    offset: '-100%'
                });
            }
  
        },
        attach: function(context, settings){
            Drupal.behaviors.nodeEntry.adjustPhotoWidth();
            Drupal.behaviors.nodeEntry.adjustColumnWidth();
            Drupal.behaviors.nodeEntry.entriesBackToTop();
            
            $('.view-id-entries_menu_filter .views-row .views-field-name a.active').attr('href', settings.basePath + 'entries');
        }
    };
    
    $(window).load(function(){
        Drupal.behaviors.nodeEntry.adjustPhotoWidth();
        Drupal.behaviors.nodeEntry.adjustColumnWidth();
    });
    
    $(window).resize(function(){
        setTimeout(function(){
            Drupal.behaviors.nodeEntry.adjustPhotoWidth();
            Drupal.behaviors.nodeEntry.adjustColumnWidth();
        }, 300);
    });
    
})(jQuery);