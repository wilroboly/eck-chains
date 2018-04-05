<?php
/**
 * @file
 * eck_chains.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function eck_chains_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'chains-display-field_display_targets'.
  $field_instances['chains-display-field_display_targets'] = array(
    'bundle' => 'display',
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'entity_view_display' => array(
        'label' => 'hidden',
        'module' => 'entity_display_field',
        'settings' => array(
          'conditions' => array(),
          'field_formatter_class' => '',
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
          'links' => TRUE,
          'view_mode' => 'default',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'entity_display_field',
        'settings' => array(
          'conditions' => array(),
          'field_formatter_class' => '',
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
          'links' => 1,
          'view_mode' => 'full',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 5,
      ),
      'grid_2_column' => array(
        'label' => 'hidden',
        'module' => 'entity_display_field',
        'settings' => array(
          'conditions' => array(),
          'field_formatter_class' => '',
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
          'links' => 1,
          'view_mode' => 'grid_2_column',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 1,
      ),
      'grid_2_column_no_body' => array(
        'label' => 'hidden',
        'module' => 'entity_display_field',
        'settings' => array(
          'conditions' => array(),
          'field_formatter_class' => '',
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
          'links' => 1,
          'view_mode' => 'default',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'entity_display_field',
        'settings' => array(
          'conditions' => array(),
          'field_formatter_class' => '',
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
          'links' => 1,
          'view_mode' => 'teaser',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'chains',
    'fences_wrapper' => 'div',
    'field_name' => 'field_display_targets',
    'label' => 'Displaying References',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference_view_widget',
      'settings' => array(
        'allow_duplicates' => 0,
        'close_modal' => 1,
        'pass_argument' => 1,
        'pass_arguments' => '',
        'rendered_entity' => 0,
        'view' => 'relationships_views_widgets|select_content_widget',
        'view_mode' => 'full',
      ),
      'type' => 'entityreference_view_widget',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'chains-display-field_display_view_mode'.
  $field_instances['chains-display-field_display_view_mode'] = array(
    'bundle' => 'display',
    'default_value' => array(
      0 => array(
        'entity_display' => 'full',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entity_display_field',
        'settings' => array(),
        'type' => 'entity_display_field_default',
        'weight' => 0,
      ),
      'entity_view_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'grid_2_column' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'grid_2_column_no_body' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'chains',
    'fences_wrapper' => 'div',
    'field_name' => 'field_display_view_mode',
    'label' => 'Display View Mode',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'entity_display_field',
      'settings' => array(),
      'type' => 'entity_display_field_default',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'chains-display-field_position'.
  $field_instances['chains-display-field_position'] = array(
    'bundle' => 'display',
    'default_value' => array(
      0 => array(
        'value' => 'below',
      ),
    ),
    'deleted' => 0,
    'description' => 'Select which position this display will be rendered into. Currently the choice is above or below the body field. [<em>In the future we may allow this to be simply an order item in the display arrangement page.</em>]',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'entity_view_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'grid_2_column' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'grid_2_column_no_body' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'chains',
    'fences_wrapper' => 'div',
    'field_name' => 'field_position',
    'label' => 'Position',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'chains-display-field_source'.
  $field_instances['chains-display-field_source'] = array(
    'bundle' => 'display',
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'entity_view_display' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'grid_2_column' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'grid_2_column_no_body' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'chains',
    'fences_wrapper' => 'div',
    'field_name' => 'field_source',
    'label' => 'Source of the display',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'action' => 'none',
          'action_on_edit' => 0,
          'fallback' => 'none',
          'providers' => array(
            'og_context' => 0,
            'url' => 1,
          ),
          'skip_perm' => 0,
          'status' => 1,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference_view_widget',
      'settings' => array(
        'allow_duplicates' => 0,
        'close_modal' => 1,
        'pass_argument' => 1,
        'pass_arguments' => '',
        'rendered_entity' => 0,
        'view' => 'relationships_views_widgets|select_content_widget',
        'view_mode' => 'full',
      ),
      'type' => 'entityreference_view_widget',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'chains-relationship-field_source'.
  $field_instances['chains-relationship-field_source'] = array(
    'bundle' => 'relationship',
    'default_value' => array(),
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'field_formatter_class' => '',
          'link' => 1,
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'entity_reference_view' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'field_formatter_class' => '',
          'link' => 1,
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'chains',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_source',
    'label' => 'Source',
    'options_limit' => FALSE,
    'options_limit_empty_behaviour' => 0,
    'options_limit_fields' => array(),
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'action' => 'hide',
          'action_on_edit' => 1,
          'fallback' => 'none',
          'providers' => array(
            'og_context' => 0,
            'url' => 1,
          ),
          'skip_perm' => 'eck administer chains bundles',
          'status' => 1,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference_view_widget',
      'settings' => array(
        'allow_duplicates' => 0,
        'close_modal' => 1,
        'pass_argument' => 1,
        'pass_arguments' => '',
        'rendered_entity' => 0,
        'view' => 'entityreference_view_widget_sample|content_selection_widget',
        'view_mode' => 'entity_reference_view',
      ),
      'type' => 'entityreference_view_widget',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'chains-relationship-field_target'.
  $field_instances['chains-relationship-field_target'] = array(
    'bundle' => 'relationship',
    'default_value' => array(),
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'field_formatter_class' => '',
          'link' => 1,
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'entity_reference_view' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'field_formatter_class' => '',
          'link' => 1,
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'chains',
    'fences_wrapper' => 'div',
    'field_name' => 'field_target',
    'label' => 'Target',
    'options_limit' => FALSE,
    'options_limit_empty_behaviour' => 0,
    'options_limit_fields' => array(),
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'action' => 'none',
          'action_on_edit' => 0,
          'fallback' => 'none',
          'providers' => array(
            'og_context' => 0,
            'url' => 1,
          ),
          'skip_perm' => 0,
          'status' => 1,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference_view_widget',
      'settings' => array(
        'allow_duplicates' => 0,
        'close_modal' => 1,
        'pass_argument' => 1,
        'pass_arguments' => '',
        'rendered_entity' => 0,
        'view' => 'relationships_views_widgets|select_content_widget',
        'view_mode' => 'full',
      ),
      'type' => 'entityreference_view_widget',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Display View Mode');
  t('Displaying References');
  t('Position');
  t('Select which position this display will be rendered into. Currently the choice is above or below the body field. [<em>In the future we may allow this to be simply an order item in the display arrangement page.</em>]');
  t('Source');
  t('Source of the display');
  t('Target');

  return $field_instances;
}
