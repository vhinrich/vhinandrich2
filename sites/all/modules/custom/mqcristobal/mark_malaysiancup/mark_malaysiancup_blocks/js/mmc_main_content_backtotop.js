(function ($){
   $('.mmc-block-content-backtotop a.button').ready(function(){
      
      $('.mmc-block-content-backtotop a.button').click(function(e){
         e.preventDefault();
         $('html, body').animate({scrollTop: 0}, 'slow', function(){});
      });
   });
})(jQuery);