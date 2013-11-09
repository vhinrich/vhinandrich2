(function($){
    Drupal.behaviors.mark_lotto_random_number = {
    attach: function (context, settings) {
        $('#random-button input[type=submit]').click(function(e){
            e.preventDefault();
            $.getJSON( Drupal.settings.basePath + 'mark-termform/random-numbers-json', function( data ) {
                $.each(data,function(key,val){
                    $('#edit-field-number-pool-und-0-field-number-und-' + key + '-value').attr('value', val);
                });
            });
        });
      }
    };
})(jQuery);