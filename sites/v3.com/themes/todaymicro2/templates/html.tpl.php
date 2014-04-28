<?php
/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or
 *   'rtl'.
 * - $rdf_namespaces: All the RDF namespace prefixes used in the HTML document.
 * - $grddl_profile: A GRDDL profile allowing agents to extract the RDF data.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   tag.
 * - $head_title_array: (array) An associative array containing the string parts
 *   that were used to generate the $head_title variable, already prepared to be
 *   output as TITLE tag. The key/value pairs may contain one or more of the
 *   following, depending on conditions:
 *   - title: The title of the current page, if any.
 *   - name: The name of the site.
 *   - slogan: The slogan of the site, if any, and if there is no title.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 *
 * @see bootstrap_preprocess_html()
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see template_process()
 *
 * @ingroup themeable
 */
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN"
  "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
  <!--[if lt IE 9]>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces;?> class="ie-lt-9">
  <![endif]-->
<!--[if (gt IE 8)|!(IE)]><!--> <html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces;?>> <!--<![endif]-->
<head profile="<?php print $grddl_profile; ?>">
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <!-- HTML5 element support for IE6-8 -->
  <!--[if lt IE 9]>
    <script src="//html5shiv.googlecode.com/svn/trunk/html5.js"></script>
  <![endif]-->
  <!-- HTML5 Shim and Respond.js IE8 support of HTML5 elements and media queries -->
  <!-- WARNING: Respond.js doesn't work if you view the page via file:// -->
  <!--[if lt IE 9]>
    <script src="https://oss.maxcdn.com/libs/respond.js/1.4.2/respond.min.js"></script>
  <![endif]-->
  <link href="//netdna.bootstrapcdn.com/font-awesome/4.0.3/css/font-awesome.css" rel="stylesheet">
  <link href='http://fonts.googleapis.com/css?family=Roboto:400,100,100italic,300,300italic,400italic,500,500italic,700,700italic,900,900italic' rel='stylesheet' type='text/css'>
  <?php print $scripts; ?>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
<!-- Begin comScore Tag -->
    <script>
        var _comscore = _comscore || [];
        _comscore.push(
            {
                c1: "2",
                c2: "6154803"
            }
        );
        (
            function() {
                var s = document.createElement("script"), el = document.getElementsByTagName("script")[0]; s.async = true;
                s.src = (document.location.protocol == "https:" ? "https://sb" : "http://b") + ".scorecardresearch.com/beacon.js";
                el.parentNode.insertBefore(s, el);
            }
        )();
    </script>
    <noscript>
        <img src="http://b.scorecardresearch.com/p?c1=2&c2=6154803&cv=2.0&cj=1" />
    </noscript>
 <!--  End comScore Tag -->
 <!--  omniture -->
  <?php if (isset($omniture['omniture_web_hier1']) && isset($omniture['omniture_web_pageName'])):?>
      <script type="text/javascript">
                var OmniObj = {
                    "server": server,
                    "ch": channel,
                    "p1": Prop1,
                    "p2": Prop2,
                    "p3": Prop1 + ":" + Prop2 + ":" + "online",
                    "p4": "",
                    "p5": "",
                    "p6": "",
                    "p7": "",
                    "p8": "",
                    "eve": "",
                    "hier": Prop1 + "|" + Prop2 + "<?php print $omniture['omniture_web_hier1'];?>",
                    "pg": Prop1 + ":" + Prop2 + "<?php print $omniture['omniture_web_pageName'];?>"
                    };
                pagetracking(OmniObj);
            </script>
      <script type="text/javascript">
        <!--if (navigator.appVersion.indexOf("MSIE") >= 0) { try { document.write(unescape("%3C") + "\!-" + "-"); } catch (ex) { } }//-->
      </script>
      <noscript>
        <!-- For DEV -->
        <img src="http://mediacorp.112.2o7.net/b/ss/mediacorp-mcs-dev/1/H.16--NS/0" height="1" width="1" border="0" alt="" />
        <!-- For PROD -->
        <!--<img src="http://mediacorp.112.2o7.net/b/ss/mediacorp-mcs-prd/1/H.16--NS/0" height="1" width="1" border="0" alt="" />-->
      </noscript>
<?php endif;?>
<!-- end omniture -->
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
