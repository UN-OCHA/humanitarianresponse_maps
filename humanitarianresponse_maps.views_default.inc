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

  $view = new view;
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
  $handler->display->display_options['use_more_text'] = 'View all';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
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
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no visuals';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_map_type']['id'] = 'field_map_type';
  $handler->display->display_options['fields']['field_map_type']['table'] = 'field_data_field_map_type';
  $handler->display->display_options['fields']['field_map_type']['field'] = 'field_map_type';
  $handler->display->display_options['fields']['field_map_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_map_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_map_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_map_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_map_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_map_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_map_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_map_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_map_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_map_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_map_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_map_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_map_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_map_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_map_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_map_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_map_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_map_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_map_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_map_type']['field_api_classes'] = 0;
  /* Field: Content: Cluster(s) */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['label'] = 'Cluster';
  $handler->display->display_options['fields']['field_clusters']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_clusters']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_clusters']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_clusters']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_clusters']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_clusters']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_clusters']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_clusters']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_clusters']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_clusters']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_clusters']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_clusters']['field_api_classes'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
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
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
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
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_doc_thumbnail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_doc_thumbnail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_doc_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_doc_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_doc_thumbnail']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
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
  /* Filter criterion: Content: Cluster(s) (field_clusters) */
  $handler->display->display_options['filters']['field_clusters_tid']['id'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['field'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator_id'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Cluster';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['identifier'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_clusters_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_clusters_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_clusters_tid']['vocabulary'] = 'clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['error_message'] = 1;
  /* Filter criterion: Content: Type (field_map_type) */
  $handler->display->display_options['filters']['field_map_type_tid']['id'] = 'field_map_type_tid';
  $handler->display->display_options['filters']['field_map_type_tid']['table'] = 'field_data_field_map_type';
  $handler->display->display_options['filters']['field_map_type_tid']['field'] = 'field_map_type_tid';
  $handler->display->display_options['filters']['field_map_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_map_type_tid']['expose']['operator_id'] = 'field_map_type_tid_op';
  $handler->display->display_options['filters']['field_map_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_map_type_tid']['expose']['operator'] = 'field_map_type_tid_op';
  $handler->display->display_options['filters']['field_map_type_tid']['expose']['identifier'] = 'field_map_type_tid';
  $handler->display->display_options['filters']['field_map_type_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_map_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_map_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_map_type_tid']['vocabulary'] = 'map_types';
  $handler->display->display_options['filters']['field_map_type_tid']['error_message'] = 1;
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
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  $handler->display->display_options['path'] = 'visuals-data/visuals';

  /* Display: Home */
  $handler = $view->new_display('panel_pane', 'Home', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest Map';
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
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['field_doc_thumbnail']['id'] = 'field_doc_thumbnail';
  $handler->display->display_options['fields']['field_doc_thumbnail']['table'] = 'field_data_field_doc_thumbnail';
  $handler->display->display_options['fields']['field_doc_thumbnail']['field'] = 'field_doc_thumbnail';
  $handler->display->display_options['fields']['field_doc_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_doc_thumbnail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_doc_thumbnail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_doc_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_doc_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_doc_thumbnail']['field_api_classes'] = 0;

  /* Display: Visuals Per Term */
  $handler = $view->new_display('page', 'Visuals Per Term', 'page_3');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
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
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_doc_thumbnail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_doc_thumbnail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_doc_thumbnail']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_doc_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_doc_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_doc_thumbnail']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'clusters' => 'clusters',
    'coordination_hubs' => 'coordination_hubs',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
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
  $handler->display->display_options['filters']['field_map_type_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_map_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_map_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_map_type_tid']['vocabulary'] = 'map_types';
  $handler->display->display_options['filters']['field_map_type_tid']['error_message'] = 1;
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
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  $handler->display->display_options['path'] = 'taxonomy/term/%/visuals';

  /* Display: Block per term */
  $handler = $view->new_display('block', 'Block per term', 'block_1');
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
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'clusters' => 'clusters',
    'coordination_hubs' => 'coordination_hubs',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  $handler->display->display_options['block_description'] = 'Maps per term';
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
    t('There are no visuals'),
    t('Title'),
    t('Type'),
    t('Cluster'),
    t('Date'),
    t('Page'),
    t('more'),
    t('Home'),
    t('Latest Map'),
    t('View panes'),
    t('Visuals Per Term'),
    t('All'),
    t('Block per term'),
    t('Maps per term'),
  );
  $export['maps_view'] = $view;

  return $export;
}
