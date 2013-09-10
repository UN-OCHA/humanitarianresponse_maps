<?php
/**
 * @file
 * humanitarianresponse_maps.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function humanitarianresponse_maps_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create map content'.
  $permissions['create map content'] = array(
    'name' => 'create map content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own map content'.
  $permissions['delete own map content'] = array(
    'name' => 'delete own map content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own map content'.
  $permissions['edit own map content'] = array(
    'name' => 'edit own map content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
