# Add your own trigger.

<script>
(function($) {
  $(window).bind('commerce_ajax_cart_update', function(e, formId) {
    // Do something...
  })
})(jQuery);
</script>
