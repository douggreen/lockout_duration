<?php
/**
 * @file
 * Admin form for the Lockout Duration module.
 */

/**
 * Form builder: Lockout Duration settings form.
 */
function lockout_duration_settings_form($form, &$form_state) {
  $form['#config'] = 'lockout_duration.settings';
  $form['duration'] = array(
    '#type' => 'number',
    '#title' => t('Lockout duration (seconds)'),
    '#default_value' => config_get('lockout_duration.settings', 'duration') ?? 900,
    '#min' => 60,
    '#step' => 1,
    '#required' => TRUE,
    '#description' => t('How long an account stays locked after core flood control trips. Default is 900 seconds (15 minutes). Core defaults to a 6-hour rolling throttle; a shorter window lets legitimate users retry sooner without waiting out the full throttle.'),
  );
  return system_settings_form($form);
}
