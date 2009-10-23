<?php

/**
 * Implementation of hook_content_default_fields().
 */
function atrium_files_content_default_fields() {
  module_load_include('inc', 'atrium_files', 'atrium_files.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_files_content_default_fields', $args);
}

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_files_context_default_contexts() {
  module_load_include('inc', 'atrium_files', 'atrium_files.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_files_context_default_contexts', $args);
}

/**
 * Implementation of hook_menu_default_items().
 */
function atrium_files_menu_default_items() {
  module_load_include('inc', 'atrium_files', 'atrium_files.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_files_menu_default_items', $args);
}

/**
 * Implementation of hook_node_info().
 */
function atrium_files_node_info() {
  module_load_include('inc', 'atrium_files', 'atrium_files.features.node');
  $args = func_get_args();
  return call_user_func_array('_atrium_files_node_info', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function atrium_files_views_default_views() {
  module_load_include('inc', 'atrium_files', 'atrium_files.features.views');
  $args = func_get_args();
  return call_user_func_array('_atrium_files_views_default_views', $args);
}
