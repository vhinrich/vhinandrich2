<div class="<?php print $id; ?>-wrapper">
<article id="<?php print $id; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

<div class="<?php print $id; ?>-container photos-container row">

  <?php print $content_css; ?>
  <?php print $content_js; ?>
  
  <script>
  (function($){
    $('.<?php print $id; ?>-wrapper .scene').ready(function(){
      $('.<?php print $id; ?>-wrapper .scene').parallax({limitY:0});
    });
  })(jQuery);
</script>
  
  
  <header>
    <?php if($photo_count==1): ?>
      <div class="photo-wrapper-left col-md-8"></div>
      <div class="photo-wrapper-right col-md-4">
        <div class="photo-wrapper-right-inner">
    <?php endif; ?>
    
    <?php print render($title_prefix); ?>
    <?php if (!$page && $title): ?>
      <h1<?php print $title_attributes; ?>><?php print $title; ?></h1>
    <?php endif; ?>
    <?php print render($title_suffix); ?>

    <?php if ($display_submitted): ?>
      <span class="submitted">
        <?php print $user_picture; ?>
        <?php print $submitted; ?>
      </span>
    <?php endif; ?>
    
    
      <?php print render($content['body']); ?>
    
    <?php if($photo_count==1): ?>
      </div></div> <!-- close photo-wrapper-right -->
    <?php endif; ?>
  </header>

  <?php
    // Hide comments, tags, and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    hide($content['field_tags']);
    hide($content['field_photo']);
    print render($content);
  ?>
  <div class="scene">
    <?php print render($content['field_photo']); ?>
  </div>

  <?php if (!empty($content['field_tags']) || !empty($content['links'])): ?>
    <footer>
      <?php print render($content['field_tags']); ?>
      <?php print render($content['links']); ?>
    </footer>
  <?php endif; ?>

  <?php print render($content['comments']); ?>
  
</div>

</article> <!-- /.node -->
</div>