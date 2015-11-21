<?php
/**
 * @file
 * lens_commerce_features.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function lens_commerce_features_default_rules_configuration() {
  $items = array();
  $items['entityform_notifications_ef_noti_email_anon_submitter'] = entity_import('rules_config', '{ "entityform_notifications_ef_noti_email_anon_submitter" : {
      "LABEL" : "Entityform Notification Email Anonymous Submitter",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_entityform_submission" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "entityform" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" },
        "email_subject" : { "label" : "Email Subject", "type" : "text" },
        "email_body" : { "label" : "Email Body", "type" : "text" },
        "show_submission" : { "label" : "Show Submission", "type" : "boolean" }
      },
      "IF" : [
        { "NOT user_has_role" : {
            "account" : [ "entity:user" ],
            "roles" : { "value" : { "2" : "2", "3" : "3", "4" : "4" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_email_address" } },
        { "NOT data_is_empty" : { "data" : [ "entity:field-email-address" ] } }
      ],
      "DO" : [
        { "component_rules_entityform_notifications_email_send" : {
            "USING" : {
              "entityform" : [ "entity" ],
              "email_address" : [ "entity:field-email-address" ],
              "show_submission" : [ "show-submission" ],
              "email_subject" : [ "email-subject" ],
              "email_body" : [ "email-body" ]
            },
            "PROVIDE" : { "continue" : { "continue" : "Continue Rules" } }
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  $items['rules_compute_savings_price'] = entity_import('rules_config', '{ "rules_compute_savings_price" : {
      "LABEL" : "Compute Savings Price",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_create" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "node" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_shop_price" } },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_product" } },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_savings_price" } },
        { "entity_has_field" : { "entity" : [ "entity:field-product" ], "field" : "commerce_price" } },
        { "NOT data_is_empty" : { "data" : [ "entity:field-shop-price" ] } },
        { "NOT data_is_empty" : { "data" : [ "entity:field-product:commerce-price" ] } }
      ],
      "DO" : [
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "entity:field-shop-price:amount" ],
              "op" : "-",
              "input_2" : [ "entity:field-product:commerce-price:amount" ]
            },
            "PROVIDE" : { "result" : { "calculate_savings" : "Calculate Savings" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity:field-savings-price:amount" ],
            "value" : [ "calculate-savings" ]
          }
        },
        { "entity_save" : { "data" : [ "entity" ], "immediate" : "1" } }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  $items['rules_compute_savings_price_on_update'] = entity_import('rules_config', '{ "rules_compute_savings_price_on_update" : {
      "LABEL" : "Compute Savings Price on Update",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_update" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "node" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_shop_price" } },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_product" } },
        { "entity_has_field" : { "entity" : [ "entity" ], "field" : "field_savings_price" } },
        { "entity_has_field" : { "entity" : [ "entity:field-product" ], "field" : "commerce_price" } },
        { "NOT data_is_empty" : { "data" : [ "entity:field-shop-price" ] } },
        { "NOT data_is_empty" : { "data" : [ "entity:field-product:commerce-price" ] } }
      ],
      "DO" : [
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "entity:field-shop-price:amount" ],
              "op" : "-",
              "input_2" : [ "entity:field-product:commerce-price:amount" ]
            },
            "PROVIDE" : { "result" : { "calculate_savings" : "Calculate Savings" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity:field-savings-price:amount" ],
            "value" : [ "calculate-savings" ]
          }
        },
        { "entity_save" : { "data" : [ "entity" ], "immediate" : "1" } }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  $items['rules_create_temporary_coupon_after_checkout'] = entity_import('rules_config', '{ "rules_create_temporary_coupon_after_checkout" : {
      "LABEL" : "Create temporary coupon after checkout",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional", "commerce_payment" ],
      "ON" : { "commerce_payment_order_paid_in_full" : [] },
      "IF" : [
        { "entity_has_field" : {
            "entity" : [ "commerce-order:owner" ],
            "field" : "field_earned_coupons"
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : { "type" : "commerce_coupon" },
            "PROVIDE" : { "entity_created" : { "coupon_created" : "Created coupon" } }
          }
        },
        { "data_set" : { "data" : [ "coupon-created:is-active" ], "value" : "0" } },
        { "data_set" : { "data" : [ "coupon-created:type" ], "value" : "commerce_coupon_fixed" } },
        { "CONDITIONAL" : [
            {
              "IF" : { "entity_has_field" : { "entity" : [ "coupon-created" ], "field" : "field_from_order" } },
              "DO" : [
                { "data_set" : {
                    "data" : [ "coupon-created:field-from-order" ],
                    "value" : [ "commerce-order" ]
                  }
                }
              ]
            }
          ]
        },
        { "entity_save" : { "data" : [ "coupon-created" ], "immediate" : "1" } },
        { "list_add" : {
            "list" : [ "commerce-order:owner:field-earned-coupons" ],
            "item" : [ "coupon-created" ],
            "unique" : "1"
          }
        }
      ]
    }
  }');
  $items['rules_notify_user_of_reward_coupon'] = entity_import('rules_config', '{ "rules_notify_user_of_reward_coupon" : {
      "LABEL" : "Notify user of reward coupon",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional", "mimemail", "entity" ],
      "ON" : { "commerce_order_update" : [] },
      "IF" : [
        { "data_is" : {
            "data" : [ "commerce-order:state" ],
            "op" : "IN",
            "value" : { "value" : { "completed" : "completed", "invoiced" : "invoiced" } }
          }
        }
      ],
      "DO" : [
        { "entity_query" : {
            "USING" : {
              "type" : "commerce_coupon",
              "property" : "field_from_order",
              "value" : [ "commerce-order" ],
              "limit" : "1"
            },
            "PROVIDE" : { "entity_fetched" : { "coupon_fetched" : "Fetched coupon" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "coupon-fetched" ] },
            "ITEM" : { "list_coupon" : "Current coupon" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : { "data" : [ "list-coupon:is-active" ], "value" : "1" } },
                    "DO" : [
                      { "mimemail" : {
                          "key" : "reward-coupon-[list-coupon:coupon-id]-[commerce-order:order-id]",
                          "to" : [ "commerce-order:owner:mail" ],
                          "subject" : "Reward coupon from [site:name]",
                          "body" : "\\u003Cp\\u003ECongratulations!\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EYou have received a reward coupon code worth \\u003Cstrong\\u003E[list-coupon:commerce_coupon_fixed_amount]\\u003C\\/strong\\u003E!\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EYour coupon code: \\u003Cspan style=\\u0022color:#4d8f46;font-size:3em\\u0022\\u003E[list-coupon:commerce_coupon_code]\\u003C\\/span\\u003E\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EYou can use it on your next purchase at \\u003Cstrong\\u003E[site:name]\\u003C\\/strong\\u003E.\\u003C\\/p\\u003E\\r\\n\\r\\nThanks!",
                          "plaintext" : "Congratulations!\\r\\n\\r\\nYou have received a reward coupon code worth [list-coupon:commerce-coupon-fixed-amount]!\\r\\n\\r\\nYour coupon code: [list-coupon:commerce_coupon_code]\\r\\n\\r\\nYou can use it on your next purchase at [site:name].\\r\\n\\r\\nThanks!",
                          "language" : [ "" ]
                        }
                      }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_send_an_order_notification_e_mail_to_client'] = entity_import('rules_config', '{ "rules_send_an_order_notification_e_mail_to_client" : {
      "LABEL" : "Send an order notification e-mail to client",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "mimemail", "entity" ],
      "ON" : { "commerce_order_update" : [] },
      "IF" : [
        { "data_is" : {
            "data" : [ "commerce-order:status" ],
            "op" : "IN",
            "value" : { "value" : { "processing" : "processing", "completed" : "completed" } }
          }
        }
      ],
      "DO" : [
        { "mimemail" : {
            "key" : [ "commerce-order:order-id" ],
            "to" : [ "commerce-order:mail" ],
            "subject" : "Order [commerce-order:order-number] at [site:name]",
            "body" : "Hi,\\r\\n\\r\\nYour order status: [commerce-order:status-title]\\r\\n\\r\\nYou can also view your order history with us at any time by logging into our website at:\\r\\n[site:login-url]\\r\\n\\r\\nYou can find the status of your current order at:\\r\\n\\r\\n[commerce-order:customer-url]\\r\\n\\r\\nPlease contact us if you have any questions about your order.",
            "plaintext" : "Hi,\\r\\n\\r\\nYour order status: [commerce-order:status-title]\\r\\n\\r\\nYou can also view your order history with us at any time by logging into our website at:\\r\\n[site:login-url]\\r\\n\\r\\nYou can find the status of your current order at:\\r\\n\\r\\n[commerce-order:customer-url]\\r\\n\\r\\nPlease contact us if you have any questions about your order.",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_send_an_order_notification_e_mail_to_store_manager'] = entity_import('rules_config', '{ "rules_send_an_order_notification_e_mail_to_store_manager" : {
      "LABEL" : "Send an order notification e-mail to store manager",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "mimemail", "entity" ],
      "ON" : { "commerce_order_update" : [] },
      "IF" : [
        { "data_is" : {
            "data" : [ "commerce-order:status" ],
            "op" : "IN",
            "value" : { "value" : { "checkout_complete" : "checkout_complete", "pending" : "pending" } }
          }
        }
      ],
      "DO" : [
        { "mimemail_to_users_of_role" : {
            "key" : [ "commerce-order:order-id" ],
            "roles" : { "value" : { "4" : "4" } },
            "active" : "1",
            "subject" : "Order [commerce-order:order-number] - [commerce-order:status-title]",
            "body" : "Order [commerce-order:order-number] is now in [commerce-order:status-title]\\r\\n\\r\\nUpdate the status in: [site:url]\\/admin\\/commerce\\/orders\\/list?date_filter%5Bmin%5D%5Bdate%5D=\\u0026date_filter%5Bmax%5D%5Bdate%5D=\\u0026combine=[commerce-order:order-id]",
            "plaintext" : "Order [commerce-order:order-number] is now in [commerce-order:status-title]\\r\\n\\r\\nUpdate the status in: [site:url]\\/admin\\/commerce\\/orders\\/list?date_filter%5Bmin%5D%5Bdate%5D=\\u0026date_filter%5Bmax%5D%5Bdate%5D=\\u0026combine=[commerce-order:order-id]",
            "language_user" : "1",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
