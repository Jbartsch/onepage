<?php
/**
 * @file
 * standortsuche.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function standortsuche_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function standortsuche_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function standortsuche_node_info() {
  $items = array(
    'standort' => array(
      'name' => t('Standort'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
