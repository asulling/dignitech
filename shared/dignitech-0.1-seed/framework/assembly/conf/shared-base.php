<?php

/**
 * Shared framework and content configuration
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

/* Main location constant definitions. */

/* High-level location roots */
define( 'SHARED_DIGNITECH_INC_ROOT', $_SERVER['DOCUMENT_ROOT'] . '/dev.localhost/dignitech');
define( 'SHARED_DIGNITECH_APP_ROOT', '/dev.localhost/dignitech/');

/* Low-level location roots close to the files to be included */
define( 'SHARED_DIGNITECH_HTML_ROOT', SHARED_DIGNITECH_INC_ROOT . '/framework/assembly/inc');
define( 'SHARED_DIGNITECH_PHP_ROOT', SHARED_DIGNITECH_INC_ROOT . '/framework/assembly/lib');

/* Low-level location roots close to the files to be returned */
define( 'SHARED_DIGNITECH_IMAGES_ROOT', SHARED_DIGNITECH_APP_ROOT . 'content/resources/images/');
define( 'SHARED_DIGNITECH_CONTENT_STYLE_ROOT', SHARED_DIGNITECH_APP_ROOT . 'content/resources/style/');
define( 'SHARED_DIGNITECH_DOWNLOADS_ROOT', SHARED_DIGNITECH_APP_ROOT . 'content/resources/downloads/');
define( 'SHARED_DIGNITECH_GRAPHICS_ROOT', SHARED_DIGNITECH_APP_ROOT . 'framework/resources/graphics/');
define( 'SHARED_DIGNITECH_FRAMEWORK_STYLE_ROOT', SHARED_DIGNITECH_APP_ROOT . 'framework/resources/style/');

/* Load the DigniTech framework seed library */
require_once SHARED_DIGNITECH_PHP_ROOT . '/DT_MenuBar.php';
