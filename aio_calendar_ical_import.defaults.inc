<?php

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _aio_calendar_ical_import_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ical_feed content
  $permissions[] = array(
    'name' => 'create ical_feed content',
    'roles' => array(
      '0' => 'Admin',
    ),
  );

  // Exported permission: delete any ical_feed content
  $permissions[] = array(
    'name' => 'delete any ical_feed content',
    'roles' => array(
      '0' => 'Admin',
    ),
  );

  // Exported permission: delete own ical_feed content
  $permissions[] = array(
    'name' => 'delete own ical_feed content',
    'roles' => array(
      '0' => 'Admin',
    ),
  );

  // Exported permission: edit any ical_feed content
  $permissions[] = array(
    'name' => 'edit any ical_feed content',
    'roles' => array(
      '0' => 'Admin',
    ),
  );

  // Exported permission: edit own ical_feed content
  $permissions[] = array(
    'name' => 'edit own ical_feed content',
    'roles' => array(
      '0' => 'Admin',
    ),
  );

  return $permissions;
}
