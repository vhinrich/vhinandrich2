<?php //dpm($args['contents']); ?>
<?php foreach($args['contents'] as $key => $item): ?>
	<?php print theme('today_ndp_voicesfeed_reader_item', array('args' => array('item' => $item, 'key' => $key))); ?>
<?php endforeach; ?>