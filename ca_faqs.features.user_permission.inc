<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ca_faqs_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer faq
  $permissions['administer faq'] = array(
    'name' => 'administer faq',
    'roles' => array(
      '0' => 'faqs administrator',
    ),
  );

  // Exported permission: administer faq order
  $permissions['administer faq order'] = array(
    'name' => 'administer faq order',
    'roles' => array(
      '0' => 'faqs administrator',
    ),
  );

  // Exported permission: create faq
  $permissions['create faq'] = array(
    'name' => 'create faq',
    'roles' => array(
      '0' => 'faqs administrator',
    ),
  );

  // Exported permission: delete faq content
  $permissions['delete faq content'] = array(
    'name' => 'delete faq content',
    'roles' => array(
      '0' => 'faqs administrator',
    ),
  );

  // Exported permission: delete own faq content
  $permissions['delete own faq content'] = array(
    'name' => 'delete own faq content',
    'roles' => array(
      '0' => 'faqs administrator',
    ),
  );

  // Exported permission: edit faq
  $permissions['edit faq'] = array(
    'name' => 'edit faq',
    'roles' => array(
      '0' => 'faqs administrator',
    ),
  );

  // Exported permission: edit own faq
  $permissions['edit own faq'] = array(
    'name' => 'edit own faq',
    'roles' => array(
      '0' => 'faqs administrator',
    ),
  );

  // Exported permission: view faq page
  $permissions['view faq page'] = array(
    'name' => 'view faq page',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
