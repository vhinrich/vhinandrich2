<div class="pin-trigger" data-pin-item="#node-<?php print $node->nid; ?>"></div>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix row"<?php print $attributes; ?>>
  <?php print render($content['field_background_media']); ?>

  <header class="col-sm-12">
    <?php
      // Hide comments, tags, and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      hide($content['field_tags']);
      hide($content['field_footer_body']);
      print render($content);
    ?>

    <?php print render($content['comments']); ?>

    <?php print render($title_prefix); ?>
    <?php if (!$page && $title): ?>
      <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?>

    <?php if ($display_submitted): ?>
      <span class="submitted">
        <?php print $user_picture; ?>
        <?php print $submitted; ?>
      </span>
    <?php endif; ?>
  </header>

  <?php if (!empty($content['field_tags']) || !empty($content['links']) || !empty($content['field_footer_body'])): ?>
    <footer class="col-sm-12">
      <?php print render($content['field_tags']); ?>
      <?php print render($content['links']); ?>
      <?php print render($content['field_footer_body']); ?>
    </footer>
  <?php endif; ?>

</article> <!-- /.node -->
