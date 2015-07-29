<?php
class twd_views_plugin_custom_style extends views_plugin_style {
  /**
   * Default settings.
   */
  function option_definition() {
    /*$options = parent::option_definition();
    $options['example_option'] = array('default' => '');
    return $options;*/
  }

  /**
   * Custom settings.
   */
  function options_form(&$form, &$form_state) {
    /*parent::options_form($form, $form_state);
    $form['example_option'] = array(
      '#title' => t('Example option'),
      '#type' => 'textfield',
      '#default_value' => $this->options['example_option'],
    );*/
  }
}