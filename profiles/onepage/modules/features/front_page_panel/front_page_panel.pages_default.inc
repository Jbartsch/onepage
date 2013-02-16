<?php
/**
 * @file
 * front_page_panel.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function front_page_panel_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front page';
  $page->admin_description = 'A front page panel for the display of a Slider, Videos, Maps';
  $page->path = 'front';
  $page->access = array(
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Home',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Menu',
      'title' => '',
      'body' => '<ul class="inline">
	<li>
		<a href="#lorem">goto lorem</a></li>
	<li>
		<a href="#lorem-2">goto lorem 2</a></li>
</ul>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-frontpage_slider-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'slider',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['middle'][1] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Intro below slideshow',
      'title' => 'Modernes Design zum unschlagbaren Preis.',
      'body' => '<p>Bei Pro Casa k&ouml;nnen Sie aus drei optimalen Badezimmer-L&ouml;sungen w&auml;hlen:<br />
	ProCasa Uno, Tre und Cinque.</p>
<p><a href="#beratungstermin">Beratungstermin</a>&nbsp;<a href="#standortsuche">Zur Standortsuche</a></p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'intro',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['middle'][2] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Komplettbäder',
      'title' => 'Komplettbäder',
      'body' => '<p class="desktop">ProCasa Komplettb&auml;der &ndash; Modernes Design zum unschlagbaren Preis.</p>
<p class="mobile">Modernes Design zum unschlagbaren Preis.</p>
<p class="mobile button button-first"><a href="#beratungstermin">Beratungstermin</a></p>
<p class="mobile button button-last"><a href="#standortsuche">Zur Standortsuche</a></p>
<div class="komplettbaeder-col" id="procasa-uno">
	<img src="/sites/default/files/procasa-uno.png" />
	<p>Das bequeme Komplettbad<br />
		zum besten Preis.</p>
</div>
<div class="komplettbaeder-col" id="procasa-tre">
	<img src="/sites/default/files/procasa-tre.png" />
	<p>Das klassische Komplettbad<br />
		f&uuml;r die ganze Famlie.</p>
</div>
<div class="komplettbaeder-col" id="procasa-cinque">
	<img src="/sites/default/files/procasa-cinque.png" />
	<p>Das trendige Komplettbad<br />
		aus besten Materialien.</p>
</div>
<div class="clear">
	&nbsp;</div>
<div class="komplettbaeder-text" id="procasa-uno-text">
	<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nunc dolor libero, iaculis a rhoncus eget, semper at erat. Sed id leo nunc, in suscipit nisl. Aliquam eleifend cursus tincidunt. Fusce vitae fringilla elit. Vestibulum dignissim mattis mauris eu adipiscing. Donec cursus posuere augue, dapibus semper est iaculis in. Aliquam erat volutpat.</p>
	<p>Morbi tincidunt volutpat feugiat. In aliquam mollis dui, in hendrerit arcu rutrum quis. In commodo orci vitae orci dignissim id euismod ante aliquam. Duis ac pellentesque tortor. Aliquam blandit enim vel nibh accumsan ornare. Aliquam sed ipsum est. Phasellus eget dolor massa.</p>
</div>
<div class="komplettbaeder-text" id="procasa-tre-text">
	<p>Morbi tincidunt volutpat feugiat. In aliquam mollis dui, in hendrerit arcu rutrum quis. In commodo orci vitae orci dignissim id euismod ante aliquam. Duis ac pellentesque tortor. Aliquam blandit enim vel nibh accumsan ornare. Aliquam sed ipsum est. Phasellus eget dolor massa.</p>
	<p>Proin interdum massa nec mi aliquam nec convallis dui sollicitudin. Donec aliquet orci quis nulla commodo et tempus ipsum iaculis. Nullam dolor nibh, blandit vel varius non, bibendum in lorem. Vivamus congue blandit orci vitae auctor. Donec eget odio quis diam laoreet varius. Phasellus mattis risus et eros pretium tincidunt. Donec consequat mattis nisi, eu tincidunt turpis vulputate nec. Curabitur quis pellentesque leo. Aliquam imperdiet, tortor semper posuere adipiscing, massa sem egestas diam, a egestas quam lorem gravida augue. Proin pellentesque faucibus egestas.</p>
</div>
<div class="komplettbaeder-text" id="procasa-cinque-text">
	<p>Phasellus sed nisi est, vitae mollis tellus. Morbi hendrerit eros ac lacus bibendum rhoncus. Nullam ut eleifend diam. Nullam mollis ligula quis justo blandit cursus. Cras quis pellentesque mauris. In hac habitasse platea dictumst. Mauris euismod feugiat leo nec vehicula. Aliquam porta magna quis nisl dapibus lacinia. Cras tristique imperdiet vestibulum. Donec tortor orci, semper sit amet mattis ac, pretium sit amet dui. Donec risus neque, feugiat vitae pellentesque fringilla, blandit eget ipsum. Pellentesque at ante risus, ut interdum nulla. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Morbi a nunc vel dolor malesuada feugiat et id justo. Aenean scelerisque mauris eget lectus venenatis condimentum. Pellentesque id leo mi.</p>
</div>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'komplettbaeder',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['middle'][3] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-video_slider-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Virtual Tour',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'virtual-tour',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['middle'][4] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Standortsuche',
      'title' => 'Standortsuche',
      'body' => '<p><img alt="" src="/sites/default/files/map.png" /></p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'standortsuche',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['middle'][5] = 'new-6';
    $pane = new stdClass();
    $pane->pid = 'new-7';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-standorte_openlayers-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Standortsuche',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'standortsuche',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $display->content['new-7'] = $pane;
    $display->panels['middle'][6] = 'new-7';
    $pane = new stdClass();
    $pane->pid = 'new-8';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'webform-client-block-8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'beratungstermin',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $display->content['new-8'] = $pane;
    $display->panels['middle'][7] = 'new-8';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
