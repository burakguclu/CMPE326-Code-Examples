<!DOCTYPE html>
<html>
<body>

<?php
	$day="Monday";
	$month= "January";
    
	function calendar() {
		$day = "Tuesday";
		global $month;
		print "local day is $day\n";  
		$gday= $GLOBALS['day'];
		print "global day is $gday\n";
        print "global month is $month ";
 	}
 	calendar()
?>

</body>
</html>
