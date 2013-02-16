<?php
/**
 * @file
 * standortsuche.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function standortsuche_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'standorte';
  $openlayers_maps->title = 'Standorte';
  $openlayers_maps->description = '';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '600px',
    'image_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '8.10791001867398, 46.56641346036694',
        'zoom' => '8',
      ),
      'restrict' => array(
        'restrictextent' => 1,
        'restrictedExtent' => '664574.079889,5757359.141333,1170892.946588,6075337.17356',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_attribution' => array(
        'seperator' => '',
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'standorte_openlayers_openlayers_1' => 'standorte_openlayers_openlayers_1',
        ),
        'panMapIfOutOfView' => 0,
        'keepInMap' => 1,
      ),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_normal' => 'google_normal',
      'standorte_openlayers_openlayers_1' => 'standorte_openlayers_openlayers_1',
    ),
    'layer_weight' => array(
      'standorte_openlayers_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
    ),
    'layer_styles' => array(
      'openlayers_geojson_picture_this' => '0',
      'standorte_openlayers_openlayers_1' => 'default_marker_black',
    ),
    'layer_styles_select' => array(
      'openlayers_geojson_picture_this' => '0',
      'standorte_openlayers_openlayers_1' => '0',
    ),
    'layer_activated' => array(
      'standorte_openlayers_openlayers_1' => 'standorte_openlayers_openlayers_1',
      'openlayers_geojson_picture_this' => 0,
    ),
    'layer_switcher' => array(
      'standorte_openlayers_openlayers_1' => 0,
      'openlayers_geojson_picture_this' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default_select',
      'temporary' => 'default',
    ),
  );
  $export['standorte'] = $openlayers_maps;

  return $export;
}
