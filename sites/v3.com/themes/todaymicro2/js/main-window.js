(function($){
    
    Drupal.behaviors.mainWindow = {
        adjustBodyPaddingTop: function(){
            $('body.navbar-is-fixed-top').attr('style', 'padding-top: ' + ( parseInt($('header.navbar-fixed-top').height())) + 'px !important');
        },
        resizeEntryListItem: function(){
            setTimeout(function(){
                var entryType = $('.view-id-entries_approved article.node.node-entry.entry_list').first();
                $('.view-id-entries_approved article.node.node-article.entry_list').each(function(i,o){
                    $(this).css('height', 'auto');
                    if ($(window).width() > 767)
                        $(this).css('height', $(entryType).height() - 1);
                });
            }, 1000);
        },
        initFitTextJs: function(){
            $(".fitText1").fitText(1.1, { minFontSize: '10px', maxFontSize: '45px' });
        },
        attach: function(context, settings){
            Drupal.behaviors.mainWindow.resizeEntryListItem();
            Drupal.behaviors.mainWindow.initFitTextJs();
            if(typeof OmniObj != 'undefined'){
                pagetracking(OmniObj);
            }
        }
    };
    
    $(window).load(function(){
        Drupal.behaviors.mainWindow.resizeEntryListItem();
        Drupal.behaviors.mainWindow.adjustBodyPaddingTop();
    });
    
    $(window).resize(function(){
        setTimeout(function(){
            Drupal.behaviors.mainWindow.resizeEntryListItem();
            Drupal.behaviors.mainWindow.adjustBodyPaddingTop();
        }, 500);
    });
    
    alert = function($value){
        console.log('alert', $value);
    }
})(jQuery);