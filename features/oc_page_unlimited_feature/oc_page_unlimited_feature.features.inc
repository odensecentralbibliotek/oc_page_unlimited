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

/**
 * Implements hook_image_default_styles().
 */
function oc_page_unlimited_feature_image_default_styles() {
  $styles = array();

  // Exported image style: page_layout_full_page.
  $styles['page_layout_full_page'] = array(
    'name' => 'page_layout_full_page',
    'label' => 'page_layout_full_page',
    'effects' => array(
      23 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 945,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: page_layout_one_side_menu.
  $styles['page_layout_one_side_menu'] = array(
    'name' => 'page_layout_one_side_menu',
    'label' => 'page_layout_one_side_menu',
    'effects' => array(
      24 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 680,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
