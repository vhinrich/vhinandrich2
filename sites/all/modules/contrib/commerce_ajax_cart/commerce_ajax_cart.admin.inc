<?php

/**
 * @file
 * Commerce Ajax Cart admin settings form.
 */

/**
 * Implements hook_form().
 */
function commerce_ajax_cart_settings_form() {
  $defaults = variable_get('commerce_ajax_cart_position', commerce_ajax_cart_get_defaults());
  $form['commerce_ajax_cart_position'] = array(
    '#type' => 'fieldset',
    '#tree' => TRUE,
    '#title' => t('Positioning of cart preview'),
    '#description' => t('For futher information, <a target="_blank" href="@url">read documentation</a> for jquery_ui position.', array('@url' => 'http://api.jqueryui.com/position/')),
  );
  $form['commerce_ajax_cart_position']['my'] = array(
    '#type' => 'textfield',
    '#title' => 'my',
    '#default_value' => $defaults['my'],
  );
  $form['commerce_ajax_cart_position']['at'] = array(
    '#type' => 'textfield',
    '#title' => 'at',
    '#default_value' => $defaults['at'],
  );
  $form['commerce_ajax_cart_position']['collision'] = array(
    '#type' => 'textfield',
    '#title' => 'collision',
    '#default_value' => $defaults['collision'],
  );

  $form['commerce_ajax_cart_text'] = array(
    '#type' => 'textfield',
    '#title' => t('Empty cart text'),
    '#default_value' => variable_get('commerce_ajax_cart_text', t('There is no product in your cart')),
  );

  $views = views_get_enabled_views();
  $view_settings = array();
  foreach ($views as $view_id => $view) {
    if ($view->base_table == 'commerce_order') {
      foreach ($view->display as $display_id => $display) {
        $view_settings[$view_id . '.' . $display_id] = $view->human_name . ' (' . $view->name . '.' . $display_id . ')';
      }
    }
  }
  $form['commerce_ajax_cart_view'] = array(
    '#type' => 'select',
    '#options' => $view_settings,
    '#title' => t('Shopping cart to use'),
    '#default_value' => variable_get('commerce_ajax_cart_view', COMMERCE_AJAX_CART_DEFAULT_VIEW),
  );

  $behaviours = commerce_ajax_cart_script_examples();

  $form['commerce_ajax_cart_behaves'] = array(
    '#type' => 'container',
    '#tree' => TRUE,
    '#title' => t('Example behaviours'),
  );

  $behaviours_default = variable_get('commerce_ajax_cart_behaves', array(
    'show_cart' => 0,
    'fly_to_cart' => 0,
  ));

  foreach ($behaviours as $id => $b) {
    $form['behaves'][$id] = array(
      '#type' => 'checkbox',
      '#title' => check_plain($b['title']),
      '#return_value' => 1,
      '#default_value' => $behaviours_default[$id],
    );
    $form['behaves'][$id . '_example'] = array(
      '#type' => 'fieldset',
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
      '#title' => t('Show code'),
    );
    $form['behaves'][$id . '_example']['code'] = array(
      '#markup' => '<code><pre>' . $b['content'] . '</pre></code>',
    );
  }

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save settings'),
  );

  return system_settings_form($form);
}
