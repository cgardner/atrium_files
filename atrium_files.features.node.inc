<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _atrium_files_node_info() {
  $items = array(
    'file' => array(
      'name' => t('File'),
      'module' => 'features',
      'description' => t('A document is a file that can be downloaded'),
      'has_title' => '1',
      'title_label' => t('Short Description'),
      'has_body' => '0',
      'body_label' => t(''),
    ),
  );
  return $items;
}
