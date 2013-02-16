<?php
/**
 * @file
 * onepage_fonts.features.inc
 */

/**
 * Implements hook_fontyourface_features_default_font().
 */
function onepage_fonts_fontyourface_features_default_font() {
  return array(
    'Open Sans 300 (latin)' => array(
      'name' => 'Open Sans 300 (latin)',
      'enabled' => '1',
      'url' => 'http://www.google.com/webfonts/family?family=Open Sans&subset=latin#300',
      'provider' => 'google_fonts_api',
      'css_selector' => 'body',
      'css_family' => 'Open Sans',
      'css_style' => 'normal',
      'css_weight' => '300',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:13:"Open Sans:300";s:6:"subset";s:5:"latin";}',
    ),
    'Open Sans 800 (latin)' => array(
      'name' => 'Open Sans 800 (latin)',
      'enabled' => '1',
      'url' => 'http://www.google.com/webfonts/family?family=Open Sans&subset=latin#800',
      'provider' => 'google_fonts_api',
      'css_selector' => 'h1, h2, h3, h4, h5, h6',
      'css_family' => 'Open Sans',
      'css_style' => 'normal',
      'css_weight' => '800',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:13:"Open Sans:800";s:6:"subset";s:5:"latin";}',
    ),
  );
}
