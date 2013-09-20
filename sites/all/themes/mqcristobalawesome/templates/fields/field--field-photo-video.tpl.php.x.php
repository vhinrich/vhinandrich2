<?php

/**
 * @file field.tpl.php
 * Default template implementation to display the value of a field.
 *
 * This file is not used and is here as a starting point for customization only.
 * @see theme_field()
 *
 * Available variables:
 * - $items: An array of field values. Use render() to output them.
 * - $label: The item label.
 * - $label_hidden: Whether the label display is set to 'hidden'.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - field: The current template type, i.e., "theming hook".
 *   - field-name-[field_name]: The current field name. For example, if the
 *     field name is "field_description" it would result in
 *     "field-name-field-description".
 *   - field-type-[field_type]: The current field type. For example, if the
 *     field type is "text" it would result in "field-type-text".
 *   - field-label-[label_display]: The current label position. For example, if
 *     the label position is "above" it would result in "field-label-above".
 *
 * Other variables:
 * - $element['#object']: The entity to which the field is attached.
 * - $element['#view_mode']: View mode, e.g. 'full', 'teaser'...
 * - $element['#field_name']: The field name.
 * - $element['#field_type']: The field type.
 * - $element['#field_language']: The field language.
 * - $element['#field_translatable']: Whether the field is translatable or not.
 * - $element['#label_display']: Position of label display, inline, above, or
 *   hidden.
 * - $field_name_css: The css-compatible field name.
 * - $field_type_css: The css-compatible field type.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess_field()
 * @see theme_field()
 *
 * @ingroup themeable
 */
?>
<!--
THIS FILE IS NOT USED AND IS HERE AS A STARTING POINT FOR CUSTOMIZATION ONLY.
See http://api.drupal.org/api/function/theme_field/7 for details.
After copying this file to your theme's folder and customizing it, remove this
HTML comment.
-->
<?php
    $photo_vid_nav_items = array();
?>
<div class="field-photo-video-contents">
<?php foreach($element['#items'] as $element_key => $element_item): ?>
<?php
    $item = $element[$element_key]['file'];
    $image_url = '';
    if(isset($item['#style_name'])){
        $image_url = image_style_url($item['#style_name'], $item['#path']);
    }
    $active = '';
    if($element_key==0){
        $active = 'active';
    }
    $photo_vid_nav_items[] = array(
        'data' => '',
        'id' => 'photo-video-nav-item-' . $element_key,
        'class' => array('photo-video-nav-item', $active),
        'data-photo-video-id' => 'field-photo-video-background-' . $element_key,
    );
?>
<?php if(true || $element['#view_mode'] == 'full'): ?>
    <div class="field-photo-video-wrapper">
        <div data-stellar-background-ratio="0.5" id="field-photo-video-background-<?php print $element_key; ?>" class="field-photo-video-background" style="background-image:url('<?php print $image_url; ?>');"></div>
    </div>
<?php else: ?>
    <?php if($image_url): ?>
    <div class="field-photo-video-wrapper">
        <img data-stellar-ratio="0.5" src="<?php print $image_url; ?>" id="field-photo-video-background-<?php print $element_key; ?>" />
    </div>
    <?php endif; ?>
<?php endif; ?>
<?php endforeach; ?>
</div>
<?php if(sizeof($photo_vid_nav_items)>1): ?>
<div class="field-photo-video-contents-nav">
    <?php
        $attribs = array(
          'class' => array('photo-video-nav'),
          //'data-stellar-ratio' => '0.6',
          //'data-stellar-vertical-offset' => '600'
        );
    ?>
    <?php print theme_item_list(array('items' => $photo_vid_nav_items, 'title' => '', 'type' => 'ul', 'attributes' => $attribs)); ?>
</div>
<?php endif; ?>