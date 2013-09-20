<?php
$dates = $args['dates'];
$days = array();
foreach($dates as $key => $date){
	$tmpDay = $key;
	$days[$tmpDay][] = $date;
}
$first = reset($days);
$first = reset($first);
$first = reset($first);
?>
<div id="mmcb-calendar-full-menu-month-container-<?php print $args['month_id']; ?>" class="mmcb-calendar-full-menu-month-container" data-month-id="<?php print $args['month_id']; ?>">
	<div class="month-label">
		<a href="<?php print $first['url']; ?>" class="month-label-link"><?php print date('F', strtotime('2013-' . $args['month_id'] . '-01')); ?></a>
	</div>
	<div class="month-days">
		<?php foreach($days as $key => $day): ?>
			<?php print theme('mmcb_main_full_js_calendar_menu_main_day', array('args' => array(
				'month_id' => $args['month_id'],
				'day_id' => $key,
				'date_timestamp' => $args['date_timestamp'],
				'time_timestamp' => $args['time_timestamp'],
				'dates' => $day,
			)));
			?>
		<?php endforeach; ?>
	</div>
</div>