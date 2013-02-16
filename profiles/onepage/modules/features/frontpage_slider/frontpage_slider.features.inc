<?php
/**
 * @file
 * frontpage_slider.features.inc
 */

/**
 * Implements hook_views_api().
 */
function frontpage_slider_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_ctools_plugin_api().
 */
function frontpage_slider_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "weight" && $api == "weight") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function frontpage_slider_node_info() {
  $items = array(
    'frontpage_slider' => array(
      'name' => t('frontpage_slider'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
