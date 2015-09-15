<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<div id="carousel-<?php print $view->name; ?>-<?php print $view->current_display; ?>" class="carousel slide" data-ride="carousel">
  <!-- Indicators -->
  <ol class="carousel-indicators">
    <?php foreach ($rows as $id => $row): ?>
      <li data-target="#carousel-<?php print $view->name; ?>-<?php print $view->current_display; ?>" data-slide-to="<?php print $id; ?>" class="<?php print $id==0 ? 'active' : ''; ?>"></li>
    <?php endforeach; ?>
  </ol>

  <!-- Wrapper for slides -->
  <div class="carousel-inner" role="listbox">
    <?php foreach ($rows as $id => $row): ?>
      <div class="item <?php print $id == 0 ? 'active' : ''; ?>">
        <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
          <?php print $row; ?>
        </div>
      </div>
    <?php endforeach; ?>
  </div>

</div>
