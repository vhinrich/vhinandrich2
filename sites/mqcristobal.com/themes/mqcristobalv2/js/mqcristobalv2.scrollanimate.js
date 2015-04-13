(function($){
  Drupal.behaviors.mqcristobalv2_scrollanimate = {
    attach: function(context, settings){
      this.init(context, settings);
      $.each(this.animateObjects, function(index, object){
        object.render(context, settings);
      });
      $(window).resize(function(){
        $.each(this.animateObjects, function(index, object){
          object.render(context, settings);
        });
      });
    },
    init: function(context ,settings){
      $('.scroll-animate-container').each(function(animateIndex, animateObject){
        Drupal.behaviors.mqcristobalv2_scrollanimate.animateObjects.push({
          animateObject: animateObject,
          slideContainer: $('.scroll-animate-slides[data-animate-container="' + $(animateObject).attr('id') + '"]'),
          slides: $('.slide', $('.scroll-animate-slides[data-animate-container="' + $(animateObject).attr('id') + '"]')),
          render: function(context, settings){
            var animate = this;
            var initTop = $(this.animateObject).offset().top;
            // if($(window).width()>=768){
            //   $(this.animateObject).removeClass('no-animate');
            //   $(this.slideContainer).removeClass('no-animate');
            //   $(this.slides).removeClass('no-animate');
            // }else{
            //   $(this.animateObject).addClass('no-animate');
            //   $(this.slideContainer).addClass('no-animate');
            //   $(this.slides).addClass('no-animate');
            // }
            $(this.animateObject).css(
              {
                'height': $(window).height(),
                'position': 'absolute',
                'z-index': 888,
                'left': 0,
                'right': 0,
              }
            );
            $(this.slideContainer).css({
              'position': 'relative',
              'z-index': 889,
              'top': 0,
              'bottom': 0,
              'left': 0,
              'right': 0
            });
            $(this.slides).each(function(index, object){
              $(object).css(
                {
                  'height': $(window).height()
                }
              );
            });
            $(window).scroll(function(){
              var scrollY = $(window).scrollTop();
              var animateObjectTop = $(animate.animateObject).offset().top;
              var animateObjectBottom = $(animate.slides).last().offset().top + $(animate.slides).last().height();
              if(scrollY>=animateObjectTop && scrollY<=(animateObjectBottom-($(window).height()/100))){
                $(animate.animateObject).css(
                  {
                    'position': 'fixed',
                    'left': 0,
                    'right': 0,
                    'top': 0,
                    'bottom': 0,
                    'z-index': 888
                  }
                );
              }else{
                if($(animate.animateObject).css('position')=='fixed'){
                  $(animate.animateObject).css(
                    {
                      'position': 'absolute',
                      'bottom': 0,
                      'top': scrollY
                    }
                  );
                }else{
                  $(animate.animateObject).css(
                    {
                      'position': 'absolute',
                      'bottom': 'initial',
                      'top': 'initial'
                    }
                  );
                }
              }
            });
          }
        });
      });
    },
    animateObjects: []
  };
})(jQuery);
