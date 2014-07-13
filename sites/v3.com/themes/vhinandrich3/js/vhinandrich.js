(function($){
    Drupal.behaviors.vhinandrich = {
        initFitText: function(){
            $(".page-header").fitText(1.1, { minFontSize: '40px', maxFontSize: '70px' });
            //$("#block-block-1 h1").fitText(1.1, { minFontSize: '40px', maxFontSize: '100px' });
        },
        ajaxGAPush: function(){
            var d = document.location.pathname + document.location.search + document.location.hash;
            _gaq.push(['_trackPageview', d]);
        },
        detailButtonClick: function(){
            $(this).parents('article').toggleClass('detail-active');
        },
        attach: function(context, settings){
            Drupal.behaviors.vhinandrich.initFitText();
            Drupal.behaviors.vhinandrich.ajaxGAPush();

            $('.detail-viewer-container a').unbind('click', Drupal.behaviors.vhinandrich.detailButtonClick);
            $('.detail-viewer-container a').bind('click', Drupal.behaviors.vhinandrich.detailButtonClick);
        }
    };
})(jQuery);
