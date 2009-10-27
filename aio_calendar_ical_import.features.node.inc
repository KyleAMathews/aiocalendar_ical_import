<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _aio_calendar_ical_import_node_info() {
  $items = array(
    'ical_feed' => array(
      'name' => t('ICAL Feed'),
      'module' => 'features',
      'description' => t(''),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => t(''),
    ),
  );
  return $items;
}
