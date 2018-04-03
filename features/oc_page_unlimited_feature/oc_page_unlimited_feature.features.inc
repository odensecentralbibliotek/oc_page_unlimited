<?php
/**
 * @file
 * oc_page_unlimited_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function oc_page_unlimited_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
