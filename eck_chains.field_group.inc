<?php
/**
 * @file
 * eck_chains.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function eck_chains_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_properties|chains|display|form';
  $field_group->group_name = 'group_properties';
  $field_group->entity_type = 'chains';
  $field_group->bundle = 'display';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Properties',
    'weight' => '6',
    'children' => array(
      0 => 'path',
      1 => 'redirect',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Properties',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-properties field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_properties|chains|display|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_properties|chains|relationship|form';
  $field_group->group_name = 'group_properties';
  $field_group->entity_type = 'chains';
  $field_group->bundle = 'relationship';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Properties',
    'weight' => '2',
    'children' => array(
      0 => 'language',
      1 => 'path',
      2 => 'redirect',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Properties',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-properties field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_properties|chains|relationship|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Properties');

  return $field_groups;
}
