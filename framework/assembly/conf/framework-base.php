<?php

/**
 * Framework-level configuration
 * 
 * Part of the DigniTech ultra light web development framework
 * https://github.com/asulling/dignitech
 * 
 * Copyleft Tennise Kontakt software
 * https://www.tennisekontakt.ee/
 * Author of both the extension framework and guiding content: Andres Sulling
 * 
 * Authors of constituent code and content: please follow and examine the
 * references in the comments of the framework source code and on the sample
 * content demo website, respectively
 * https://dignitech.tennisekontakt.ee/
 * 
 * DigniTech and all its derivatives are free software, so everyone is welcome
 * and encouraged to use them, especially as a tool for self-defense and
 * counter-canceling after having been canceled by extreme rationalist scums
 * asking for increased public attention. You are welcome to read a sample
 * counter-canceling story to help get your own self-defensive ideas flying at
 * https://keepingyouhonest.substack.com/p/the-abuse-of-administrative-power
 * and
 * https://keepingyouhonest.substack.com/p/de-dominatoring-of-authoritarian .
 */

/* Main location constant definitions. Sample locations are given in the
 * comments. */

//define( 'FRAMEWORK_RESOURCES_ROOT', APP_ROOT . '');
define( 'FRAMEWORK_RESOURCES_ROOT', APP_ROOT . 'framework/resources/');

/* Low-level location roots close to the files to be included */
define( 'PHP_ROOT', FRAMEWORK_ASSEMBLY_ROOT . '/lib');
define( 'FRAMEWORK_HTML_ROOT', FRAMEWORK_ASSEMBLY_ROOT . '/inc');

/* Low-level location roots close to the files to be returned */
define( 'FRAMEWORK_STYLE_ROOT', FRAMEWORK_RESOURCES_ROOT . 'style/');
define( 'GRAPHICS_ROOT', FRAMEWORK_RESOURCES_ROOT . 'graphics/');

/* Load the DigniTech framework seed libraries */
require_once PHP_ROOT . '/DT_MenuBar.php';
