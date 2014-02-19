(function($){
    Drupal.behaviors.vhinandrich = {
        initFitText: function(){
            $(".page-header").fitText(1.1, { minFontSize: '40px', maxFontSize: '70px' });
            $("#block-block-1 h1").fitText(1.1, { minFontSize: '40px', maxFontSize: '100px' });  
        },
        ajaxGAPush: function(){
            var d = document.location.pathname + document.location.search + document.location.hash;
            _gaq.push(['_trackPageview', d]);
        },
        attach: function(context, settings){
            Drupal.behaviors.vhinandrich.initFitText();
            
        }
    };
})(jQuery);