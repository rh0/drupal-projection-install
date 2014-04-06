<?php

function simple_test_views_plugins() {
  return array(
    'module' => 'simple_test',
    'style' => array(
      'simple' => array(
        'title' => t('Simple Test'),
        'help' => t('Testing output of views style plugins.'),
        'handler' => 'simple_test_style_handler',
        'theme' => 'simple_test_simple',
        'uses row plugin' => TRUE,
        'uses row class' => TRUE,
        'uses grouping' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
      ),
    ),
  );
}
