(function ($){
   $(window).load(function(){
      var dates = Drupal.settings.mmcb_main_js_calendar_menu.dates;
      dates = JSON.parse(dates.zebra_dates);
      $('input.datepicker').Zebra_DatePicker({
         always_visible: $('.datepicker-container'),
         disabled_dates: ['* * * *'],
         enabled_dates: dates,
         show_clear_date: false,
         show_select_today: false,
         onSelect: function(){
            var nodeDates = Drupal.settings.mmcb_main_js_calendar_menu.dates;
            var nodeDate = nodeDates.dates[$('input.datepicker').attr('value')];
            window.location = nodeDate.url;
            //console.log(nodeDate);
            //console.log($('input.datepicker').attr('value'));
            
         }
      });
   });
})(jQuery);