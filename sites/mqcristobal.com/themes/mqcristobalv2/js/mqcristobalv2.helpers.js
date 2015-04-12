(function($){
  Drupal.behaviors.mqcristobalv2_helpers = {
    attach: function(context, settings){
      this.initColSameHeight(context, settings);
      // this.initUniformHeight(context, settings);
      this.uniformHeight.init(context ,settings);
    },
    initColSameHeight: function(context, settings){
      $('.row').each(function(rowIndex, rowObject){
        var column = $('.col-same-height', $(rowObject));
        if(column.length > 0){
          var columnTallestHeight = 0;
          $(column).each(function(columnIndex, columnObject){
            if(columnTallestHeight < $(columnObject).height()){
              columnTallestHeight = $(columnObject).height();
            }
          });
          $(column).css('height', columnTallestHeight);
        }
      });
    },
    uniformHeight: {
      init: function(context, settings){
        $('.uniform-height').each(function(uniformHeightIndex, uniformHeightObject){
          var uniformHeightObjectGroup = 'none';
          if(typeof $(uniformHeightObject).data('uniform-height-group') !== undefined){
            uniformHeightObjectGroup = $(uniformHeightObject).data('uniform-height-group');
          }
          if(!(uniformHeightObjectGroup in Drupal.behaviors.mqcristobalv2_helpers.uniformHeight.uniformHeightGroupsHeight)){
            Drupal.behaviors.mqcristobalv2_helpers.uniformHeight.uniformHeightGroupsHeight[uniformHeightObjectGroup] = {height: 0, name: uniformHeightObjectGroup};
          }
          if(Drupal.behaviors.mqcristobalv2_helpers.uniformHeight.uniformHeightGroupsHeight[uniformHeightObjectGroup].height < $(uniformHeightObject).height()){
            Drupal.behaviors.mqcristobalv2_helpers.uniformHeight.uniformHeightGroupsHeight[uniformHeightObjectGroup].height = $(uniformHeightObject).height();
          }
        });

        this.execute(context, settings);
        $(window).resize(function(){
          Drupal.behaviors.mqcristobalv2_helpers.uniformHeight.execute(context, settings);
        });
      },
      uniformHeightGroupsHeight: {},
      execute: function(context, settings){
        $.each(Drupal.behaviors.mqcristobalv2_helpers.uniformHeight.uniformHeightGroupsHeight, function(uniformGroupIndex, uniformGroupObject){
          $('.uniform-height[data-uniform-height-group="' + uniformGroupIndex + '"]').css('height', uniformGroupObject.height);
        });
      }
    }
  };
})(jQuery);
