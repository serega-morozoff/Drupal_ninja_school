<?php
  function twd_views_views_data_alter(&$data) {
    $data['node']['title_count']['title'] = 'Title word count';
    $data['node']['title_count']['help'] = 'Count the number of words in titles.';
    $data['node']['title_count']['filter']['handler'] = 'twd_views_handler_filter_field_count';
  }

  function twd_views_views_plugins() {
    return array(
      'style' => array(
        'custom_style' => array(
          'title' => t('Custom style'),
          'handler' => 'twd_views_plugin_custom_style',
          'theme' => 'views_style_custom',
          'path' => drupal_get_path('module', 'views') . '/modules/custom',
        ),
      ),
    );
  }
?>