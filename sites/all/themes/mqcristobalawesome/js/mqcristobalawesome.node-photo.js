(function($){
    var collage = function(){
        $('.field-name-field-photo-video .field-items').collagePlus();
    }
    $('.field-name-field-photo-video .field-items').ready(function(){
        collage();
    });
    var resizeTimer = null;
    $(window).bind('resize', function() {
        // hide all the images until we resize them
        // set the element you are scaling i.e. the first child nodes of ```.Collage``` to opacity 0
        $('.field-name-field-photo-video .field-items .field-items').css("opacity", 0);
        // set a timer to re-apply the plugin
        if (resizeTimer) clearTimeout(resizeTimer);
        resizeTimer = setTimeout(collage, 200);
    });
})(jQuery);