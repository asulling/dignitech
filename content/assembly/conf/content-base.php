<?php

/**
 * Content-level configuration
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
 * comments. NB! Notice the difference in the ending character of file system
 * and web-accessible roots, which is used throughout the DigniTech system and
 * by all the apps using it. */

//define( 'DOC_ROOT', '/var/www');
define( 'DOC_ROOT', $_SERVER['DOCUMENT_ROOT']);

/* This is the common denominator root for the StopMaltech framework as well as
 * any constituent frameworks (such as the DigniTech framework seed) that it
 * uses. */
//define( 'WEB_ROOT', '/');
define( 'WEB_ROOT', '/dev.localhost/');

/* High-level location roots. It would be a good idea to move the contents of
 * the "assembly" folders, i.e. the files assembled on the server side upon
 * the primary HTTP requests, out of publicly accessible space if possible. */
//under Linux with admin access e.g. define( 'INC_ROOT', '/usr/share/php/dignitech');
//at Hostinger e.g. define( 'INC_ROOT', DOC_ROOT . '');
define( 'INC_ROOT', DOC_ROOT . '/dev.localhost/dignitech');
//define( 'CONTENT_ASSEMBLY_ROOT', INC_ROOT . '');
define( 'CONTENT_ASSEMBLY_ROOT', INC_ROOT . '/content/assembly');

/* High-level location roots of the resources returned upon secondary HTTP
 * requests directly, which ideally would be close to the web root directory
 * for shorter URLs */
//define( 'APP_ROOT', WEB_ROOT . '');
define( 'APP_ROOT', WEB_ROOT . 'dignitech/');
//define( 'CONTENT_RESOURCES_ROOT', APP_ROOT . '');
define( 'CONTENT_RESOURCES_ROOT', APP_ROOT . 'content/resources/');

/* Low-level location roots close to the files to be included */
define( 'CONTENT_CONF_ROOT', CONTENT_ASSEMBLY_ROOT . '/conf');
define( 'CONTENT_HTML_ROOT', CONTENT_ASSEMBLY_ROOT . '/inc');

/* Low-level location roots close to the files to be returned */
define( 'CONTENT_STYLE_ROOT', CONTENT_RESOURCES_ROOT . 'style/');
define( 'IMAGES_ROOT', CONTENT_RESOURCES_ROOT . 'images/');
define( 'DOWNLOADS_ROOT', CONTENT_RESOURCES_ROOT . 'downloads/');

//define( 'FRAMEWORK_ASSEMBLY_ROOT', INC_ROOT . '');
define( 'FRAMEWORK_ASSEMBLY_ROOT', INC_ROOT . '/framework/assembly');
define( 'FRAMEWORK_CONF_ROOT', FRAMEWORK_ASSEMBLY_ROOT . '/conf');

/* Load the DigniTech framework seed configuration */
require_once FRAMEWORK_CONF_ROOT . '/framework-base.php';
