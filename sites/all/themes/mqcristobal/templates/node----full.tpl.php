<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix row"<?php print $attributes; ?>>


  <header class="col-sm-8">
    <?php print render($content['field_media']); ?>
  </header>

  <div class="main-contents col-sm-4">
    <div class="main-contents-wrapper" data-spy="affix">
      <?php print render($title_prefix); ?>
      <?php if (!$page && $title): ?>
        <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
      <?php endif; ?>
      <?php if($page_special): ?>
        <h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
      <?php endif; ?>
      <?php print render($title_suffix); ?>

      <?php if ($display_submitted): ?>
        <span class="submitted">
          <?php print $user_picture; ?>
          <?php print $submitted; ?>
        </span>
      <?php endif; ?>
      <?php
        // Hide comments, tags, and links now so that we can render them later.
        hide($content['comments']);
        hide($content['links']);
        hide($content['field_tags']);
        print render($content);
      ?>

      <?php if (!empty($content['field_tags']) || !empty($content['links'])): ?>
        <footer>
          <?php print render($content['field_tags']); ?>
          <?php print render($content['links']); ?>
        </footer>
      <?php endif; ?>

      <?php print render($content['comments']); ?>
    </div>
  </div>

</article> <!-- /.node -->
