<?php
  function twd_views_views_data_alter(&$data) {
    $data['node']['title_count']['title'] = 'Title word count';
    $data['node']['title_count']['help'] = 'Count the number of words in titles.';
    $data['node']['title_count']['filter']['handler'] = 'twd_views_handler_filter_field_count';
  }
?>