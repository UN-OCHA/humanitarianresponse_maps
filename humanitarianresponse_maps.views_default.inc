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
  $view->human_name = 'Maps view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Maps';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There is no data with the selected criteria.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
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
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
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
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_docs_source']['id'] = 'field_docs_source';
  $handler->display->display_options['fields']['field_docs_source']['table'] = 'field_data_field_docs_source';
  $handler->display->display_options['fields']['field_docs_source']['field'] = 'field_docs_source';
  $handler->display->display_options['fields']['field_docs_source']['label'] = '';
  $handler->display->display_options['fields']['field_docs_source']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_docs_source']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_docs_source']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_docs_source']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_docs_source']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_docs_source']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_docs_source']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_docs_source']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_docs_source']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_docs_source']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_docs_source']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_docs_source']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_docs_source']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_docs_source']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_docs_source']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_docs_source']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_docs_source']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_docs_source']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_docs_source']['field_api_classes'] = 0;
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
  $handler->display->display_options['path'] = 'maps/maps';

  /* Display: Cluster */
  $handler = $view->new_display('panel_pane', 'Cluster', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Cluster (field_cluster) */
  $handler->display->display_options['arguments']['field_cluster_tid']['id'] = 'field_cluster_tid';
  $handler->display->display_options['arguments']['field_cluster_tid']['table'] = 'field_data_field_cluster';
  $handler->display->display_options['arguments']['field_cluster_tid']['field'] = 'field_cluster_tid';
  $handler->display->display_options['arguments']['field_cluster_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_cluster_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_cluster_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_cluster_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_cluster_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_cluster_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_cluster_tid']['not'] = 0;
  $handler->display->display_options['pane_category']['name'] = 'Maps';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_cluster_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Cluster (field_cluster)',
    ),
  );

  /* Display: Coordination hub */
  $handler = $view->new_display('panel_pane', 'Coordination hub', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Coordination hubs (field_map_coordination_hub) */
  $handler->display->display_options['arguments']['field_map_coordination_hub_tid']['id'] = 'field_map_coordination_hub_tid';
  $handler->display->display_options['arguments']['field_map_coordination_hub_tid']['table'] = 'field_data_field_map_coordination_hub';
  $handler->display->display_options['arguments']['field_map_coordination_hub_tid']['field'] = 'field_map_coordination_hub_tid';
  $handler->display->display_options['arguments']['field_map_coordination_hub_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_map_coordination_hub_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_map_coordination_hub_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_map_coordination_hub_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_map_coordination_hub_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_map_coordination_hub_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_map_coordination_hub_tid']['not'] = 0;
  $handler->display->display_options['pane_category']['name'] = 'Maps';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_map_coordination_hub_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Coordination hubs (field_map_coordination_hub)',
    ),
  );
  $translatables['maps_view'] = array(
    t('Master'),
    t('Maps'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('There is no data with the selected criteria.'),
    t('Page'),
    t('Cluster'),
    t('All'),
    t('Coordination hub'),
  );
  $export['maps_view'] = $view;

  return $export;
}
