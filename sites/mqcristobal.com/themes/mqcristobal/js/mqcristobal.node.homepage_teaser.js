(function($){
  Drupal.behaviors.mqcristobal_node_homepage_teaser = {
    animation_controller: null,
    attach: function(context, settings){
      Drupal.behaviors.mqcristobal_node_homepage_teaser.animation_controller = new ScrollMagic();
      // var scene = new ScrollScene({triggerElement: "#node-1"})
      //                 .setPin("#node-1")
      //                 .addTo(Drupal.behaviors.mqcristobal_node_homepage_teaser.animation_controller);
      // var scene = new ScrollScene()
      //                 .setPin("#node-1 .field-name-field-background-media")
      //                 .addTo(Drupal.behaviors.mqcristobal_node_homepage_teaser.animation_controller);
      // // show indicators (requires debug extension)
      // scene.addIndicators();

      // scene = new ScrollScene({triggerElement: "#taxnomy-term-1"})
      //                 .setPin("#taxnomy-term-1")
      //                 .addTo(Drupal.behaviors.mqcristobal_node_homepage_teaser.animation_controller);
      // // show indicators (requires debug extension)
      // scene.addIndicators();

      $('.pin-trigger').each(function(i, o){
        // var sceneParams = {duration: $(window).height()};
        var sceneParams = {};
        // if(i>0){
          sceneParams = {triggerElement: $(o)};
        // }
        var pinObject = $('article' + $(o).attr('data-pin-item') + ' .field-name-field-background-media').first();
        if(i>0){
          pinObject = sceneParams;
        }
        // pinani
        var pinani = new TimelineMax();
        $('article' + $(o).attr('data-pin-item') + ' .article-slide').each(function(index,object){
          pinani.add(TweenMax.to($(object), 1, {transform: "translateY(0)"}));
        });
        console.log(pinani);
        var scene = new ScrollScene(sceneParams)
                      .setTween(pinani)
                      .setPin(pinObject)
                      .addTo(Drupal.behaviors.mqcristobal_node_homepage_teaser.animation_controller);
        // show indicators (requires debug extension)
        scene.addIndicators();
      });
    }
  };
})(jQuery);
