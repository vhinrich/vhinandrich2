<?php
$dates = $args['dates'];
$first = reset($dates);
$first = reset($first);
?>
<div id="mmcb-calendar-full-menu-day-container-<?php print $args['day_id']; ?>" class="mmcb-calendar-full-menu-day-container" data-day-id="<?php print $args['day_id']; ?>">
	<div class="day-label">
		<a href="<?php print $first['url']; ?>" class="day-label-link"><?php print date('j', strtotime('2013-' . $args['month_id'] . '-' . $args['day_id'])); ?></a>
	</div>
	<div class="day-times">
		<?php foreach($dates[0] as $key => $date): ?>
			<?php
				$time = $date['data']['field_time_value'] - (60*60*7.5);
				$title = $date['data']['field_timeline_title_value'];
			?>
			<div class="mmcb-calendar-full-menu-time-container">
				<a href="<?php print $date['url']; ?>" class="time-link">
					<div class="time-time"><?php print date('g:iA', $time); ?></div>
					<div class="time-title"><?php print $title; ?></div>
				</a>
			</div>
		<?php endforeach; ?>
	</div>
</div>