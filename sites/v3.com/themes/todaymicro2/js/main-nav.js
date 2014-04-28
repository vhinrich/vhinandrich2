(function($){
    
    Drupal.behaviors.mainNav = {
        attach: function(context, settings){
            $('.navbar-nav li .roll').off('click').on('click', function(){
               var link = $('.front a', this);
               var hash = $(link).prop('hash');
               if (hash) {
                var hashObject =  $(hash);
                var parentIsModal = $(hash).parents('.page-modal');
                var parentBlock = $(hash).parents('.block');
                $('#page-modal .block').css('display', 'none');
                if (parentIsModal.length > 0) {
                    $(parentBlock).css('display', 'block');
                    var options = {}
                    $('#page-modal').modal(options);
                    
                }
               }else{
                window.location = $(link).attr('href');
               }
            });
            
            $('a.page-modal-close').off('click').on('click', function(e){
                e.preventDefault();
                $('#page-modal').modal('hide');
            });
        }
    };
    
})(jQuery);