<?php
$month = date('M', $args['date_timestamp']);
$day = date('j', $args['date_timestamp']);
$time = date('g:i A', $args['time_timestamp']);
$dates = $args['dates'];
$months = array();
foreach($dates['dates'] as $key => $date){
	$tmpMonth = date('m', strtotime($key));
	$months[$tmpMonth][date('d', strtotime($key))] = $date;
}
?>
<div class="mmcb-calendar-full-menu-button-container clearfix">
	<?php foreach($months as $key => $month): ?>
		<?php print theme('mmcb_main_full_js_calendar_menu_main_month', array('args' => array(
			'month_id' => $key,
			'date_timestamp' => $args['date_timestamp'],
			'time_timestamp' => $args['time_timestamp'],
			'dates' => $month,
		)));
		?>
	<?php endforeach; ?>
</div>