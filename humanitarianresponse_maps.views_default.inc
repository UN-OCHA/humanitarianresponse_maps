<?php
/**
 * @file
 * humanitarianresponse_maps.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function humanitarianresponse_maps_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'maps_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Visuals view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Visuals';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'View all';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_map_type' => 'field_map_type',
    'field_clusters' => 'field_clusters',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_map_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_clusters' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'There are no visuals';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_map_type']['id'] = 'field_map_type';
  $handler->display->display_options['fields']['field_map_type']['table'] = 'field_data_field_map_type';
  $handler->display->display_options['fields']['field_map_type']['field'] = 'field_map_type';
  $handler->display->display_options['fields']['field_map_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['label'] = 'Clusters';
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'map' => 'map',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_column_class';
  $handler->display->display_options['style_options']['row_class'] = 'grid-4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['field_doc_thumbnail']['id'] = 'field_doc_thumbnail';
  $handler->display->display_options['fields']['field_doc_thumbnail']['table'] = 'field_data_field_doc_thumbnail';
  $handler->display->display_options['fields']['field_doc_thumbnail']['field'] = 'field_doc_thumbnail';
  $handler->display->display_options['fields']['field_doc_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_doc_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_doc_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_doc_thumbnail']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'map' => 'map',
  );
  /* Filter criterion: Content: Clusters (field_clusters) */
  $handler->display->display_options['filters']['field_clusters_tid']['id'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['field'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator_id'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['identifier'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_clusters_tid']['vocabulary'] = 'clusters';
  /* Filter criterion: Content: Type (field_map_type) */
  $handler->display->display_options['filters']['field_map_type_tid']['id'] = 'field_map_type_tid';
  $handler->display->display_options['filters']['field_map_type_tid']['table'] = 'field_data_field_map_type';
  $handler->display->display_options['filters']['field_map_type_tid']['field'] = 'field_map_type_tid';
  $handler->display->display_options['filters']['field_map_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_map_type_tid']['expose']['operator_id'] = 'field_map_type_tid_op';
  $handler->display->display_options['filters']['field_map_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_map_type_tid']['expose']['operator'] = 'field_map_type_tid_op';
  $handler->display->display_options['filters']['field_map_type_tid']['expose']['identifier'] = 'field_map_type_tid';
  $handler->display->display_options['filters']['field_map_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_map_type_tid']['vocabulary'] = 'map_types';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['path'] = 'visuals-data/visuals';

  /* Display: Visuals Per Term */
  $handler = $view->new_display('page', 'Visuals Per Term', 'page_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_column_class';
  $handler->display->display_options['style_options']['row_class'] = 'grid-4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['field_doc_thumbnail']['id'] = 'field_doc_thumbnail';
  $handler->display->display_options['fields']['field_doc_thumbnail']['table'] = 'field_data_field_doc_thumbnail';
  $handler->display->display_options['fields']['field_doc_thumbnail']['field'] = 'field_doc_thumbnail';
  $handler->display->display_options['fields']['field_doc_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_doc_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_doc_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_doc_thumbnail']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'map' => 'map',
  );
  /* Filter criterion: Content: Type (field_map_type) */
  $handler->display->display_options['filters']['field_map_type_tid']['id'] = 'field_map_type_tid';
  $handler->display->display_options['filters']['field_map_type_tid']['table'] = 'field_data_field_map_type';
  $handler->display->display_options['filters']['field_map_type_tid']['field'] = 'field_map_type_tid';
  $handler->display->display_options['filters']['field_map_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_map_type_tid']['expose']['operator_id'] = 'field_map_type_tid_op';
  $handler->display->display_options['filters']['field_map_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_map_type_tid']['expose']['operator'] = 'field_map_type_tid_op';
  $handler->display->display_options['filters']['field_map_type_tid']['expose']['identifier'] = 'field_map_type_tid';
  $handler->display->display_options['filters']['field_map_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_map_type_tid']['vocabulary'] = 'map_types';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['path'] = 'taxonomy/term/%/visuals';

  /* Display: Block per term */
  $handler = $view->new_display('block', 'Block per term', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_3';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['block_description'] = 'Maps per term';

  /* Display: Home */
  $handler = $view->new_display('block', 'Home', 'visuals_home');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest Map';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['field_doc_thumbnail']['id'] = 'field_doc_thumbnail';
  $handler->display->display_options['fields']['field_doc_thumbnail']['table'] = 'field_data_field_doc_thumbnail';
  $handler->display->display_options['fields']['field_doc_thumbnail']['field'] = 'field_doc_thumbnail';
  $handler->display->display_options['fields']['field_doc_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_doc_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_doc_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_doc_thumbnail']['settings'] = array(
    'image_style' => 'resp_img__grid_4_with_margin',
    'image_link' => 'content',
  );
  $handler->display->display_options['block_description'] = 'Home Map';

  /* Display: XLS */
  $handler = $view->new_display('views_data_export', 'XLS', 'xls');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'visuals.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_map_type']['id'] = 'field_map_type';
  $handler->display->display_options['fields']['field_map_type']['table'] = 'field_data_field_map_type';
  $handler->display->display_options['fields']['field_map_type']['field'] = 'field_map_type';
  $handler->display->display_options['fields']['field_map_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Map file */
  $handler->display->display_options['fields']['field_map_file']['id'] = 'field_map_file';
  $handler->display->display_options['fields']['field_map_file']['table'] = 'field_data_field_map_file';
  $handler->display->display_options['fields']['field_map_file']['field'] = 'field_map_file';
  $handler->display->display_options['fields']['field_map_file']['label'] = 'File';
  $handler->display->display_options['fields']['field_map_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_map_file']['type'] = 'file_url_plain';
  /* Field: Field: Language */
  $handler->display->display_options['fields']['field_file_languages']['id'] = 'field_file_languages';
  $handler->display->display_options['fields']['field_file_languages']['table'] = 'field_data_field_file_languages';
  $handler->display->display_options['fields']['field_file_languages']['field'] = 'field_file_languages';
  $handler->display->display_options['fields']['field_file_languages']['settings'] = array(
    'format' => array(
      'iso' => 'iso',
      'name' => 0,
      'name_native' => 0,
    ),
  );
  $handler->display->display_options['fields']['field_file_languages']['delta_offset'] = '0';
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_organizations']['delta_offset'] = '0';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_locations']['delta_offset'] = '0';
  /* Field: Content: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['label'] = 'Clusters';
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  /* Field: Content: Themes */
  $handler->display->display_options['fields']['field_themes']['id'] = 'field_themes';
  $handler->display->display_options['fields']['field_themes']['table'] = 'field_data_field_themes';
  $handler->display->display_options['fields']['field_themes']['field'] = 'field_themes';
  $handler->display->display_options['fields']['field_themes']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_themes']['delta_offset'] = '0';
  /* Field: Content: Coordination Hub(s) */
  $handler->display->display_options['fields']['field_coordination_hubs']['id'] = 'field_coordination_hubs';
  $handler->display->display_options['fields']['field_coordination_hubs']['table'] = 'field_data_field_coordination_hubs';
  $handler->display->display_options['fields']['field_coordination_hubs']['field'] = 'field_coordination_hubs';
  $handler->display->display_options['fields']['field_coordination_hubs']['label'] = 'Coordination Hub';
  $handler->display->display_options['fields']['field_coordination_hubs']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_coordination_hubs']['delta_offset'] = '0';
  /* Field: Content: Emergencies */
  $handler->display->display_options['fields']['field_emergencies']['id'] = 'field_emergencies';
  $handler->display->display_options['fields']['field_emergencies']['table'] = 'field_data_field_emergencies';
  $handler->display->display_options['fields']['field_emergencies']['field'] = 'field_emergencies';
  $handler->display->display_options['fields']['field_emergencies']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_emergencies']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'visuals-data/visuals.xls';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page_3' => 0,
    'block_1' => 0,
    'visuals_home' => 0,
  );
  $translatables['maps_view'] = array(
    t('Master'),
    t('Visuals'),
    t('View all'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('There are no visuals'),
    t('Title'),
    t('Type'),
    t('Cluster'),
    t('Date'),
    t('Page'),
    t('more'),
    t('Visuals Per Term'),
    t('All'),
    t('Block per term'),
    t('Maps per term'),
    t('Home'),
    t('Latest Map'),
    t('Home Map'),
    t('XLS'),
    t('File'),
    t('Language'),
    t('Publication Date'),
    t('Source'),
    t('Location'),
    t('Themes'),
    t('Coordination Hub'),
    t('Emergencies'),
  );
  $export['maps_view'] = $view;

  return $export;
}
