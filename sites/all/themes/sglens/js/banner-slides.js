(function($){
  Drupal.behaviors.bannerSlides = {
    attach: function(context, settings){
      this.initParallax(context, settings);
      this.initCarousel(context, settings);
    },
    initCarousel: function(context, settings){
      $('.view-id-banner_slides .carousel').on('slide.bs.carousel', function(){
        $('img', this).removeAttr('style');
      });
    },
    initParallax: function(context, settings){
      $(document).ready(function(){
        $(window).scroll(function(){
          var scrollY = $(this).scrollTop();

          var bannerInner = $('.banner-slide-image-inner');
          $(bannerInner).each(function(){
            if(scrollY >= $(this).offset().top && scrollY <= ($(this).offset().top + $(this).height())){
              var percentage = (scrollY / ($(this).offset().top + $(this).height())) * 100;
              $('img', this).css({
                'top': (percentage * 1.5) * 1 + 'px',
                'position': 'relative'
              });

            }else{
              $('img', this).removeAttr('style');
            }
          });
        });
      });
    }
  };
})(jQuery);

