<?php if($title): ?>
  <div class="container">
    <article class="vhinrich-header row">
      <header class="col-sm-12">
        <?php if($title && !$subtitle): ?>
          <a href="<?php print url('<front>'); ?>"><h1><?php print $title; ?></h1></a>
        <?php endif; ?>
        <?php if($subtitle): ?>
          <h1><?php print $subtitle; ?></h1>
          <?php if($title): ?>
            <a href="<?php print url('<front>'); ?>"><h2><?php print $title; ?></h2></a>
          <?php endif; ?>
        <?php endif; ?>
      </header>
      <div class="body col-sm-12">
        <?php if($caption): ?>
          <?php print $caption; ?>
          <?php if($full_video_url): ?>
            <div class="full-video-link"><a href="<?php print $full_video_url; ?>">View full video</a></div>
          <?php endif; ?>
        <?php endif; ?>
      </div>
    </article>
  </div>
<?php endif; ?>
