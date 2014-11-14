<?php

function islandora_gsearch_index_configuration($form, &$form_state) {
  $form['islandora_gsearch_index_fedoragsearch_uri'] = array(
    '#type' => 'textfield',
    '#title' => t('FedoraGSearch URI'),
    '#description' => t('Sometimes, fedoragsearch does not index automatically. Enter the url to hit fedoragsearch?'),
    '#default_value' => variable_get('islandora_gsearch_index_fedoragsearch_uri', ''),
  );
  return system_settings_form($form);
}
