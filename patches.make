; Specify the version of Drupal being used.
core = 7.x
; Specify the api version of Drush Make.
api = 2

; Drupal core patches can be add like contrib patches:
projects[geolocation][patch][] = "https://www.drupal.org/files/issues/geolocation-geolocation_feeds_support-1294604-18.patch"
projects[geolocation][subdir] = contrib
