<?php
/**
 * @file
 * frontpage_slider.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function frontpage_slider_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'frontpage_slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Frontpage_Slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Frontpage_Slider';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  /* Field: Content: slider_image */
  $handler->display->display_options['fields']['field_slider_image']['id'] = 'field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['table'] = 'field_data_field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['field'] = 'field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['label'] = '';
  $handler->display->display_options['fields']['field_slider_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slider_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_slider_image']['settings'] = array(
    'relationship' => 'none',
    'ui_name' => '',
    'custom_label' => 0,
    'label' => 'slider_image',
    'element_label_colon' => 1,
    'exclude' => 0,
    'element_type_enable' => 0,
    'element_type' => '',
    'element_class_enable' => 0,
    'element_class' => '',
    'element_label_type_enable' => 0,
    'element_label_type' => '',
    'element_label_class_enable' => 0,
    'element_label_class' => '',
    'element_wrapper_type_enable' => 0,
    'element_wrapper_type' => '',
    'element_wrapper_class_enable' => 0,
    'element_wrapper_class' => '',
    'element_default_classes' => 1,
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'absolute' => 0,
      'replace_spaces' => 0,
      'external' => 0,
      'path_case' => 'none',
      'link_class' => '',
      'alt' => '',
      'rel' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'more_link' => 0,
      'more_link_text' => '',
      'more_link_path' => '',
      'html' => 0,
      'strip_tags' => 0,
      'preserve_tags' => '',
      'trim_whitespace' => 0,
      'nl2br' => 0,
    ),
    'empty' => '',
    'empty_zero' => 0,
    'hide_empty' => 0,
    'hide_alter_empty' => 1,
    'click_sort_column' => 'fid',
    'type' => 'cs_adaptive_image',
    'field_api_classes' => 0,
    'image_link' => '',
    'styles' => array(
      'breakpoint_1' => '',
      'style_1' => '',
      'breakpoint_2' => '',
      'style_2' => '',
      'breakpoint_3' => '',
      'style_3' => '',
      'breakpoint_4' => '',
      'style_4' => '',
      'breakpoint_5' => '',
      'style_5' => '',
      'max_style' => '',
      'fallback_style' => '',
    ),
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'slider-caption';
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
    'frontpage_slider' => 'frontpage_slider',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['frontpage_slider'] = array(
    t('Master'),
    t('Frontpage_Slider'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['frontpage_slider'] = $view;

  return $export;
}
