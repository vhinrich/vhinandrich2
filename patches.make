; Specify the version of Drupal being used.
core = 7.x
; Specify the api version of Drush Make.
api = 2

; Drupal core patches can be add like contrib patches:
projects[geolocation][patch][] = "https://www.drupal.org/files/issues/geolocation-geolocation_feeds_support-1294604-18.patch"
projects[geolocation][subdir] = contrib

projects[ckeditor][patch][] = "https://www.drupal.org/files/issues/Issue_2454933_0.patch"
projects[ckeditor][subdir] = contrib

projects[commerce_auto_product_display][patch][] = "https://www.drupal.org/files/issues/field_groups_fix-1992890-2_0.patch"
projects[commerce_auto_product_display][subdir] = contrib

projects[drupagram][patch][] = "https://www.drupal.org/files/issues/drupagram_7_x_1_2.patch"
projects[drupagram][subdir] = contrib