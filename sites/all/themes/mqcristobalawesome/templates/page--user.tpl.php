<?php
/*
<header id="navbar" role="banner" class="navbar">
  <div class="navbar-inner">
    <div class="container">
      <!-- .btn-navbar is used as the toggle for collapsed navbar content -->
      <a class="btn btn-navbar" data-toggle="collapse" data-target=".nav-collapse">
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </a>

      <?php if (!empty($logo)): ?>
        <a class="logo pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
          <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
        </a>
      <?php endif; ?>

      <?php if (!empty($site_name)): ?>
        <h1 id="site-name">
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="brand"><?php print $site_name; ?></a>
        </h1>
      <?php endif; ?>

      <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
        <div class="nav-collapse collapse">
          <nav role="navigation">
            <?php if (!empty($primary_nav)): ?>
              <?php print render($primary_nav); ?>
            <?php endif; ?>
            <?php if (!empty($secondary_nav)): ?>
              <?php print render($secondary_nav); ?>
            <?php endif; ?>
            <?php if (!empty($page['navigation'])): ?>
              <?php print render($page['navigation']); ?>
            <?php endif; ?>
          </nav>
        </div>
      <?php endif; ?>
    </div>
  </div>
</header>
*/
?>
<header id="navbar" role="banner" class="<?php print $navbar_classes; ?>">
  <div class="navbar-inner-mqcristobal">
    <div class="container">
      <div class="header-website-logo">
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><img src="<?php print url(drupal_get_path('theme', 'mqcristobalawesome'), array('absolute'=>true)); ?>/images/logo.png" /></a>
      </div>
      <h1 id="site-name">
        <?php if ($logo): ?>
        <a class="logo navbar-btn pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
          <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
        </a>
        <?php endif; ?>
        <?php if (!empty($site_name)): ?>
        <a class="name navbar-brand" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a>
        <?php endif; ?>
      </h1>
      <!--<div class="header-main-social-icons">
        <div class="fb icon"><div class="fb-like" data-href="<?php print $GLOBALS['base_url']; ?>" data-send="false" data-layout="button_count" data-width="100" data-show-faces="false"></div></div>
      <div class="twitter icon"><a href="https://twitter.com/share"
                class="twitter-share-button"
                data-size="small"
                data-count="horizontal"
                data-lang="en">Tweet</a>
                </div>
      </div>-->
      <div id="header-inside-right">
        <?php print render($page['header_inside_right']); ?>
      </div>
    </div>
  </div>
  
  <?php if (!empty($page['navigation'])): ?>
    <?php print render($page['navigation']); ?>
  <?php endif; ?>
</header>

<div class="main-container container">

  <header role="banner" id="page-header">
    <?php if (!empty($site_slogan)): ?>
      <p class="lead"><?php print $site_slogan; ?></p>
    <?php endif; ?>

    <?php print render($page['header']); ?>
  </header> <!-- /#header -->

  <div class="row-fluid">

    <?php if (!empty($page['sidebar_first'])): ?>
      <aside class="span3" role="complementary">
        <?php print render($page['sidebar_first']); ?>
      </aside>  <!-- /#sidebar-first -->
    <?php endif; ?>  

    <section<?php print $content_column_class; ?>>
      <?php if (!empty($page['highlighted'])): ?>
        <div class="highlighted hero-unit"><?php print render($page['highlighted']); ?></div>
      <?php endif; ?>
      <!--<?php if (!empty($breadcrumb)): print $breadcrumb; endif;?>-->
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if (!empty($title)): ?>
        <h1 class="page-header"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php if (!empty($tabs)): ?>
        <?php print render($tabs); ?>
      <?php endif; ?>
      <?php if (!empty($page['help'])): ?>
        <div class="well"><?php print render($page['help']); ?></div>
      <?php endif; ?>
      <?php if (!empty($action_links)): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
      <?php if(arg(0)=='user' && arg(1) && !arg(2)): ?>
      <div class="user-page-content-container">
        <?php
            global $user;
        ?>
        <h1 class="greeting">Hi, <span class="username"><?php print $user->name; ?></span></h1>
        <p>Today is <span class="highlight"><?php print date('d M Y h:i:s A', time()); ?></span></p>
      </div>
      <?php endif; ?>
    </section>

    <?php if (!empty($page['sidebar_second'])): ?>
      <aside class="span3" role="complementary">
        <?php print render($page['sidebar_second']); ?>
      </aside>  <!-- /#sidebar-second -->
    <?php endif; ?>

  </div>
</div>
<footer class="footer container">
  <?php print render($page['footer']); ?>
</footer>
