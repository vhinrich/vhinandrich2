/**
 * @file
 * Handles AJAX submission and response for the commerce ajax cart.
 */

(function($) {
  /**
   * Extend ajax commands for update cart block.
   */
  Drupal.ajax.prototype.commands.commerce_ajax_cart_update = function(ajax, response, status) {
    window.clearTimeout(Drupal.behaviors.commerce_add_to_cart_show_ajax_cart.timer);
    $.post(Drupal.settings.commerce_ajax_cart.update_url, function(data) {
      $('.view-id-' + Drupal.settings.commerce_ajax_cart.form_id).replaceWith(data);
      // Reattach behaviour.
      var $container = $('.view-id-' + Drupal.settings.commerce_ajax_cart.form_id).parent();
      $container.unbind('mouseenter').unbind('mouseleave');
      Drupal.behaviors.commerce_add_to_cart_show_ajax_cart.attach($container);
      Drupal.behaviors.commerce_add_to_cart_show_ajax_cart.fillCartBlock();
      if ($('.commerce-add-to-cart-confirmation').length > 0) {
        var options = {
          'my': 'center center',
          'at': 'center center',
          'of': $(window)
        };
        $('.commerce-add-to-cart-confirmation').position(options);
      }
    });
  }
  Drupal.behaviors.commerce_add_to_cart_show_ajax_cart = {
    timer: 0,
    delay: 500,
    fillCartBlock: function() {
      $('a.commerce-ajax-cart-loader').each(function() {
        $.post(Drupal.settings.commerce_ajax_cart.update_url_block, function(data) {
          $('a.commerce-ajax-cart-loader').html(data);
        });
      })
    },
    repositioning: function() {
      var options = {
        'my': Drupal.settings.commerce_ajax_cart.position.my,
        'at': Drupal.settings.commerce_ajax_cart.position.at,
        'of': $('.view-id-' + Drupal.settings.commerce_ajax_cart.form_id).parent(),
        'collision': Drupal.settings.commerce_ajax_cart.position.collision
      };
      $('#commerce-ajax-cart-preview').position(options);
    },
    attach: function(context, settings) {
      // Call for chached sites to update block display.
      var $container = $(context).find('.view-id-' + Drupal.settings.commerce_ajax_cart.form_id).parent();
      $container.once('commerce-ajax-cart-processed', function() {
        Drupal.ajax.prototype.commands.commerce_ajax_cart_update();
        Drupal.behaviors.commerce_add_to_cart_show_ajax_cart.fillCartBlock(context);
      });

      $('#dc-cart-ajax-form-wrapper form').once('commerce-ajax-cart-update', function() {
        $(this).find('a').bind('click', function() {
          Drupal.ajax.prototype.commands.commerce_ajax_cart_update();
        });
      })

      $container.bind('mouseenter', function(e) {
        e.preventDefault();
        window.clearTimeout(Drupal.behaviors.commerce_add_to_cart_show_ajax_cart.timer);

        // Check if preview div is alread created.
        if ($('#commerce-ajax-cart-preview').length > 0) return;

        // Append div container.
        $(this).append('<div class="loading" id="commerce-ajax-cart-preview"><span>' + Drupal.t('Loading') + '</</div>');

        // Set position for cart preview with jquery.ui.position.
        // $('#commerce-ajax-cart-preview').position(options);
        Drupal.behaviors.commerce_add_to_cart_show_ajax_cart.repositioning();

        // Update cart preview.
        $.post(Drupal.settings.commerce_ajax_cart.ajax_url, function(data) {
          $('#commerce-ajax-cart-preview').removeClass('loading').html(data);
          Drupal.behaviors.commerce_add_to_cart_show_ajax_cart.repositioning();
        });
      }).bind('mouseleave', function() {
        // Bind mousehandler for close cart preview.
        window.clearTimeout(Drupal.behaviors.commerce_add_to_cart_show_ajax_cart.timer);
        Drupal.behaviors.commerce_add_to_cart_show_ajax_cart.timer = window.setTimeout(function() {
          $('#commerce-ajax-cart-preview').remove();
        }, Drupal.behaviors.commerce_add_to_cart_show_ajax_cart.delay);
      });
    }
  }
})(jQuery);

Drupal.ajax.prototype.commands.commerceAjaxCartFireTrigger = function(ajax, response, status) {
  jQuery(window).trigger('commerce_ajax_cart_update', response.data);
}
