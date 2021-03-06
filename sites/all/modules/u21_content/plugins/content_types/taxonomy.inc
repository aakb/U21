<?php
// $Id$

/**
 * @file library.inc
 * Provides taxonomy related panels content types.
 */


/**
 * Callback function to supply a list of content types.
 *
 * This is only required to make CTools know that we're providing
 * multiple types here (since we have no single => TRUE in the array).
 */
function u21_content_taxonomy_ctools_content_types() {
  return array(
    'title' => t('Taxonomy links'),
  );
}

/**
 * Callback function to supply a list of content types.
 */
function u21_content_taxonomy_content_type_content_types() {
  $types = array(
    'taxonomy_links' => array(
      'title' => t('Taxonomy links'),
      'description' => t('Using taxonomy to create link box.'),
      'category' => t('Taxonomy'),
      'defaults' => array(
         'path_prefix' => '/term',
         'vocabulary' => '1',
         'main_type' => array(),
         'node_types' => array(),
      ),
    ),
    'taxonomy_links_context' => array(
      'title' => t('Taxonomy links for selected contect'),
      'description' => t('Using taxonomy to create link box.'),
      'category' => t('Taxonomy'),
      'defaults' => array(
         'path_prefix' => '/%slug/term',
         'vocabulary' => '1',
         'main_type' => array(),
         'node_types' => array(),
      ),
      'required context' => new ctools_context_required(t('Node'), 'node'),
    ),
  );
  return $types;
}

/**
 * Return the pane contents.
 */
function u21_content_taxonomy_content_type_render($subtype, $conf, $panel_args, $context) {
  $block = new stdClass();
  $node = isset($context->data) ? drupal_clone($context->data) : NULL;
  $slug_nid = isset($context->argument) ? $context->argument : NULL;
  switch($subtype) {
    case 'taxonomy_links':
    case 'taxonomy_links_context':
      $block->title = t('Categories');
      $block->content = theme('u21_content_taxonomy_links', $node, 
                              $conf['path_prefix'], $conf['vocabulary'],
                              $conf['main_type'], $conf['node_types'],
                              $slug_nid, $panel_args);
      break;
  }
  return $block;
}

/**
 * Return the pane titles.
 */
function u21_content_taxonomy_content_type_admin_title($subtype, $conf, $context) {
  switch($subtype) {
    case 'taxonomy_links':
    case 'taxonomy_links_context':
      if ($context->identifier) {
        $str = t('"@s":  Taxonomy links', array('@s' => $context->identifier));        
      }
      else {
       $str = t('Taxonomy links');
      }
      return $str;
  }
}

/**
 * Returns an edit form for the content type.
 */
function u21_content_taxonomy_content_type_edit_form(&$form, &$form_state) {
  $conf = $form_state['conf'];
  switch ($form_state['subtype_name']) {
    case 'taxonomy_links':
    case 'taxonomy_links_context':
      $form['path_prefix'] = array(
        '#type' => 'textfield',
        '#title' => t('Path prefix (e.g location/%slug/news/articles)'),
        '#default_value' => $conf['path_prefix'],
      );

      // Load vocabularies
      $options = array();
      $vocabularies = taxonomy_get_vocabularies();
      foreach ($vocabularies as $vocabulary) {
          $options[$vocabulary->vid] = $vocabulary->name;
      }
      $form['vocabulary'] = array(
        '#type' => 'select',
        '#title' => t('Vocabulary to use'),
        '#options' => $options,
        '#default_value' => $conf['vocabulary'],
      );

      $options = array();
      $types = node_get_types();
      foreach ($types as $key => $obj) {
        $options[$key] = $obj->name;
      }

      // Main content type
      $form['main_type'] = array(
        '#type' => 'select',
        '#title' => t('Which type of node'),
        '#options' => $options,
        '#default_value' => $conf['main_type'],
      );
      
      // Content types
      $form['node_types'] = array(
        '#type' => 'checkboxes',
        '#title' => t('Which types should be included in the count'),
        '#options' => $options,
        '#default_value' => $conf['node_types'],
      );


      break;
  }
}
/**
 * Submit handler for the content type editing form.
 */
function u21_content_taxonomy_content_type_edit_form_submit(&$form, &$form_state) {
  switch ($form_state['subtype_name']) {
    case 'taxonomy_links':
    case 'taxonomy_links_context':
      $form_state['conf']['path_prefix'] = $form_state['values']['path_prefix'];
      $form_state['conf']['vocabulary'] = $form_state['values']['vocabulary'];
      $form_state['conf']['main_type'] = $form_state['values']['main_type'];
      $form_state['conf']['node_types'] = $form_state['values']['node_types'];
      break;
  }
}

/**
 * Counts the number of node that is related to term and for an specifik node ref (slug).
 *
 * @param interger $tid term id
 * @param string $type content-type
 * @param interger $slug_nid node id for the slug node (panels slug)
 * @return interger
 */
function _u21_content_taxonomy_node_count($tid, $type, $slug_nid) {
  $result = db_query(db_rewrite_sql('SELECT t.tid, COUNT(n.nid) AS c
                      FROM {content_field_slug_ref} s INNER JOIN {node} n ON s.nid = n.nid
                                                    INNER JOIN {term_node} t ON t.vid = n.vid
                      WHERE s.field_slug_ref_nid IS NOT NULL
                        AND s.field_slug_ref_nid = %d
                        AND t.tid = %d
                        AND n.status = 1 AND n.type = \'%s\'
                      GROUP BY t.tid'), $slug_nid, $tid, $type);
  $result = db_fetch_array($result);
  return $result['c'];
}
