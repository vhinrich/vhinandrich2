<?php
	$item = $args['item'];
	
	$module_path = drupal_get_path('module', 'today_ndp_hashtag');
	
	$mediaEmpty = true;
	
	$img = null;
	$video = null;
	$youtube_video = null;
	$embed = null;
	$id = null;
	$user_photo = null;
	switch($item->type){
		case 'instagram':
			if(isset($item['feed']['field_feed_sub_type'][LANGUAGE_NONE][0])){
				$subtype = $item['feed']['field_feed_sub_type'][LANGUAGE_NONE][0]['term']['name'];
				switch($subtype){
					case 'Photo':
						if(isset($item['feed']['field_media_file'][LANGUAGE_NONE][0])){
							$img = $item['feed']['field_media_file'][LANGUAGE_NONE][0]['file']['url'];
						}
						break;
					case 'Video':
						if(isset($item['feed']['field_media_file'][LANGUAGE_NONE][0])){
							$video = $item['feed']['field_media_file'][LANGUAGE_NONE][0]['file']['url'];
							$img = $module_path . '/css/images/default-no-image.png';
						}
						break;
					case 'Photo-URL':
						if(isset($item['feed']['field_image_source'][LANGUAGE_NONE][0])){
							$img = $item['feed']['field_image_source'][LANGUAGE_NONE][0]['value'];
						}
						break;
					case 'Video-URL':
						if(isset($item['feed']['field_media_url'][LANGUAGE_NONE][0])){
							$youtube_video = $item['feed']['field_media_url'][LANGUAGE_NONE][0]['value'];
							$youtube_video_id = _today_ndp_hashtag_get_youtube_id($youtube_video);
							$img = 'http://img.youtube.com/vi/' . $youtube_video_id . '/0.jpg';
							$youtube_video_url = '//www.youtube.com/embed/'.$youtube_video_id;
						}
						break;
				}
				$id = $item['feed']['field_feed_id'][LANGUAGE_NONE][0]['value'];
			}else{
				if(isset($item['feed']['images']['standard_resolution']['url'])){
					$img = $item['feed']['images']['standard_resolution']['url'];
				}
				if(isset($item['feed']['videos']['standard_resolution']['url'])){
					$video = $item['feed']['videos']['standard_resolution']['url'];
				}
				if(isset($item['feed']['user']['profile_picture'])){
					$user_photo = $item['feed']['user']['profile_picture'];
				}
				$shareUrl = $item['feed']['link'];
				$id = $item['feed']['id'];
			}
			break;
		case 'tweet':
				if(isset($item->entities->media[0])){
					if($item->entities->media[0]->type=='photo'){
						$img = $item->entities->media[0]->media_url;
					}
				}
				if(isset($item->userphoto)){
					$user_photo = $item->userphoto;
				}
				$shareUrl = 'https://twitter.com/' . $item->screenname . '/status/' . $item->id;
				$id = $item->id;
			break;
		case 'facebook':
			if(isset($item['feed']['field_feed_sub_type'][LANGUAGE_NONE][0])){
				$subtype = $item['feed']['field_feed_sub_type'][LANGUAGE_NONE][0]['term']['name'];
				switch($subtype){
					case 'Photo':
						if(isset($item['feed']['field_media_file'][LANGUAGE_NONE][0])){
							$img = $item['feed']['field_media_file'][LANGUAGE_NONE][0]['file']['url'];
						}
						break;
					case 'Video':
						if(isset($item['feed']['field_media_file'][LANGUAGE_NONE][0])){
							$video = $item['feed']['field_media_file'][LANGUAGE_NONE][0]['file']['url'];
							$img = $module_path . '/css/images/default-no-image.png';
						}
						break;
					case 'Photo-URL':
						if(isset($item['feed']['field_image_source'][LANGUAGE_NONE][0])){
							$img = $item['feed']['field_image_source'][LANGUAGE_NONE][0]['value'];
						}
						break;
					case 'Video-URL':
						if(isset($item['feed']['field_media_url'][LANGUAGE_NONE][0])){
							$youtube_video = $item['feed']['field_media_url'][LANGUAGE_NONE][0]['value'];
							$youtube_video_id = _today_ndp_hashtag_get_youtube_id($youtube_video);
							$img = 'http://img.youtube.com/vi/' . $youtube_video_id . '/0.jpg';
							$youtube_video_url = '//www.youtube.com/embed/'.$youtube_video_id;
						}
						break;
				}
				$id = $item['feed']['field_feed_id'][LANGUAGE_NONE][0]['value'];
			}else{
				if(isset($item['feed']['type'])){
					if($item['feed']['type'] == 'photo'){
						$img = $item['feed']['picture'];
						if(substr($img,-6) == '_t.jpg' || substr($img,-6) == '_s.jpg'){
							$img = substr($img,0,-5) . 'n.jpg';
						}else{
							//$img = 'https://graph.facebook.com/'.$item['feed']['object_id'].'/picture?type=normal';
						}
					}
					if($item['feed']['type'] == 'video'){
						$youtube_video_id = strpos($item['feed']['source'],'youtube');
						$img = $item['feed']['picture'];
						$youtube_video = $item['feed']['source'];
						if($youtube_video_id){
							$youtube_video = $item['feed']['source'];
							$youtube_video_url = strtok($youtube_video,'?');
						}else{
							$embed_supported_files = array('.mp4', '.avi', '.mpg');
							foreach($embed_supported_files as $filetypes){
								$supported = strpos($item['feed']['source'], $filetypes);
								if($supported)
									break;
							}
							if($supported){
								//$img = $item['feed']['picture'];
								$video = $item['feed']['source'];
							}else{
								$embed = $item['feed']['source'];
							}
						}
					}
				}
				if(isset($item['feed']['from']['id'])){
					$user_photo = 'https://graph.facebook.com/'.$item['feed']['from']['id'].'/picture?type=square';
				}
				$id = $item['feed']['id'];
			}
			break;
		case 'youtube':
			if(isset($item['feed']['field_media_url'][LANGUAGE_NONE][0])){
				$youtube_video = $item['feed']['field_media_url'][LANGUAGE_NONE][0]['value'];
				$youtube_video_id = _today_ndp_hashtag_get_youtube_id($youtube_video);
				$img = 'http://img.youtube.com/vi/' . $youtube_video_id . '/0.jpg';
				$youtube_video_url = '//www.youtube.com/embed/'.$youtube_video_id;
			}
			$id = $item['feed']['field_feed_id'][LANGUAGE_NONE][0]['value'];
			break;
		case 'custom':
			if(isset($item['feed']['field_feed_sub_type'][LANGUAGE_NONE][0])){
				$subtype = $item['feed']['field_feed_sub_type'][LANGUAGE_NONE][0]['term']['name'];
				switch($subtype){
					case 'Photo':
						if(isset($item['feed']['field_media_file'][LANGUAGE_NONE][0])){
							$img = $item['feed']['field_media_file'][LANGUAGE_NONE][0]['file']['url'];
						}
						break;
					case 'Video':
						if(isset($item['feed']['field_media_file'][LANGUAGE_NONE][0])){
							$video = $item['feed']['field_media_file'][LANGUAGE_NONE][0]['file']['url'];
							$img = $module_path . '/css/images/default-no-image.png';
						}
						break;
					case 'Photo-URL':
						if(isset($item['feed']['field_image_source'][LANGUAGE_NONE][0])){
							$img = $item['feed']['field_image_source'][LANGUAGE_NONE][0]['value'];
						}
						break;
					case 'Video-URL':
						if(isset($item['feed']['field_media_url'][LANGUAGE_NONE][0])){
							$youtube_video = $item['feed']['field_media_url'][LANGUAGE_NONE][0]['value'];
							$youtube_video_id = _today_ndp_hashtag_get_youtube_id($youtube_video);
							$img = 'http://img.youtube.com/vi/' . $youtube_video_id . '/0.jpg';
							$youtube_video_url = '//www.youtube.com/embed/'.$youtube_video_id;
						}
						break;
				}
			}
			$id = $item['feed']['field_feed_id'][LANGUAGE_NONE][0]['value'];
			break;
	}
	
	$imgHref = "";
	$imgHref = '#fancybox-media-' . $id;
	
	if($img || $video || $youtube_video)
		$mediaEmpty = false;
	
	$convertedBody = $item->text;
	$convertedBody = preg_replace("#http://([\S]+?)#Uis", '<a rel="nofollow" href="http://\\1" target="_blank">\\1</a>', $item->text);
	$convertedBody = preg_replace("#https://([\S]+?)#Uis", '<a rel="nofollow" href="https://\\1" target="_blank">\\1</a>', $convertedBody);
	$convertedBody = nl2br($convertedBody);
?>
<div class="item <?php print $item->type; ?> <?php if($mediaEmpty){ print 'no-media'; } ?>">
	<div class="item-inner">
		<div class="item-content-container">
			<div class="item-social-icon">&nbsp;</div>
			<div class="item-user-container clearfix">
				<?php if($user_photo): ?>
					<div class="item-user-photo"><a target="_blank" href="https://twitter.com/tdysports"><img src="<?php print $user_photo; ?>" /></a></div>
				<?php endif; ?>
				<div class="item-username"><?php print $item->username; ?></div>
			</div>
			<div class="item-content-body">
				<?php print $convertedBody; ?>
				<?php if($img): ?>
					<div id="tweet-image-thumbnail-<?php print $id; ?>" class="item-image">
						<a class="fancybox" href="#tweet-image-<?php print $id; ?>"><img src="<?php print $img; ?>" /></a>
					</div>
				<?php endif; ?>	
				<span class="item-datetime"><?php print date('g:i A', $item->timestamp); ?></span>
			</div>
		</div>
	</div>
	<div class="fancybox-hidden-wrapper" style="display:none">
		<div id="tweet-image-<?php print $id; ?>" class="tweet-image-full">
			<img src="<?php print $img; ?>" />
		</div>
	</div>
</div>