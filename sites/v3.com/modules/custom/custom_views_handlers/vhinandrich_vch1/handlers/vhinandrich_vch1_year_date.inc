<?php
class vhiandrich_vch1_year_date extends views_handler_field_entity {
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['test'] = array(
      '#type' => 'textfield',
      '#title' => t('test')
    );
    dpm($form_state);
  }
  
  function render($values) {
        //dpm($values);
        return 'test';
  }
}