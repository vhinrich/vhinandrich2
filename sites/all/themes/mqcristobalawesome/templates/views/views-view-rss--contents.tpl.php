<?php

/**
 * @file
 * Default template for feed displays that use the RSS style.
 *
 * @ingroup views_templates
 */
?>
<?php
    function str_lreplace($search, $replace, $subject)
    {
        $pos = strrpos($subject, $search);
    
        if($pos !== false)
        {
            $subject = substr_replace($subject, $replace, $pos, strlen($search));
        }
    
        return $subject;
    }
    $items = str_lreplace(',','',$items);
?>
[<?php print $items; ?>]