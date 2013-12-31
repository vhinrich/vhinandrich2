<?php

 
/**
 * @file
 * Definition of views_challenge_field_handler.
 */
 
/**
 * Description of what my handler does.
 */
class views_challenge_field_handler extends views_handler_field {
  /**
   * Add some required fields needed on render().
   */
  function construct() {
    parent::construct();
  }
  
  /**
   * Loads additional fields.
   */
  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }
 
  /**
   * Default options form.
   */
  function option_definition() {
    $options = parent::option_definition();
  
    $options['allowed_roles'] = array('default' => '');
  
    return $options;
  }
  //
  /**
   * Creates the form item for the options added.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  
    $roles = user_roles();
    $rolesArr = array();
    foreach($roles as $key => $role){
        $rolesArr[$key] = $role;
    }
  
    $form['allowed_roles'] = array(
      '#type' => 'select',
      '#title' => t('Allowed roles'),
      '#options' => $rolesArr,
      '#multiple' => true,
      '#default_value' => $this->options['allowed_roles'],
      '#description' => t('Select allowed roles.'),
      '#weight' => -10,
    );
  }
 
  /**
   * Renders the field handler.
   */
  function render($values) {
    $rids = array();
    foreach($this->options['allowed_roles'] as $key => $role){
        $rids[] = $role;
    }
    $strQuery = 'select count(1) total_lesser_count from (
        select sum(role.weight) sum, users_roles.uid from {users_roles} users_roles join
        {role} role on role.rid=users_roles.rid 
        where users_roles.uid <> :uid AND users_roles.rid IN (' . implode(',', $rids) . ') group by users_roles.uid
        ) a join 
        (
        select sum(role.weight) sum, users_roles.uid from {users_roles} users_roles join
        {role} role on role.rid=users_roles.rid
        where users_roles.uid = :uid AND users_roles.rid IN (' . implode(',', $rids) . ') group by users_roles.uid 
        ) b where a.sum < b.sum';
    
    //dpm(array($strQuery, array(':uid' => $values->uid, ':rids' => implode(',', $rids))));
    $result = db_query($strQuery, array(':uid' => $values->uid));
    
    foreach ($result as $record) {
        // Perform operations on $record->title, etc. here.
        // in this example the available data would be mapped to object properties:
        // $record->nid, $record->title, $record->created
        return $record->total_lesser_count;
      }

    return null;
  }
}