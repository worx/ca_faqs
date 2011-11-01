<?php

/**
 * Implementation of hook_user_default_roles().
 */
function ca_faqs_user_default_roles() {
  $roles = array();

  // Exported role: faqs administrator
  $roles['faqs administrator'] = array(
    'name' => 'faqs administrator',
  );

  return $roles;
}
