<?php
/**
 * @file
 * front_page_panel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function front_page_panel_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
