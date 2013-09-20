(function ($){
   $(window).load(function(){
        $('.mmc-block-content-preloader').animate(
            {opacity: 0}, 800, function(){
                $('.mmc-block-content-preloader').css('display','none');
            }
        );
    });
})(jQuery);