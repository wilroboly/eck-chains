<?php
/**
 * @file
 * eck_chains.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function eck_chains_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'chains|relationship|entity_reference_view';
  $ds_layout->entity_type = 'chains';
  $ds_layout->bundle = 'relationship';
  $ds_layout->view_mode = 'entity_reference_view';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_source',
        1 => 'field_target',
      ),
    ),
    'fields' => array(
      'field_source' => 'ds_content',
      'field_target' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['chains|relationship|entity_reference_view'] = $ds_layout;

  return $export;
}
