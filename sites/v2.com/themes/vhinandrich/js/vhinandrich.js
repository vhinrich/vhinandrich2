(function($){
    Drupal.behaviors.menuNavbar = {
    focusAnchorHash: function(hash){
        if (hash !== '#undefined') {
                    $('.menu.nav.navbar-nav .leaf').removeClass('active');
                    $('.menu.nav.navbar-nav .leaf a').removeClass('active');
                    var menuLink = $('.menu.nav.navbar-nav .leaf a').filter(function(){ return this.hash == hash });
                    menuLink.addClass('active');
                    menuLink.parent().addClass('active');
                }
    },
    reloadWaypoints: function(){
        var mainWindow = null;
        mainWindow = $('article.node');
        if (mainWindow) {
            mainWindow.waypoint(function(direction) {
                if (direction === 'down') {
                  // do stuff
                  Drupal.behaviors.menuNavbar.focusAnchorHash('#' + $(this).attr('id'));
                }
              }, { offset: '50%' });
              
              mainWindow.waypoint(function(direction) {
                if (direction === 'up') {
                  // do stuff
                  Drupal.behaviors.menuNavbar.focusAnchorHash('#' + $(this).attr('id'));
                }
              }, {
                offset: function() {
                  // This is the calculation that would give you
                  // "bottom of element hits middle of window"
                  return $.waypoints('viewportHeight') / 2 - $(this).outerHeight();
                }
              });
        }
    },
    attach: function (context, settings) {
            
            $('.menu.nav.navbar-nav .leaf').removeClass('active');
            $('.menu.nav.navbar-nav .leaf a').removeClass('active');
            
            $('.menu.nav.navbar-nav .leaf').first().addClass('active');
            $('a', $('.menu.nav.navbar-nav .leaf').first()).addClass('active');
            
            $('.menu.nav.navbar-nav .leaf a').click(function(e){
                e.preventDefault();
                var hash = e.target.hash;
                $('html, body').stop().animate(
                    {scrollTop: $(hash).offset().top}, 'slow', function(){}
                );
                Drupal.behaviors.menuNavbar.focusAnchorHash(hash);
               //window.location.hash = hash;
            });
      }
    };
})(jQuery);