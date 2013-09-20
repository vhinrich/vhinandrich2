
(function ($) {

/**
 * Provide summary information for vertical tabs.
 */
Drupal.behaviors.onix_facebookFieldsetSummaries = {
  attach: function (context) {
//  console.log("Debbugging");
//  console.log( $('fieldset.edit-onix-facebook-comments') );
	// Provide summary when editting a node.
	$('fieldset.edit-onix-facebook-comments', context).drupalSetSummary(function(context) {
      if ($('#edit-onix-facebook-enabled').attr('checked')) {
        return Drupal.t('Comments enabled');
      }
      else {
        return Drupal.t('Comments disabled');
      }
    });
  }
};

})(jQuery);
