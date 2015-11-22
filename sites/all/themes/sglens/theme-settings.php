<?php


/**
 * Implements hook_form_FORM_ID_alter().
 */
function sglens_form_system_theme_settings_alter(&$form, $form_state, $form_id = NULL) {
  $theme = !empty($form_state['build_info']['args'][0]) ? $form_state['build_info']['args'][0] : FALSE;
  if (isset($form_id) || $theme === FALSE || !in_array('bootstrap', _bootstrap_get_base_themes($theme, TRUE))) {
    return;
  }

  $form['bootstrap_color_scheme'] = array(
    '#type' => 'select',
    '#title' => t('Color scheme'),
    '#options' => _sglens_color_scheme(),
    '#default_value' => bootstrap_setting('color_scheme', $theme),
  );
}

function _sglens_color_scheme(){
  $color_schemes = array();

  $color_schemes[] = t('None');

  $color_schemes['eyesight_beige'] = t('EyeSight Beige');

  return $color_schemes;
}
