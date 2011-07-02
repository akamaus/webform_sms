<?php
/**
 * @file
 * webform_sms.rules_defaults.inc
 */

/**
 * Implementation of hook_default_rules_configuration().
 */
function webform_sms_default_rules_configuration() {
  $items = array();
  $items['rules_send_sms_about_webform'] = entity_import('rules_config', '{ "rules_send_sms_about_webform" : {
      "LABEL" : "\\u041f\\u043e\\u0441\\u043b\\u0430\\u0442\\u044c sms \\u043e \\u0432\\u0435\\u0431\\u0444\\u043e\\u0440\\u043c\\u0435",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "smspilot", "webform_rules" ],
      "ON" : [ "webform_rules_submit" ],
      "DO" : [
        { "sms" : { "message" : "\\u041f\\u043e\\u043b\\u044c\\u0437\\u043e\\u0432\\u0430\\u0442\\u0435\\u043b\\u044c \\u0437\\u0430\\u043f\\u043e\\u043b\\u043d\\u0438\\u043b \\u0444\\u043e\\u0440\\u043c\\u0443 \\u043a\\u043e\\u043d\\u0442\\u0430\\u043a\\u0442\\u0430 \\u043d\\u0430 \\u0441\\u0430\\u0439\\u0442\\u0435 [site:name]" } }
      ]
    }
  }');
  return $items;
}
