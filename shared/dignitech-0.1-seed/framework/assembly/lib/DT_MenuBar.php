<?php

/**
 * Menu bar class
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

class DT_MenuBar {

    private $items = array();

    public function __construct( $item_keys, $core_attributes, $additional_effects = array())
    {
        $additional_effect_short_forms = array(
            'highlighted_column' => 'focus',
            'open_in_separate_window' => 'popup'
        );
        foreach ($item_keys as $ikey) {
            $title = $core_attributes[ 'titles'][ $ikey];
            $link = $core_attributes[ 'links'][ $ikey];
            $this->items[$ikey] = array(
                'title' => $title,
                'link' => $link
            );

            $n_effects = empty( $additional_effects) ? 0 : count( $additional_effects);
            if ($n_effects) {
                foreach ($additional_effects as $effect_key => $evals) {
                    $selected_keys = is_array( $evals) ? $evals : array( $evals);
                    $isset = false;
                    if (in_array( $ikey, $selected_keys)) {
                        $isset = true;
                    }
                    $ekey = $additional_effect_short_forms[ $effect_key];
                    $this->items[ $ikey][ $ekey] = $isset;
                }
            }
        }
    }

    /*
     * Menu items and attributes getter
     */
    public function get()
    {
        return $this->items;
    }

}
