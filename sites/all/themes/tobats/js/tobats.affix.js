(function($){
	Drupal.behaviors.tobats_affix = {
		attach: function(context, settings){
			if($('.pane-commerce-cart-cart').length>0){
				var initalPosition = ( $('.pane-commerce-cart-cart').offset().top + $('.pane-commerce-cart-cart').height() );
				$('.pane-commerce-cart-cart').affix({
					offset: {
					  top: function(){
					  	if($('.pane-system-user-menu').length>0)
					  		return ( $('.pane-system-user-menu').offset().top + $('.pane-system-user-menu').height() );
					  	else
					  		return initalPosition;
					  }
					}
				});
			}
		}
	};
})(jQuery);
