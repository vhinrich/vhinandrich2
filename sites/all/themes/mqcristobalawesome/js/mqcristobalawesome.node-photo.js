(function($){
    var collage = function(obj){
        $(obj).collagePlus();
    }
    $(window).load(function(){
        $('article.node-photo ~ .field-name-field-photo-video .field-items').each(function(i,o){
            collage(o);
        });
        
        var resizeTimer = [];
        $(window).bind('resize', function() {
            // hide all the images until we resize them
            // set the element you are scaling i.e. the first child nodes of ```.Collage``` to opacity 0
            $('article.node-photo ~ .field-name-field-photo-video .field-items').each(function(i,o){
                //$(o).css("opacity", 0);
                // set a timer to re-apply the plugin
                if (resizeTimer[i]) clearTimeout(resizeTimer[i]);
                resizeTimer[i] = setTimeout(function(){
                    collage(o);
                }, 200);
            });
        });
    });
})(jQuery);