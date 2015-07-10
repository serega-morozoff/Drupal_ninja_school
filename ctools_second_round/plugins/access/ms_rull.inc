<?php

/**
 * @file
 * Easy access Plugin to check is admin or not
 */

$plugin = array(
  'title' => t("Is admin"),
  'description' => t('Control how much are you focking dude.'),
  'callback' => 'ctools_second_round_ms_rull_ctools_access_check',
);

/**
 * Check for user uid
 */
function ctools_second_round_ms_rull_ctools_access_check($conf, $context) {
  global $user;
  if ($user->uid == 1) {
    return TRUE;
  }else {
    return FALSE;
  }
}

