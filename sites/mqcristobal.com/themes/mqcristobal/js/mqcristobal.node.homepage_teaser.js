(function($){
  Drupal.behaviors.mqcristobal_node_homepage_teaser = {
    animation_controller: null,
    attach: function(context, settings){
      Drupal.behaviors.mqcristobal_node_homepage_teaser.animation_controller = new ScrollMagic();

      $('.pin-trigger').each(function(i, o){
        // var sceneParams = {duration: $(window).height()};
        var sceneParams = {};
        // if(i>0){
          sceneParams = {triggerElement: $(o)};
        // }
        var pinObject = $('article' + $(o).attr('data-pin-item') + ' .field-name-field-background-media').first();
        var scene = new ScrollScene(sceneParams)
                      .setPin(pinObject)
                      .addTo(Drupal.behaviors.mqcristobal_node_homepage_teaser.animation_controller);
        // show indicators (requires debug extension)
        scene.addIndicators();
      });

      $('.animate-trigger').each(function(i, o){
        $('.animate', o).each(function(index, object){
          var dataAnimate = $(object).attr('data-animate');
          dataAnimate = dataAnimate.split(';').reduce(function(obj, elem){
              var elemParts = elem.split(':').map(function(x){ return x.trim(); });
              obj[elemParts[0]] = elemParts[1];
              return obj;
          }, {});
          var tween = TweenMax.to($(object), 1, dataAnimate);
          var scene = new ScrollScene({triggerElement: $(o)})
                  .setTween(tween)
                  .addTo(Drupal.behaviors.mqcristobal_node_homepage_teaser.animation_controller);

          scene.addIndicators();
        });
      });
    }
  };
})(jQuery);
