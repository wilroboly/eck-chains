<?php
/**
 * @file
 * eck_chains.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function eck_chains_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function eck_chains_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function eck_chains_eck_bundle_info() {
  $items = array(
    'chains_display' => array(
      'machine_name' => 'chains_display',
      'entity_type' => 'chains',
      'name' => 'display',
      'label' => 'Display',
      'config' => array(
        'managed_properties' => array(
          'title' => 'title',
          'uid' => 0,
          'created' => 0,
          'changed' => 0,
          'language' => 0,
          'uuid' => 0,
        ),
        'multilingual' => 1,
      ),
    ),
    'chains_relationship' => array(
      'machine_name' => 'chains_relationship',
      'entity_type' => 'chains',
      'name' => 'relationship',
      'label' => 'Relationship',
      'config' => array(
        'managed_properties' => array(
          'language' => 'language',
          'uid' => 0,
          'created' => 0,
          'changed' => 0,
          'uuid' => 0,
        ),
        'multilingual' => 1,
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function eck_chains_eck_entity_type_info() {
  $items = array(
    'chains' => array(
      'name' => 'chains',
      'label' => 'Chains',
      'properties' => array(
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
        'language' => array(
          'label' => 'Entity language',
          'type' => 'language',
          'behavior' => 'language',
        ),
        'uuid' => array(
          'label' => 'UUID',
          'type' => 'text',
          'behavior' => 'uuid',
        ),
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
      ),
    ),
  );
  return $items;
}
