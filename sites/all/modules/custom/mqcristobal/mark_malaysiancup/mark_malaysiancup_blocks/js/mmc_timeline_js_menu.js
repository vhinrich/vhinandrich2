(function ($){
    $(document).ready(function(){
        
        
        var slide = $('.node-parallax');
        
        var setActiveMenu = function (){
            //cache the variable of the data-slide attribute associated with each slide
            dataslide = $('article.node').first().attr('data-node');
            datagroup = $('article.node').first().attr('data-group');
            
            $('.js-menu li').removeClass('active');
            //If the user scrolls up change the navigation link that has the same data-slide attribute as the slide to active and 
            //remove the active class from the previous navigation link 
            $('.js-submenu li[data-node="' + dataslide + '"]').addClass('active').prev().removeClass('active');
            $('.js-menu li[data-group="' + datagroup + '"]').addClass('active').prev().removeClass('active');
            
            var active_submenu_item = $('.js-submenu li.active');
            var menu_active_line_left = $(active_submenu_item).offset().left - 11;
            if (menu_active_line_left > $(window).width() || menu_active_line_left < 0){
                $('.menu-active-line').css('display', 'none');
            }else{
                $('.menu-active-line').css('display', 'block');
            }
            $('.menu-active-line').stop().animate(
                {
                    left: menu_active_line_left
                }, 'slow', function(){
                    $('.menu-active-line').css('left', menu_active_line_left);
                }
            );
        }
        
        var focusMenuItem = function(){
            var activeItem = $('.timeline-list-subitem.active');
            try {   
                //if (($(activeItem).offset().left + $(activeItem).width()) > $(window).width() || $(activeItem).offset().left < 0) {
                    $('.mmc-block-timeline-js-menu > .block-timeline-js-menu-wrapper').getNiceScroll().eq(0).doScrollLeft($(activeItem).offset().left - ($(window).width()/2) ,10000);
                //}   
            } catch(e) {
                //alert(e);
            }
        }
        
        var scrollMenu = function(direction){
            if (direction==0) {
                var firstItem = $('.timeline-list-item.first .timeline-list-subitem.first');
                if ($(firstItem).offset().left < 0) {
                    var scrollLeft = $('.mmc-block-timeline-js-menu > .block-timeline-js-menu-wrapper').getNiceScroll().eq(0).scrollLeft() - $(window).width();
                    $('.mmc-block-timeline-js-menu > .block-timeline-js-menu-wrapper').getNiceScroll().eq(0).doScrollLeft( scrollLeft,3000);
                }
            }else{
                var lastItem = $('.timeline-list-item.last .timeline-list-subitem.last');
                if (($(lastItem).offset().left + $(lastItem).width()) > $(window).width()) {
                    var scrollLeft = $('.mmc-block-timeline-js-menu > .block-timeline-js-menu-wrapper').getNiceScroll().eq(0).scrollLeft() + $(window).width();
                    $('.mmc-block-timeline-js-menu > .block-timeline-js-menu-wrapper').getNiceScroll().eq(0).doScrollLeft( scrollLeft,3000);
                }
            }
        }
        
        $(window).load(function(){
            $('.mmc-block-timeline-js-menu > .block-timeline-js-menu-wrapper').niceScroll({touchbehavior:true,cursorcolor:"#858485",cursoropacitymax:0,cursorwidth:0,cursorborder:"1px solid #858485",cursorborderradius:"8px",background:"#ccc",autohidemode:"scroll",enablemousewheel:false});
            
            var menu_width = 0;
            $('.timeline-list-subitem').each(function(index, obj){
                menu_width += $(obj).outerWidth() + 12;
            });
            menu_width += 80;
            $('ul.js-menu').css('width', menu_width);
            
            $('.mmc-block-timeline-js-menu > a.menu-button').click(function(e){
                e.preventDefault();
                if ($(this).hasClass('menu-left-button')) {
                    scrollMenu(0);
                }else{
                    scrollMenu(1);
                }
            });
            
            
            setActiveMenu();
            focusMenuItem();
            
            if($(window).width()>1024){
                $("#navbar").sticky({topSpacing:0});
            }
        });        
        
        $('.mmc-block-timeline-js-menu > .block-timeline-js-menu-wrapper').scroll(function(){
            setActiveMenu();
        });
        
        $(window).resize(function(){
           //focusMenuItem();
        });
        
        //Setup waypoints plugin
        slide.waypoint(function (event, direction) {
            //cache the variable of the data-slide attribute associated with each slide
            dataslide = $(this).attr('data-node');
            datagroup = $(this).attr('data-group');
            
            $('.js-menu li').removeClass('active');
            //If the user scrolls up change the navigation link that has the same data-slide attribute as the slide to active and 
            //remove the active class from the previous navigation link 
            if (direction === 'down') {
                $('.js-submenu li[data-node="' + dataslide + '"]').addClass('active').prev().removeClass('active');
                $('.js-menu li[data-group="' + datagroup + '"]').addClass('active').prev().removeClass('active');
            }
            //$('.js-submenu li[data-slide="' + dataslide + '"]').addClass('active');
            //$('.js-menu li[data-group="' + datagroup + '"]').addClass('active');
            
            // else If the user scrolls down change the navigation link that has the same data-slide attribute as the slide to active and 
            //remove the active class from the next navigation link 
            else {
                $('.js-submenu li[data-node="' + dataslide + '"]').addClass('active').next().removeClass('active');
                $('.js-menu li[data-group="' + datagroup + '"]').addClass('active').next().removeClass('active');
            }
            
            var active_submenu_item = $('.js-submenu li.active');
            var menu_active_line_left = $(active_submenu_item).offset().left - 11;
            $('.menu-active-line').stop().animate(
                {
                    left: menu_active_line_left
                }, 'fast', function(){
                    $('.menu-active-line').css('left', menu_active_line_left);
                }
            );
        });
    });
})(jQuery);