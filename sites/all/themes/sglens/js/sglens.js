(function($){
  Drupal.behaviors.sglens = {
    attach: function(context, settings){
      this.init(context, settings);
    },
    init: function(context, settings){
      // Drupal.behaviors.sglens.navbarAffix(context, settings);
      Drupal.behaviors.sglens.bodyPaddingNavbar(context, settings);
      Drupal.behaviors.sglens.messagesContainerAffix(context, settings);
      Drupal.behaviors.sglens.autoHideMessages(context, settings);
      // Drupal.behaviors.sglens.nodeAddToCartAffix(context, settings);
      Drupal.behaviors.sglens.btnAddToCart(context, settings);
      Drupal.behaviors.sglens.cartAttachmentViewer(context, settings);
      // Drupal.behaviors.sglens.shoppingCartBlockIcon(context, settings);
    },
    shoppingCartBlockIcon: function(context, settings){
      if($('.block-sglens-main').length > 0){
        $('.block-sglens-main ul.shopping-cart-icon li.shopping-cart > a').click(function(e){
          e.preventDefault();
          $('.block-sglens-main ul.shopping-cart-icon li.shopping-cart').toggleClass('active');
          $('.block-commerce-cart').toggleClass('active');
        });
      }
    },
    autoHideMessages: function(context, settings){
      $('#messages-container .alert').each(function(i, o){
        if($('.krumo-element', o).length === 0){
          var time = i + 1;
          time = time * 10000;
          setTimeout(function(){
            $(o).fadeOut('slow', function(){
              $(this).remove();
            });
          }, time);
        }
      });
    },
    messagesContainerAffix: function(context, settings){
      $('#messages-container').affix({
        offset: {
          top: function(){
            return $('.main-container').offset().top;
          }
        }
      });
      $('#messages-container').on('affixed.bs.affix', function(){
        $('#messages-container').css({
          'top': function(){
            return $('#navbar').outerHeight(true);
          },
          'left': 0,
          'width': '100%',
          'z-index': 1001,
        });
      });
    },
    bodyPaddingNavbar: function(context, settings){
      $('body.navbar-is-fixed-top').attr('style', 'padding-top:' + $('header.navbar.navbar-fixed-top').outerHeight(true) + 'px !important');
    },
    navbarAffix: function(context, settings){
      $('#navbar').affix({
        offset: {
          top: function(){
            return $('.main-container').offset().top - $('#navbar').outerHeight(true);
          }
        }
      });
    },
    nodeAddToCartAffix: function(context, settings){
      if($(window).width() > 767){
        // affix add to cart form only when device is greater than iphon6 plus max width
        if($('.node-lens-type.view-mode-full .add-to-cart-well').length > 0){
          var origTopHeight = $('.node-lens-type.view-mode-full .add-to-cart-well').offset().top - ($('#navbar').outerHeight(true) + 50);
          var origParentBottom = $('.node-lens-type.view-mode-full .add-to-cart-well').parents('.node-lens-type.view-mode-full').offset().top + $('.node-lens-type.view-mode-full .add-to-cart-well').parents('.node-lens-type.view-mode-full').outerHeight(true);
          // var origParentBottom = $('.pane-views-panes.pane-lens-type-list-panel-pane-2').offset().top + $('.node-lens-type.view-mode-full .add-to-cart-well').outerHeight(true);
          // console.log([origParentBottom, $('.pane-views-panes.pane-lens-type-list-panel-pane-2').offset().top + $('.node-lens-type.view-mode-full .add-to-cart-well').outerHeight(true)]);
          $('.node-lens-type.view-mode-full .add-to-cart-well').affix({
            offset: {
              top: function(){
                return origTopHeight;
              },
              bottom: function(){
                return origParentBottom;
              }
            }
          });
          $('.node-lens-type.view-mode-full .add-to-cart-well').on('affixed.bs.affix', function(){
            $('.node-lens-type.view-mode-full .add-to-cart-well').removeAttr('style');
            $('.node-lens-type.view-mode-full .add-to-cart-well').css({
              top: function(){
                return $('#navbar').outerHeight(true) + 10;
              },
              width: function(){
                return $('.node-lens-type.view-mode-full .add-to-cart-well').parents('div[class*=col]').width();
              }
            });
          });
        }
      }
    },
    btnAddToCart: function(context, settings){
      $('.btn-add-to-cart').click(function(e){
        if(typeof $(this).data('add-to-cart-node') !== undefined){
          var dataAddToCartNode = $(this).data('add-to-cart-node');
          var addToCartNode = $(dataAddToCartNode);
          if($('.add-to-cart-wrapper', addToCartNode).length > 0){
            $('.add-to-cart-wrapper', addToCartNode).addClass('active');
          }
        }
      });
      $('.btn-add-to-cart-close').click(function(e){
        if(typeof $(this).data('add-to-cart-node') !== undefined){
          var dataAddToCartNode = $(this).data('add-to-cart-node');
          var addToCartNode = $(dataAddToCartNode);
          if($('.add-to-cart-wrapper', addToCartNode).length > 0){
            $('.add-to-cart-wrapper', addToCartNode).removeClass('active');
          }
        }
      });
    },
    cartAttachmentViewer: function(context, settings){
      $('.file a[type*="image"]').click(function(e){
        e.preventDefault();
        var defaultBootstrapModal = $('#default-bootstrap-modal');
        $('.modal-title', defaultBootstrapModal).html($(this).html());
        $('.modal-body', defaultBootstrapModal).html('<img src="' + $(this).attr('href') + '" class="img-responsive center-block">');
        $(defaultBootstrapModal).modal('show');
      });
    }
  };
})(jQuery);
