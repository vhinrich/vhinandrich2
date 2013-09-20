(function ($){
    $('#edit-name').ready(function(){
        if (!$('#edit-name').val()) {
            $('#edit-name').val('temp' + Math.floor(Math.random() * 1000));
        }
    });
})(jQuery);