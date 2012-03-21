<?php
/**
 * @file
 * humanitarianresponse_maps.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function humanitarianresponse_maps_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function humanitarianresponse_maps_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function humanitarianresponse_maps_node_info() {
  $items = array(
    'map' => array(
      'name' => t('Map'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
