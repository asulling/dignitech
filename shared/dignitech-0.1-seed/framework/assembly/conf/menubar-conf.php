<?php

$menubar_conf = array();
$menubar_conf[ 'items'] = array( 'home', 'about', 'menu', 'where');
/* To get rid of the rotate-me icon in the portrait orientation of devices with
 * a narrow screen, just comment out the following line. */
$menubar_conf[ 'items'][] = 'subscribe';
$menubar_conf[ 'attributes'] = array();
$menubar_conf[ 'attributes'][ 'titles'] = array();
$menubar_conf[ 'attributes'][ 'titles'][ 'home'] = "HOME";
$menubar_conf[ 'attributes'][ 'titles'][ 'about'] = "ABOUT";
$menubar_conf[ 'attributes'][ 'titles'][ 'menu'] = "EXPOSÉ";
$menubar_conf[ 'attributes'][ 'titles'][ 'where'] = "WHERE";
$menubar_conf[ 'attributes'][ 'titles'][ 'subscribe'] = "SUBSCRIBE";
$menubar_conf[ 'attributes'][ 'links'] = array();
$menubar_conf[ 'attributes'][ 'links'][ 'home'] = "#";
$menubar_conf[ 'attributes'][ 'links'][ 'about'] = "#about";
$menubar_conf[ 'attributes'][ 'links'][ 'menu'] = "#menu";
$menubar_conf[ 'attributes'][ 'links'][ 'where'] = "#where";
$menubar_conf[ 'attributes'][ 'links'][ 'subscribe'] = "https://substack.com/";
$menubar_conf[ 'highlighted_column'] = 'menu';
$menubar_conf[ 'open_in_separate_window'] = array( 'subscribe');
