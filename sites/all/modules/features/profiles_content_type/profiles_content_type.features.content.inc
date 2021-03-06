<?php

/**
 * Implementation of hook_content_default_fields().
 */
function profiles_content_type_content_default_fields() {
  $fields = array();

  // Exported field: field_profile_birth
  $fields['profile-field_profile_birth'] = array(
    'field_name' => 'field_profile_birth',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
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
      'nodeasblock teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'nodeasblock full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'date_only_long',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'blank',
      'default_value_code2' => '',
      'input_format' => 'j M Y',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Født',
      'weight' => '21',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_profile_clubs
  $fields['profile-field_profile_clubs'] = array(
    'field_name' => 'field_profile_clubs',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
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
      'nodeasblock teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'nodeasblock full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '3',
          '_error_element' => 'default_value_widget][field_profile_clubs][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Karriere',
      'weight' => '22',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_current_club
  $fields['profile-field_profile_current_club'] = array(
    'field_name' => 'field_profile_current_club',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
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
      'nodeasblock teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'nodeasblock full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'semantic_cck_use_semantic_instance' => 0,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profile_current_club][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Klub',
      'weight' => '18',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_height
  $fields['profile-field_profile_height'] = array(
    'field_name' => 'field_profile_height',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
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
      'nodeasblock teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'nodeasblock full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_decimal',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => ' cm',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'precision' => '10',
    'scale' => '0',
    'decimal' => ',',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profile_height][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Højde',
      'weight' => '20',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_profile_nation
  $fields['profile-field_profile_nation'] = array(
    'field_name' => 'field_profile_nation',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
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
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profile_nation][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Nationalitet',
      'weight' => '16',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_position
  $fields['profile-field_profile_position'] = array(
    'field_name' => 'field_profile_position',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
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
      'nodeasblock teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'nodeasblock full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Målmand
Forsvar
Midtbane
Angriber',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Position',
      'weight' => '17',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_profile_shirtname
  $fields['profile-field_profile_shirtname'] = array(
    'field_name' => 'field_profile_shirtname',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
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
      'nodeasblock teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'nodeasblock full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profile_shirtname][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Trøjenavn',
      'weight' => '13',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_teams
  $fields['profile-field_profile_teams'] = array(
    'field_name' => 'field_profile_teams',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
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
      'nodeasblock teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'nodeasblock full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '3',
          '_error_element' => 'default_value_widget][field_profile_teams][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Landshold',
      'weight' => '23',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_video
  $fields['profile-field_profile_video'] = array(
    'field_name' => 'field_profile_video',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
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
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '4',
          '_error_element' => 'default_value_widget][field_profile_video][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Video',
      'weight' => '3',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_weight
  $fields['profile-field_profile_weight'] = array(
    'field_name' => 'field_profile_weight',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
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
      'nodeasblock teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'nodeasblock full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_decimal',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => ' kg',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'precision' => '10',
    'scale' => '0',
    'decimal' => '.',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profile_weight][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Vægt',
      'weight' => '19',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_profilephoto
  $fields['profile-field_profilephoto'] = array(
    'field_name' => 'field_profilephoto',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
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
      'nodeasblock teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'nodeasblock full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'imceimage',
    'required' => '1',
    'multiple' => '0',
    'module' => 'imceimage',
    'active' => '1',
    'imceimage_file_types' => 'png,gif,jpg,jpeg',
    'widget' => array(
      'imceimage_file_types' => 'png,gif,jpg,jpeg',
      'default_value' => array(
        '0' => array(
          'imceimage_path' => '',
          'imceimage_width' => '',
          'imceimage_height' => '',
          'imceimage_alt' => '',
        ),
      ),
      'default_value_php' => NULL,
      'semantic_cck_use_semantic_instance' => 0,
      'label' => 'Profilbillede (Portræt)',
      'weight' => '-2',
      'description' => 'Profilfoto af spillerprofilen. Billedet vises øverst på profilsiderne.',
      'type' => 'imceimage',
      'module' => 'imceimage',
    ),
  );

  // Exported field: field_profilephoto_wide
  $fields['profile-field_profilephoto_wide'] = array(
    'field_name' => 'field_profilephoto_wide',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
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
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'imceimage',
    'required' => '1',
    'multiple' => '0',
    'module' => 'imceimage',
    'active' => '1',
    'imceimage_file_types' => 'png,jpg,jpeg',
    'widget' => array(
      'imceimage_file_types' => 'png,jpg,jpeg',
      'default_value' => array(
        '0' => array(
          'imceimage_path' => '',
          'imceimage_width' => '',
          'imceimage_height' => '',
          'imceimage_alt' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Profilbillede (bredformat)',
      'weight' => '-1',
      'description' => '',
      'type' => 'imceimage',
      'module' => 'imceimage',
    ),
  );

  // Exported field: field_profilepos_x
  $fields['profile-field_profilepos_x'] = array(
    'field_name' => 'field_profilepos_x',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
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
      'nodeasblock teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'nodeasblock full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => 'px',
    'min' => '0',
    'max' => '940',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profilepos_x][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Position: X',
      'weight' => '11',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_profilepos_y
  $fields['profile-field_profilepos_y'] = array(
    'field_name' => 'field_profilepos_y',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
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
      'nodeasblock teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'nodeasblock full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => 'px',
    'min' => '0',
    'max' => '608',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profilepos_y][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Position: Y',
      'weight' => '12',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_profilesecondary
  $fields['profile-field_profilesecondary'] = array(
    'field_name' => 'field_profilesecondary',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
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
      'nodeasblock teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'nodeasblock full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_profilesecondary][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Bag om profilen',
      'weight' => '2',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_profiletext
  $fields['profile-field_profiletext'] = array(
    'field_name' => 'field_profiletext',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
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
      'nodeasblock teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'nodeasblock full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '15',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '3',
          '_error_element' => 'default_value_widget][field_profiletext][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'semantic_cck_use_semantic_instance' => 0,
      'label' => 'Spillerprofil',
      'weight' => '1',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_promote
  $fields['profile-field_promote'] = array(
    'field_name' => 'field_promote',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
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
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '1|Ja
0|Nej',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 1,
        ),
      ),
      'default_value_php' => NULL,
      'semantic_cck_use_semantic_instance' => 0,
      'label' => 'Inkluder i slideshow',
      'weight' => '5',
      'description' => '',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Bag om profilen');
  t('Født');
  t('Højde');
  t('Inkluder i slideshow');
  t('Karriere');
  t('Klub');
  t('Landshold');
  t('Nationalitet');
  t('Position');
  t('Position: X');
  t('Position: Y');
  t('Profilbillede (Portræt)');
  t('Profilbillede (bredformat)');
  t('Spillerprofil');
  t('Trøjenavn');
  t('Video');
  t('Vægt');

  return $fields;
}
