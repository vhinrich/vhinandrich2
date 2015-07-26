<div class="btn-group <?php print $radios_classes; ?>" data-toggle="buttons" <?php print $attributes; ?>>
  <?php foreach(element_children($element) as $key): ?>
  <label class="btn btn-primary <?php print $element[$key]['#classes']; ?> <?php print $element[$key]['#return_value'] == $element[$key]['#default_value'] ? ' active' : ''; ?>">
    <?php print render($element[$key]); ?>
    <?php print render($element[$key]['content']); ?>
  </label>
  <?php endforeach; ?>
</div>
