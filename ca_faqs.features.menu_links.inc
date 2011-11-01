<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function ca_faqs_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:faq
  $menu_links['primary-links:faq'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'faq',
    'router_path' => 'faq',
    'link_title' => 'FAQs',
    'options' => array(
      'attributes' => array(
        'title' => 'Frequently Asked Questions',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('FAQs');


  return $menu_links;
}
