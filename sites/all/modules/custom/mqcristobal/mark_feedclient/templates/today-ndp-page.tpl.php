<?php
	$module_path = drupal_get_path('module', 'today_ndp_hashtag');
	
	//drupal_add_js($module_path . '/js/jquery.imagesloaded.js');
	//print onix_facebook_display_markup();
	print $args['configs']['ndp_fb_markup'];
?>
<div class="masonry-header clearfix">
	<div class="video-header-container">
		<div class="video-header-inner">
			<!--<video id="video_background" preload="auto" autoplay="true" loop="true" muted="" volume="0" class="fillWidth"> 
			<source src="http://www1.todayonline.com/infographics/sgmoment/MERLIONTIMELAPSE.mp4" type="video/mp4">
			<source src="http://www1.todayonline.com/infographics/sgmoment/MERLIONTIMELAPSE.webm" type="video/webm">
			<source src="http://www1.todayonline.com/infographics/sgmoment/MERLIONTIMELAPSE.ogv" type="video/ogv">
			</video>-->
			<div id="video_img_background" style="background-color:#333" /></div>
		</div>
		
		<div class="header-container header-container-1">
			<div class="header-container-box">
				<div class="header-text clearfix">
					<div class="header-content-left">
						<h1><?php print $args['configs']['ndp_page_title']; ?></h1>
						<div class="header-text-content">
							<div class="header-social-links"><?php print _today_ndp_hashtag_social_links(url('sgmoment', array('absolute'=>true))); ?></div>
							<?php print $args['configs']['ndp_page_description']; ?>
						</div>
						<a href="#termsandconditions" class="fancybox" style="float: left;font-weight: bold;">CONTEST DETAILS &amp; TERMS AND CONDITIONS</a>
						<a href="#node-webform" class="btn btn-red fancybox submit-entry">SUBMIT YOUR ENTRY</a>
					</div>
					<?php if(isset($args['contents']['rendered_array'][0])): ?>
					<div class="featured-submission-container">
						<h2>LATEST ENTRY</h2>
						<div class="header-latest-feed masonry-container">
							<?php print $args['contents']['rendered_array'][0]; ?>
						</div>
					</div>
					<?php endif; ?>
				</div>
			</div>
		</div>
	</div>
</div>

<div class="node-tc-container" style="display: none">
	<div id="termsandconditions" style="max-width: 600px">
		<div class="tc_text"><?php print $args['configs']['ndp_terms_and_conditions']; ?></div>
	</div>
</div>

<div class="node-webform-container" style="display: none">
	<div id="node-webform">
	<?php
		$form_nid = $args['configs']['ndp_webform_nid'];
		$nodeContest = node_load($form_nid);
		print render(node_view($nodeContest, 'full', NULL));
	?>
	</div>
</div>

<div class="masonry-outer-container">
	<div id="container" class="masonry-container">
		<div class="grid-sizer"></div>
		<?php print $args['contents']['rendered']; ?>
	</div>
</div>

<div class="masonry-footer">
	<div class="masonry-footer-scroll-to-top">
		<div>
			<a href="#main-content">Scroll to top</a>
		</div>
	</div>
	<div class="ajax-loader">
		&nbsp;
	</div>
</div>
<script type="text/javascript" src="//assets.pinterest.com/js/pinit.js"></script><script type="text/javascript" src="//platform.twitter.com/widgets.js"></script><script type="text/javascript" src="http://platform.tumblr.com/v1/share.js"></script>