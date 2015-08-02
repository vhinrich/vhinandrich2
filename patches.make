; Specify the version of Drupal being used.
core = 7.x
; Specify the api version of Drush Make.
api = 2

; Drupal core patches can be add like contrib patches:
projects[geolocation][patch][] = "https://www.drupal.org/files/issues/geolocation-geolocation_feeds_support-1294604-18.patch"
projects[geolocation][subdir] = contrib

projects[features][patch][] = "https://www.drupal.org/files/issues/2511858-features-table-missing-13.patch"
projects[features][subdir] = contrib

projects[advagg][patch][] = "https://www.drupal.org/files/issues/advagg-2537002-2-fix-php52.patch"
projects[advagg][subdir] = contrib

projects[ckeditor][patch][] = "https://www.drupal.org/files/issues/Issue_2454933_0.patch"
projects[ckeditor][subdir] = contrib

projects[commerce_auto_product_display][patch][] = "https://www.drupal.org/files/issues/field_groups_fix-1992890-2_0.patch"
projects[commerce_auto_product_display][subdir] = contrib
