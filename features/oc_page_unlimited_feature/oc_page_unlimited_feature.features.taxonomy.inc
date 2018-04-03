<?php
/**
 * @file
 * oc_page_unlimited_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function oc_page_unlimited_feature_taxonomy_default_vocabularies() {
  return array(
    'page_layout' => array(
      'name' => 'Page layout',
      'machine_name' => 'page_layout',
      'description' => 'Bestemmer hvilket panel om bliver brugt til rendering af sider og andet.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
