<?php
/**
 * Implements hook_token_info().
 */
function eck_chains_token_info() {
  $types = array();
  $tokens = array();
  $entity_type = 'chains';

  $entity_info = entity_get_info($entity_type);

  $types[$entity_type] = array(
    'name'        => t($entity_info['label']),
    'description' => t('Tokens related to individual @label entities.', array(
      '@label' => $entity_info['label'],
    )),
  );

  foreach ($entity_info['bundles'] as $bundle_name => $bundle) {

    $types[$bundle_name] = array(
      'name'        => t($bundle['label']),
      'description' => t('Tokens related to individual @label entities.', array(
        '@label' => $bundle['label'],
      )),
      'needs-data' => $entity_type,
    );

    $tokens[$entity_type][$bundle_name] = array(
      'name'        => t($bundle['label']),
      'description' => t('Tokens related to individual @label entities.', array(
        '@label' => $bundle['label'],
      )),
      'type' => $bundle_name,
    );

    $tokens[$bundle_name] = array(
      'id'                => array(
        'name'        => t('Entity ID'),
        'description' => t('The unique ID of the entity.'),
      ),
      'uid'               => array(
        'name'        => t('User ID'),
        'description' => t("The unique ID of the user account."),
      ),
      'entity_type_label' => array(
        'name'        => t('Entity type label'),
        'description' => t('The label for the entity type.'),
      ),
      'parent_id' => array(
        'name'        => t('Parent Node ID'),
        'description' => t('The unique ID of the parent node in the chain.'),
        'needs-data'  => 'node',
      ),
      'parent_title' => array(
        'name'        => t('Parent Node title'),
        'description' => t('The title of the parent node in the chain.'),
        'needs-data'  => 'node',
      ),
      'recursive_ids' => array(
        'name'        => t('Recursive Node IDs'),
        'description' => t('A recursive hierarchical list of IDs in a comma-delimited list from the chain.'),
        'needs-data'  => 'node',
      ),
      'recursive_path' => array(
        'name'        => t('Recursive Node Path'),
        'description' => t('A recursive hierarchical path for the current node. Does not include the node, only parents.'),
        'needs-data'  => 'node',
      ),
    );

    $entity_fields = field_info_instances($entity_type, $bundle_name);
    foreach ($entity_fields as $field_name => &$meta) {
      $tokens[$bundle_name][$field_name] = array(
        'name'        => $meta['label'],
        'description' => $meta['description'],
      );
    }
  }

  return array(
    'types'  => $types,
    'tokens' => $tokens,
  );
}

/**
 * Implements hook_tokens().
 */
function eck_chains_tokens($type, $tokens, array $data = array(), array $options = array()) {

  $replacements = array();

  $entity_types = module_invoke('eck', 'entity_info');
  foreach ($entity_types as $entity_type => &$entity_type_meta) {
    if ($type == $entity_type && !empty($data[$entity_type])) {
      $entity = clone $data[$entity_type];
      foreach ($tokens as $name => $original) {
        switch ($name) {
          case 'id':
          case 'uid':
            $replacements[$original] = (!empty($entity->{$name}) ? $entity->{$name} : '');
            break;

          case 'entity_type_label':
            $replacements[$original] = $entity_type_meta['label'];
            break;

        }
      }

      // Remove the cloned object from memory.
      unset($entity);
    }
    if ($type == $entity_type && !empty($data['node'])) {
      $entity = clone $data['node'];
      foreach ($tokens as $name => $original) {
        $token = explode(':', $name);
        // We're going to only use the second level tokens here.
        switch ($token[1]) {
          case 'parent_id':
            $parent_id = _eck_chains_get_parent_id($entity->nid, array('field_source_target_id'), 'fs');
            $replacements[$original] = (!empty($parent_id) ? $parent_id['field_source_target_id'] : '');
            break;

          case 'parent_title':
            // TODO: Parent title should actually be a mix of either title or title_field.
            $parent_title = _eck_chains_get_parent_id($entity->nid, array('title'), 'ec');
            $replacements[$original] = (!empty($parent_title) ? $parent_title['title'] : '');
            break;

          case 'recursive_ids':
            $id_list = _eck_chains_get_recursive_ids($entity->nid);
            $replacements[$original] = (!empty($id_list) ? $id_list : '');
            break;

          case 'recursive_path':
            $path = _eck_chains_get_recursive_path($entity, $options, $data);
            $replacements[$original] = (!empty($path) ? $path : '');
            break;

        }
      }

      // Remove the cloned object from memory.
      unset($entity);
    }
  }

  return $replacements;
}


