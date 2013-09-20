<?php
$month = date('M', $args['date_timestamp']);
$day = date('j', $args['date_timestamp']);
$time = date('g:i A', $args['time_timestamp']);
?>
<div class="mmcb-calendar-menu-button-container">
	<input class="datepicker" type="text" />
	<div class="datepicker-container"></div>
	<a href="#" class="mmcb-calendar-menu-button">
		<div class="mmcb-calendar-menu-icon"></div>
		<div class="mmcb-calendar-menu-date-wrapper">
			<div class="month"><?php print $month; ?></div>
			<div class="day"><?php print $day; ?></div>
			<div class="time"><?php print $time; ?></div>
		</div>
	</a>
	
</div>