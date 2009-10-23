<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _atrium_files_content_default_fields() {
  $fields = array();

  // Exported field: field_document_file
  $fields[] = array(
    'field_name' => 'field_document_file',
    'type_name' => 'file',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '1',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'doc xls docx pdf xlsx',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'File',
      'weight' => '-4',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Translatables
  array(
    t('File'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _atrium_files_context_default_contexts() {
  $items = array();

  $items[] = array(
    'namespace' => 'spaces',
    'attribute' => 'feature',
    'value' => 'files',
    'description' => '',
    'node' => array(
      '0' => 'file',
    ),
    'views' => array(
      '0' => 'atrium_dashboard:page_3',
      '1' => 'atrium_files',
    ),
    'menu' => 'files',
  );
  return $items;
}

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _atrium_files_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Files',
    'path' => 'files',
    'weight' => '0',
  );
  // Translatables
  array(
    t('Files'),
  );


  return $items;
}
