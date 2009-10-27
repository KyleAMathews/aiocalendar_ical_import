<?php

/**
 * Implementation of hook_node_info().
 */
function aio_calendar_ical_import_node_info() {
  module_load_include('inc', 'aio_calendar_ical_import', 'aio_calendar_ical_import.features.node');
  $args = func_get_args();
  return call_user_func_array('_aio_calendar_ical_import_node_info', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function aio_calendar_ical_import_user_default_permissions() {
  module_load_include('inc', 'aio_calendar_ical_import', 'aio_calendar_ical_import.defaults');
  $args = func_get_args();
  return call_user_func_array('_aio_calendar_ical_import_user_default_permissions', $args);
}
