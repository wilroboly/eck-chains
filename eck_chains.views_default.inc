<?php
/**
 * @file
 * eck_chains.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function eck_chains_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'content_relationships';
  $view->description = '';
  $view->tag = 'chains';
  $view->base_table = 'eck_chains';
  $view->human_name = 'User UI: Content Relationships';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Content Relationships';
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'entity_ca';
  $handler->display->display_options['access']['perm'] = 'edit options';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'uuid' => 'uuid',
    'type' => 'type',
    'field_target' => 'field_target',
    'nid' => 'nid',
    'body' => 'field_target',
    'status' => 'status',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uuid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_target' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br/>',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="actions">
  <ul class="action-links">
    <li><a href="/en/chains/relationship/[uuid]?destination=/node/!1/relationships" class="btn btn-default">View Relationship</a></li>
    <li><a href="/en/admin/structure/entity-type/chains/relationship/[id]/edit?destination=node/!1/relationships" class="btn btn-default">Edit Relationship</a></li>
  </ul>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'unfiltered';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<strong>no values found</strong>';
  $handler->display->display_options['empty']['area']['format'] = 'unfiltered';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_target_target_id']['id'] = 'field_target_target_id';
  $handler->display->display_options['relationships']['field_target_target_id']['table'] = 'field_data_field_target';
  $handler->display->display_options['relationships']['field_target_target_id']['field'] = 'field_target_target_id';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'field_target_target_id';
  /* Field: Chains: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_chains';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Chains: Chains UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'eck_chains';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'UUID';
  $handler->display->display_options['fields']['uuid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uuid']['alter']['path'] = 'chains/relationship/2';
  $handler->display->display_options['fields']['uuid']['element_type'] = '0';
  $handler->display->display_options['fields']['uuid']['element_label_type'] = '0';
  $handler->display->display_options['fields']['uuid']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['uuid']['element_default_classes'] = FALSE;
  /* Field: Chains: chains type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'eck_chains';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: Chains: Target */
  $handler->display->display_options['fields']['field_target']['id'] = 'field_target';
  $handler->display->display_options['fields']['field_target']['table'] = 'field_data_field_target';
  $handler->display->display_options['fields']['field_target']['field'] = 'field_target';
  $handler->display->display_options['fields']['field_target']['label'] = 'Related Content';
  $handler->display->display_options['fields']['field_target']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_target']['alter']['text'] = '<strong>[field_target]</strong> ([field_target-target_id])';
  $handler->display->display_options['fields']['field_target']['element_type'] = '0';
  $handler->display->display_options['fields']['field_target']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_target']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_target']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_target']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_target']['settings'] = array(
    'link' => 1,
    'field_formatter_class' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_target']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_target']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_target']['multi_type'] = 'ul';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_target_target_id';
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '254',
    'field_formatter_class' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['element_class'] = 'nowrap';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['relationship'] = 'field_target_target_id';
  $handler->display->display_options['fields']['status']['label'] = 'Status';
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'field_target_target_id';
  $handler->display->display_options['fields']['changed']['label'] = 'Last updated';
  $handler->display->display_options['fields']['changed']['element_class'] = 'nowrap';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'short_date_only';
  /* Contextual filter: Chains: Source (field_source) */
  $handler->display->display_options['arguments']['field_source_target_id']['id'] = 'field_source_target_id';
  $handler->display->display_options['arguments']['field_source_target_id']['table'] = 'field_data_field_source';
  $handler->display->display_options['arguments']['field_source_target_id']['field'] = 'field_source_target_id';
  $handler->display->display_options['arguments']['field_source_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_source_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_source_target_id']['default_argument_options']['argument'] = 'all';
  $handler->display->display_options['arguments']['field_source_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_source_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_source_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Chains: chains type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_chains';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'relationship' => 'relationship',
  );

  /* Display: Content Relationships */
  $handler = $view->new_display('page', 'Content Relationships', 'content_relationships');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Chains: Source (field_source) */
  $handler->display->display_options['arguments']['field_source_target_id']['id'] = 'field_source_target_id';
  $handler->display->display_options['arguments']['field_source_target_id']['table'] = 'field_data_field_source';
  $handler->display->display_options['arguments']['field_source_target_id']['field'] = 'field_source_target_id';
  $handler->display->display_options['arguments']['field_source_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_source_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_source_target_id']['default_argument_options']['argument'] = 'all';
  $handler->display->display_options['arguments']['field_source_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_source_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_source_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'node/%/relationships';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Content';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Display */
  $handler = $view->new_display('page', 'Display', 'display_content');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Display Content';
  $handler->display->display_options['display_description'] = 'Organize and display all content for a layout';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_position',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'draggableviews' => 'draggableviews',
    'uuid' => 'uuid',
    'field_display_targets' => 'field_display_targets',
    'field_position' => 'field_position',
    'field_display_view_mode' => 'field_display_view_mode',
    'edit_link' => 'edit_link',
    'delete_link' => 'edit_link',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uuid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_display_targets' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_position' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_display_view_mode' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_link' => array(
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'delete_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Link */
  $handler->display->display_options['header']['link']['id'] = 'link';
  $handler->display->display_options['header']['link']['table'] = 'views';
  $handler->display->display_options['header']['link']['field'] = 'link';
  $handler->display->display_options['header']['link']['label'] = 'Add a Display';
  $handler->display->display_options['header']['link']['empty'] = TRUE;
  $handler->display->display_options['header']['link']['text'] = 'Add a Display';
  $handler->display->display_options['header']['link']['path'] = 'admin/structure/entity-type/chains/display/add';
  $handler->display->display_options['header']['link']['querystring'] = 'uuid={uuid}&field_source=!1';
  $handler->display->display_options['header']['link']['class'] = 'btn btn-primary';
  $handler->display->display_options['header']['link']['tokenize'] = TRUE;
  $handler->display->display_options['header']['link']['use_curly_braces'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<strong>no layouts to display or organize. consider adding some data.</strong>';
  $handler->display->display_options['empty']['area']['format'] = 'unfiltered';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_display_targets_target_id']['id'] = 'field_display_targets_target_id';
  $handler->display->display_options['relationships']['field_display_targets_target_id']['table'] = 'field_data_field_display_targets';
  $handler->display->display_options['relationships']['field_display_targets_target_id']['field'] = 'field_display_targets_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_chains';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['ui_name'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['relationship'] = 'field_display_targets_target_id';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Field: Chains: Chains UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'eck_chains';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'Display UUID';
  /* Field: Chains: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'eck_chains';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['label'] = 'Display Options';
  $handler->display->display_options['fields']['edit_link']['text'] = 'edit display';
  /* Field: Chains: Display View Mode */
  $handler->display->display_options['fields']['field_display_view_mode']['id'] = 'field_display_view_mode';
  $handler->display->display_options['fields']['field_display_view_mode']['table'] = 'field_data_field_display_view_mode';
  $handler->display->display_options['fields']['field_display_view_mode']['field'] = 'field_display_view_mode';
  $handler->display->display_options['fields']['field_display_view_mode']['element_default_classes'] = FALSE;
  /* Field: Chains: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['label'] = '';
  $handler->display->display_options['fields']['field_position']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_position']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_position']['settings'] = array(
    'field_formatter_class' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Chains: Displaying References */
  $handler->display->display_options['fields']['field_display_targets']['id'] = 'field_display_targets';
  $handler->display->display_options['fields']['field_display_targets']['table'] = 'field_data_field_display_targets';
  $handler->display->display_options['fields']['field_display_targets']['field'] = 'field_display_targets';
  $handler->display->display_options['fields']['field_display_targets']['label'] = 'Content Title';
  $handler->display->display_options['fields']['field_display_targets']['element_type'] = '0';
  $handler->display->display_options['fields']['field_display_targets']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_display_targets']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_display_targets']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_display_targets']['settings'] = array(
    'link' => 1,
    'field_formatter_class' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_display_targets']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_display_targets']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_display_targets']['field_api_classes'] = TRUE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['relationship'] = 'field_display_targets_target_id';
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'field_display_targets_target_id';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Content Options';
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit content';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'field_display_targets_target_id';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'content_relationships:display_content';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view_force'] = 'content_relationships:display_content';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view_force_flag'] = 0;
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_arguments_per_row'] = 1;
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_arguments_per_row_fields'] = 'eck_chains.uuid';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Chains: Source (field_source) */
  $handler->display->display_options['arguments']['field_source_target_id']['id'] = 'field_source_target_id';
  $handler->display->display_options['arguments']['field_source_target_id']['table'] = 'field_data_field_source';
  $handler->display->display_options['arguments']['field_source_target_id']['field'] = 'field_source_target_id';
  $handler->display->display_options['arguments']['field_source_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_source_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_source_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_source_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Chains: chains type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_chains';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'display' => 'display',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'node/%/display';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Display';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['content_relationships'] = array(
    t('Master'),
    t('Content Relationships'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="actions">
  <ul class="action-links">
    <li><a href="/en/chains/relationship/[uuid]?destination=/node/!1/relationships" class="btn btn-default">View Relationship</a></li>
    <li><a href="/en/admin/structure/entity-type/chains/relationship/[id]/edit?destination=node/!1/relationships" class="btn btn-default">Edit Relationship</a></li>
  </ul>
</div>'),
    t('<strong>no values found</strong>'),
    t('Content entity referenced from field_target'),
    t('author'),
    t('.'),
    t('UUID'),
    t('Type'),
    t('Related Content'),
    t('<strong>[field_target]</strong> ([field_target-target_id])'),
    t('Body'),
    t('Name'),
    t('Status'),
    t('Last updated'),
    t('All'),
    t('Display'),
    t('Display Content'),
    t('Organize and display all content for a layout'),
    t('Add a Display'),
    t('<strong>no layouts to display or organize. consider adding some data.</strong>'),
    t('Content entity referenced from field_display_targets'),
    t('Id'),
    t('Content'),
    t('Display UUID'),
    t('Display Options'),
    t('edit display'),
    t('Display View Mode'),
    t('Content Title'),
    t('Published'),
    t('Content Options'),
    t('edit content'),
  );
  $export['content_relationships'] = $view;

  $view = new view();
  $view->name = 'content_relationships_admin';
  $view->description = '';
  $view->tag = 'chains';
  $view->base_table = 'eck_chains';
  $view->human_name = 'Admin UI: Content Relationships';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Relationships';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'changed' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'title_field_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'uid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'base';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'uuid' => 'uuid',
    'field_source' => 'field_source',
    'type' => 'type',
    'field_target' => 'field_target',
    'name' => 'name',
    'changed' => 'changed',
    'view_link' => 'view_link',
    'edit_link' => 'view_link',
    'delete_link' => 'view_link',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uuid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_source' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_target' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_link' => array(
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'edit_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<strong>no values found</strong>';
  $handler->display->display_options['empty']['area']['format'] = 'unfiltered';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_source_target_id']['id'] = 'field_source_target_id';
  $handler->display->display_options['relationships']['field_source_target_id']['table'] = 'field_data_field_source';
  $handler->display->display_options['relationships']['field_source_target_id']['field'] = 'field_source_target_id';
  /* Field: Chains: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_chains';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = 'ID';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Chains: Chains UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'eck_chains';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'UUID';
  $handler->display->display_options['fields']['uuid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['uuid']['alter']['path'] = 'chains/relationship/[ui]';
  /* Field: Chains: Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['element_type'] = '0';
  $handler->display->display_options['fields']['field_source']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_source']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_source']['settings'] = array(
    'link' => 1,
    'field_formatter_class' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_source']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_source']['field_api_classes'] = TRUE;
  /* Field: Chains: chains type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'eck_chains';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Type';
  /* Field: Chains: Target */
  $handler->display->display_options['fields']['field_target']['id'] = 'field_target';
  $handler->display->display_options['fields']['field_target']['table'] = 'field_data_field_target';
  $handler->display->display_options['fields']['field_target']['field'] = 'field_target';
  $handler->display->display_options['fields']['field_target']['label'] = 'Reference Entity';
  $handler->display->display_options['fields']['field_target']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_target']['alter']['text'] = '([field_target-target_id]) [field_target] ';
  $handler->display->display_options['fields']['field_target']['element_type'] = '0';
  $handler->display->display_options['fields']['field_target']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_target']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_target']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_target']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_target']['settings'] = array(
    'link' => 1,
    'field_formatter_class' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_target']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_target']['multi_type'] = 'ul';
  /* Field: Chains: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_chains';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long_no_year';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'html5_tools_iso8601';
  /* Field: Chains: Link */
  $handler->display->display_options['fields']['view_link']['id'] = 'view_link';
  $handler->display->display_options['fields']['view_link']['table'] = 'eck_chains';
  $handler->display->display_options['fields']['view_link']['field'] = 'view_link';
  $handler->display->display_options['fields']['view_link']['label'] = 'Operations';
  $handler->display->display_options['fields']['view_link']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_link']['alter']['link_class'] = 'btn btn-primary';
  $handler->display->display_options['fields']['view_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_link']['text'] = 'view';
  /* Field: Chains: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'eck_chains';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['label'] = 'edit';
  $handler->display->display_options['fields']['edit_link']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_link']['alter']['link_class'] = 'btn btn-default';
  $handler->display->display_options['fields']['edit_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_link']['text'] = 'edit';
  /* Contextual filter: Chains: Source (field_source) */
  $handler->display->display_options['arguments']['field_source_target_id']['id'] = 'field_source_target_id';
  $handler->display->display_options['arguments']['field_source_target_id']['table'] = 'field_data_field_source';
  $handler->display->display_options['arguments']['field_source_target_id']['field'] = 'field_source_target_id';
  $handler->display->display_options['arguments']['field_source_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_source_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_source_target_id']['default_argument_options']['argument'] = 'all';
  $handler->display->display_options['arguments']['field_source_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_source_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_source_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Chains: chains type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_chains';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'relationship' => 'relationship',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Chains: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_chains';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['changed']['group'] = 1;
  $handler->display->display_options['filters']['changed']['exposed'] = TRUE;
  $handler->display->display_options['filters']['changed']['expose']['operator_id'] = 'updated_op';
  $handler->display->display_options['filters']['changed']['expose']['label'] = 'Last Updated';
  $handler->display->display_options['filters']['changed']['expose']['description'] = 'Use an offset from the current time such as "+1 day" or "-2 hours -30 minutes".';
  $handler->display->display_options['filters']['changed']['expose']['operator'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['identifier'] = 'updated';
  $handler->display->display_options['filters']['changed']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['changed']['group_info']['label'] = 'Changed';
  $handler->display->display_options['filters']['changed']['group_info']['identifier'] = 'changed';
  $handler->display->display_options['filters']['changed']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['changed']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Title (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['relationship'] = 'field_source_target_id';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Source Title';
  $handler->display->display_options['filters']['title_field_value']['expose']['description'] = 'Any combination of letters contained in a node title';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'source_title';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
  );

  /* Display: Relationships */
  $handler = $view->new_display('page', 'Relationships', 'content_relationships');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="actions">
  <ul class="action-links">
    <li><a href="/en/admin/structure/entity-type/chains/relationship/add?destination=admin/content/relationships">Add Relationship</a></li>
  </ul>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'unfiltered';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_source_target_id']['id'] = 'field_source_target_id';
  $handler->display->display_options['relationships']['field_source_target_id']['table'] = 'field_data_field_source';
  $handler->display->display_options['relationships']['field_source_target_id']['field'] = 'field_source_target_id';
  /* Relationship: Chains: Author */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'eck_chains';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['label'] = 'chain_author';
  /* Relationship: User: Chains */
  $handler->display->display_options['relationships']['eck_chains']['id'] = 'eck_chains';
  $handler->display->display_options['relationships']['eck_chains']['table'] = 'users';
  $handler->display->display_options['relationships']['eck_chains']['field'] = 'eck_chains';
  $handler->display->display_options['relationships']['eck_chains']['relationship'] = 'uid_1';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'admin/content/relationships';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Relationships';
  $handler->display->display_options['menu']['weight'] = '9';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Display */
  $handler = $view->new_display('page', 'Display', 'display_content');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Display Content';
  $handler->display->display_options['display_description'] = 'Organize and display all content for a layout';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_source' => 'field_source',
    'uuid' => 'uuid',
    'field_display_targets' => 'field_display_targets',
    'field_position' => 'field_position',
    'field_display_view_mode' => 'field_display_view_mode',
    'type' => 'type',
    'uid' => 'uid',
    'changed' => 'changed',
    'view_link' => 'view_link',
    'edit_link' => 'view_link',
    'delete_link' => 'view_link',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_source' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uuid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_display_targets' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_position' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_display_view_mode' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_link' => array(
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'edit_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Action Links';
  $handler->display->display_options['header']['area']['content'] = '<div class="actions">
  <ul class="action-links">
    <li><a href="/admin/structure/entity-type/chains/display/add?destination=admin/content/display">Add Display</a></li>
  </ul>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'unfiltered';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['empty'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<strong>no layouts to display or organize. consider adding some data.</strong>';
  $handler->display->display_options['empty']['area']['format'] = 'unfiltered';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_source_target_id']['id'] = 'field_source_target_id';
  $handler->display->display_options['relationships']['field_source_target_id']['table'] = 'field_data_field_source';
  $handler->display->display_options['relationships']['field_source_target_id']['field'] = 'field_source_target_id';
  /* Relationship: Chains: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'eck_chains';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'chain_author';
  /* Relationship: User: Chains */
  $handler->display->display_options['relationships']['eck_chains']['id'] = 'eck_chains';
  $handler->display->display_options['relationships']['eck_chains']['table'] = 'users';
  $handler->display->display_options['relationships']['eck_chains']['field'] = 'eck_chains';
  $handler->display->display_options['relationships']['eck_chains']['relationship'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: VAR: source ID */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['ui_name'] = 'VAR: source ID';
  $handler->display->display_options['fields']['field_source']['label'] = 'ID';
  $handler->display->display_options['fields']['field_source']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_source']['element_type'] = '0';
  $handler->display->display_options['fields']['field_source']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_source']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_source']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_source']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_source']['settings'] = array(
    'field_formatter_class' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_source']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_source']['field_api_classes'] = TRUE;
  /* Field: Chains: Chains UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'eck_chains';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'UUID';
  $handler->display->display_options['fields']['uuid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['uuid']['alter']['path'] = 'chains/display/[uuid]';
  /* Field: Chains: Source */
  $handler->display->display_options['fields']['field_source_1']['id'] = 'field_source_1';
  $handler->display->display_options['fields']['field_source_1']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source_1']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source_1']['label'] = 'Source of the display';
  $handler->display->display_options['fields']['field_source_1']['settings'] = array(
    'link' => 1,
    'field_formatter_class' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_source_1']['delta_offset'] = '0';
  /* Field: Chains: Displaying References */
  $handler->display->display_options['fields']['field_display_targets']['id'] = 'field_display_targets';
  $handler->display->display_options['fields']['field_display_targets']['table'] = 'field_data_field_display_targets';
  $handler->display->display_options['fields']['field_display_targets']['field'] = 'field_display_targets';
  $handler->display->display_options['fields']['field_display_targets']['element_type'] = '0';
  $handler->display->display_options['fields']['field_display_targets']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_display_targets']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_display_targets']['settings'] = array(
    'link' => 1,
    'field_formatter_class' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_display_targets']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_display_targets']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_display_targets']['field_api_classes'] = TRUE;
  /* Field: Chains: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['element_type'] = '0';
  $handler->display->display_options['fields']['field_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_position']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_position']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_position']['settings'] = array(
    'field_formatter_class' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_position']['field_api_classes'] = TRUE;
  /* Field: Chains: Display View Mode */
  $handler->display->display_options['fields']['field_display_view_mode']['id'] = 'field_display_view_mode';
  $handler->display->display_options['fields']['field_display_view_mode']['table'] = 'field_data_field_display_view_mode';
  $handler->display->display_options['fields']['field_display_view_mode']['field'] = 'field_display_view_mode';
  $handler->display->display_options['fields']['field_display_view_mode']['label'] = 'Display Mode';
  $handler->display->display_options['fields']['field_display_view_mode']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_display_view_mode']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_display_view_mode']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_display_view_mode']['empty'] = '<em>no view mode selected</em>';
  /* Field: Chains: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_chains';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long_no_year';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'html5_tools_iso8601';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Field: Chains: Link */
  $handler->display->display_options['fields']['view_link']['id'] = 'view_link';
  $handler->display->display_options['fields']['view_link']['table'] = 'eck_chains';
  $handler->display->display_options['fields']['view_link']['field'] = 'view_link';
  $handler->display->display_options['fields']['view_link']['label'] = 'Options';
  $handler->display->display_options['fields']['view_link']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_link']['alter']['link_class'] = 'btn btn-primary';
  $handler->display->display_options['fields']['view_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_link']['text'] = 'Link';
  /* Field: Chains: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'eck_chains';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_link']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_link']['alter']['link_class'] = 'btn btn-default';
  $handler->display->display_options['fields']['edit_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_link']['text'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Chains: chains type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_chains';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'display' => 'display',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Chains: Changed */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'eck_chains';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['changed']['group'] = 1;
  $handler->display->display_options['filters']['changed']['exposed'] = TRUE;
  $handler->display->display_options['filters']['changed']['expose']['operator_id'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['label'] = 'Last Updated';
  $handler->display->display_options['filters']['changed']['expose']['description'] = 'Use an offset from the current time such as "+1 day" or "-2 hours -30 minutes".';
  $handler->display->display_options['filters']['changed']['expose']['operator'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['identifier'] = 'updated';
  $handler->display->display_options['filters']['changed']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Chains: Chains UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'eck_chains';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['operator'] = 'contains';
  $handler->display->display_options['filters']['uuid']['group'] = 1;
  $handler->display->display_options['filters']['uuid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uuid']['expose']['operator_id'] = 'uuid_op';
  $handler->display->display_options['filters']['uuid']['expose']['label'] = 'Chains UUID';
  $handler->display->display_options['filters']['uuid']['expose']['operator'] = 'uuid_op';
  $handler->display->display_options['filters']['uuid']['expose']['identifier'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  /* Filter criterion: Content: Title (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['relationship'] = 'field_source_target_id';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Source Title';
  $handler->display->display_options['filters']['title_field_value']['expose']['description'] = 'Any combination of letters contained in a node title';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'source_title';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'user';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'admin/content/displays';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Displays';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['content_relationships_admin'] = array(
    t('Master'),
    t('Relationships'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<strong>no values found</strong>'),
    t('Content entity referenced from field_source'),
    t('ID'),
    t('.'),
    t('UUID'),
    t('Source'),
    t('Type'),
    t('Reference Entity'),
    t('([field_target-target_id]) [field_target] '),
    t('Changed'),
    t('Operations'),
    t('view'),
    t('edit'),
    t('All'),
    t('Last Updated'),
    t('Use an offset from the current time such as "+1 day" or "-2 hours -30 minutes".'),
    t('Source Title'),
    t('Any combination of letters contained in a node title'),
    t('<div class="actions">
  <ul class="action-links">
    <li><a href="/en/admin/structure/entity-type/chains/relationship/add?destination=admin/content/relationships">Add Relationship</a></li>
  </ul>
</div>'),
    t('chain_author'),
    t('Chains'),
    t('Display'),
    t('Display Content'),
    t('Organize and display all content for a layout'),
    t('Action Links'),
    t('<div class="actions">
  <ul class="action-links">
    <li><a href="/admin/structure/entity-type/chains/display/add?destination=admin/content/display">Add Display</a></li>
  </ul>
</div>'),
    t('Displaying @start - @end of @total'),
    t('<strong>no layouts to display or organize. consider adding some data.</strong>'),
    t('Source of the display'),
    t('Displaying References'),
    t('Position'),
    t('Display Mode'),
    t('<em>no view mode selected</em>'),
    t('Name'),
    t('Options'),
    t('Link'),
    t('Edit'),
    t('Chains UUID'),
  );
  $export['content_relationships_admin'] = $view;

  $view = new view();
  $view->name = 'relationships_render_below';
  $view->description = '';
  $view->tag = 'chains';
  $view->base_table = 'eck_chains';
  $view->human_name = 'User UI: Relationships Render Below';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Content Relationships';
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'entity_ca';
  $handler->display->display_options['access']['perm'] = 'edit options';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'uuid' => 'uuid',
    'type' => 'type',
    'field_target' => 'field_target',
    'nid' => 'nid',
    'body' => 'field_target',
    'status' => 'status',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uuid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_target' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br/>',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="actions">
  <ul class="action-links">
    <li><a href="/en/chains/relationship/[uuid]?destination=/node/!1/relationships" class="btn btn-default">View Relationship</a></li>
    <li><a href="/en/admin/structure/entity-type/chains/relationship/[id]/edit?destination=node/!1/relationships" class="btn btn-default">Edit Relationship</a></li>
  </ul>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'unfiltered';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<strong>no values found</strong>';
  $handler->display->display_options['empty']['area']['format'] = 'unfiltered';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_target_target_id']['id'] = 'field_target_target_id';
  $handler->display->display_options['relationships']['field_target_target_id']['table'] = 'field_data_field_target';
  $handler->display->display_options['relationships']['field_target_target_id']['field'] = 'field_target_target_id';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'field_target_target_id';
  /* Field: Chains: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_chains';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Chains: Chains UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'eck_chains';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'UUID';
  $handler->display->display_options['fields']['uuid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uuid']['alter']['path'] = 'chains/relationship/2';
  $handler->display->display_options['fields']['uuid']['element_type'] = '0';
  $handler->display->display_options['fields']['uuid']['element_label_type'] = '0';
  $handler->display->display_options['fields']['uuid']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['uuid']['element_default_classes'] = FALSE;
  /* Field: Chains: chains type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'eck_chains';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: Chains: Target */
  $handler->display->display_options['fields']['field_target']['id'] = 'field_target';
  $handler->display->display_options['fields']['field_target']['table'] = 'field_data_field_target';
  $handler->display->display_options['fields']['field_target']['field'] = 'field_target';
  $handler->display->display_options['fields']['field_target']['label'] = 'Related Content';
  $handler->display->display_options['fields']['field_target']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_target']['alter']['text'] = '<strong>[field_target]</strong> ([field_target-target_id])';
  $handler->display->display_options['fields']['field_target']['element_type'] = '0';
  $handler->display->display_options['fields']['field_target']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_target']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_target']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_target']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_target']['settings'] = array(
    'link' => 1,
    'field_formatter_class' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_target']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_target']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_target']['multi_type'] = 'ul';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_target_target_id';
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '254',
    'field_formatter_class' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['element_class'] = 'nowrap';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['relationship'] = 'field_target_target_id';
  $handler->display->display_options['fields']['status']['label'] = 'Status';
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'field_target_target_id';
  $handler->display->display_options['fields']['changed']['label'] = 'Last updated';
  $handler->display->display_options['fields']['changed']['element_class'] = 'nowrap';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'short_date_only';
  /* Contextual filter: Chains: Source (field_source) */
  $handler->display->display_options['arguments']['field_source_target_id']['id'] = 'field_source_target_id';
  $handler->display->display_options['arguments']['field_source_target_id']['table'] = 'field_data_field_source';
  $handler->display->display_options['arguments']['field_source_target_id']['field'] = 'field_source_target_id';
  $handler->display->display_options['arguments']['field_source_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_source_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_source_target_id']['default_argument_options']['argument'] = 'all';
  $handler->display->display_options['arguments']['field_source_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_source_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_source_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Chains: chains type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_chains';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'relationship' => 'relationship',
  );

  /* Display: Display */
  $handler = $view->new_display('page', 'Display', 'display_content');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Display Content';
  $handler->display->display_options['display_description'] = 'Organize and display all content for a layout';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Link */
  $handler->display->display_options['header']['link']['id'] = 'link';
  $handler->display->display_options['header']['link']['table'] = 'views';
  $handler->display->display_options['header']['link']['field'] = 'link';
  $handler->display->display_options['header']['link']['label'] = 'Add a Display';
  $handler->display->display_options['header']['link']['empty'] = TRUE;
  $handler->display->display_options['header']['link']['text'] = 'Add a Display';
  $handler->display->display_options['header']['link']['path'] = 'admin/structure/entity-type/chains/display/add';
  $handler->display->display_options['header']['link']['querystring'] = 'uuid={uuid}&field_source=!1';
  $handler->display->display_options['header']['link']['class'] = 'btn btn-primary';
  $handler->display->display_options['header']['link']['tokenize'] = TRUE;
  $handler->display->display_options['header']['link']['use_curly_braces'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<strong>no layouts to display or organize. consider adding some data.</strong>';
  $handler->display->display_options['empty']['area']['format'] = 'unfiltered';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_display_targets_target_id']['id'] = 'field_display_targets_target_id';
  $handler->display->display_options['relationships']['field_display_targets_target_id']['table'] = 'field_data_field_display_targets';
  $handler->display->display_options['relationships']['field_display_targets_target_id']['field'] = 'field_display_targets_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_chains';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['ui_name'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Chains: Chains UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'eck_chains';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'Display UUID';
  /* Field: Chains: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['label'] = '';
  $handler->display->display_options['fields']['field_position']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_position']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_position']['settings'] = array(
    'field_formatter_class' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Chains: Displaying References */
  $handler->display->display_options['fields']['field_display_targets']['id'] = 'field_display_targets';
  $handler->display->display_options['fields']['field_display_targets']['table'] = 'field_data_field_display_targets';
  $handler->display->display_options['fields']['field_display_targets']['field'] = 'field_display_targets';
  $handler->display->display_options['fields']['field_display_targets']['label'] = '';
  $handler->display->display_options['fields']['field_display_targets']['element_type'] = '0';
  $handler->display->display_options['fields']['field_display_targets']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_display_targets']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_display_targets']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_display_targets']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_display_targets']['settings'] = array(
    'view_mode' => 'field_display_view_mode',
    'links' => 0,
    'field_formatter_class' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_display_targets']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_display_targets']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_display_targets']['field_api_classes'] = TRUE;
  /* Field: Chains: Display View Mode */
  $handler->display->display_options['fields']['field_display_view_mode']['id'] = 'field_display_view_mode';
  $handler->display->display_options['fields']['field_display_view_mode']['table'] = 'field_data_field_display_view_mode';
  $handler->display->display_options['fields']['field_display_view_mode']['field'] = 'field_display_view_mode';
  $handler->display->display_options['fields']['field_display_view_mode']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'field_display_targets_target_id';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'content_relationships:display_content';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_arguments_per_row'] = 1;
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_arguments_per_row_fields'] = 'eck_chains.uuid';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Chains: Source (field_source) */
  $handler->display->display_options['arguments']['field_source_target_id']['id'] = 'field_source_target_id';
  $handler->display->display_options['arguments']['field_source_target_id']['table'] = 'field_data_field_source';
  $handler->display->display_options['arguments']['field_source_target_id']['field'] = 'field_source_target_id';
  $handler->display->display_options['arguments']['field_source_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_source_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_source_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_source_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Chains: chains type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_chains';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'display' => 'display',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Chains: Position (field_position) */
  $handler->display->display_options['filters']['field_position_value']['id'] = 'field_position_value';
  $handler->display->display_options['filters']['field_position_value']['table'] = 'field_data_field_position';
  $handler->display->display_options['filters']['field_position_value']['field'] = 'field_position_value';
  $handler->display->display_options['filters']['field_position_value']['value'] = array(
    'below' => 'below',
  );
  $handler->display->display_options['path'] = 'node/%/display';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Display';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['relationships_render_below'] = array(
    t('Master'),
    t('Content Relationships'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="actions">
  <ul class="action-links">
    <li><a href="/en/chains/relationship/[uuid]?destination=/node/!1/relationships" class="btn btn-default">View Relationship</a></li>
    <li><a href="/en/admin/structure/entity-type/chains/relationship/[id]/edit?destination=node/!1/relationships" class="btn btn-default">Edit Relationship</a></li>
  </ul>
</div>'),
    t('<strong>no values found</strong>'),
    t('Content entity referenced from field_target'),
    t('author'),
    t('.'),
    t('UUID'),
    t('Type'),
    t('Related Content'),
    t('<strong>[field_target]</strong> ([field_target-target_id])'),
    t('Body'),
    t('Name'),
    t('Status'),
    t('Last updated'),
    t('All'),
    t('Display'),
    t('Display Content'),
    t('Organize and display all content for a layout'),
    t('Add a Display'),
    t('<strong>no layouts to display or organize. consider adding some data.</strong>'),
    t('Content entity referenced from field_display_targets'),
    t('Id'),
    t('Display UUID'),
    t('Display View Mode'),
  );
  $export['relationships_render_below'] = $view;

  $view = new view();
  $view->name = 'relationships_views_widgets';
  $view->description = '';
  $view->tag = 'chains';
  $view->base_table = 'node';
  $view->human_name = 'Admin UI: Relationships Views Widgets';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'type' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'status' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'title' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'base';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Entity Reference View Widget Checkbox: Content */
  $handler->display->display_options['fields']['entityreference_view_widget']['id'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['table'] = 'node';
  $handler->display->display_options['fields']['entityreference_view_widget']['field'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['label'] = '';
  $handler->display->display_options['fields']['entityreference_view_widget']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entityreference_view_widget']['ervw']['force_single'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Title and Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<strong> <em>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '254',
    'field_formatter_class' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Select Content Widget */
  $handler = $view->new_display('entityreference_view_widget', 'Select Content Widget', 'select_content_widget');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'entityreference_view_widget' => 'entityreference_view_widget',
    'title' => 'title',
    'body' => 'title',
    'type' => 'type',
    'name' => 'name',
    'status' => 'status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'entityreference_view_widget' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br/>',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['relationships_views_widgets'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('author'),
    t('Title and Description'),
    t('Type'),
    t('Name'),
    t('Published'),
    t('All'),
    t('Title'),
    t('Entity Reference'),
    t('Select Content Widget'),
  );
  $export['relationships_views_widgets'] = $view;

  return $export;
}
