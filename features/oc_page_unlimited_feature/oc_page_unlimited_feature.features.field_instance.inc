<?php
/**
 * @file
 * oc_page_unlimited_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function oc_page_unlimited_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-ding_page-field_side_layout'
  $field_instances['node-ding_page-field_side_layout'] = array(
    'bundle' => 'ding_page',
    'default_value' => array(
      0 => array(
        'tid' => 5621,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_highlight' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_side_layout',
    'label' => 'Side layout',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Side layout');

  return $field_instances;
}
