<?php

/**
 * A half-baked template for the landing page
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

$inserts = array();

$inserts[ 'images'] = array();
$images = array(
    'background' => GRAPHICS_ROOT . 'backgrounds/abastumani.jpg',
    'rotate' => GRAPHICS_ROOT . 'menu/rotate-screen.png',
    'bioterrorism' => IMAGES_ROOT . 'bioterrorism.jpg',
    'error' => IMAGES_ROOT . 'error.jpg'
);
foreach ($images as $image_key => $image_file) {
    $inserts[ 'images'][ $image_key] = $image_file;
}

$inserts[ 'stylesheets'] = array();
foreach (array( 'w3', 'w3-overlay', 'dt-framework') as $file_name) {
    $inserts[ 'stylesheets'][] = FRAMEWORK_STYLE_ROOT . $file_name . '.css';
}
$inserts[ 'stylesheets'][] = CONTENT_STYLE_ROOT . 'dt-content.css';

$inserts[ 'menubar_include'] = FRAMEWORK_HTML_ROOT . '/menubar.inc';

require_once FRAMEWORK_CONF_ROOT . '/menubar-conf.php';
$item_keys = $menubar_conf[ 'items'];
$core_attributes = $menubar_conf[ 'attributes'];
$additional_effects = array();
foreach (array( 'highlighted_column', 'open_in_separate_window') as $conf_key) {
  if (isset( $menubar_conf[ $conf_key])) {
    $additional_effects[ $conf_key] = $menubar_conf[ $conf_key];
  }
}
$menubar = new DT_MenuBar( $item_keys, $core_attributes, $additional_effects);

$downloads = array();
$downloads[ 'dignitech'] = DOWNLOADS_ROOT . 'dignitech-0.1-seed.zip';

$to_be_displayed = array();
$to_be_displayed[ 'menu'] = true;
$to_be_displayed[ 'arrow'] = false;
if (count( $item_keys) > 4) {
    $to_be_displayed[ 'arrow'] = true;
}

?>
<!-- Most of the following code imported from the W3Schools Online Web Tutorials
     website: https://www.w3schools.com/w3css/tryw3css_templates_cafe.htm -->
<!DOCTYPE html>
<html>
<head>
<title>DigniTech Framework Demo (Seed Version)</title>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
<?php foreach ($inserts[ 'stylesheets'] as $stylesheet): ?>
<link rel="stylesheet" href="<?php echo $stylesheet ?>">
<?php endforeach ?>
<link rel="stylesheet" href="https://fonts.googleapis.com/css?family=Inconsolata">
<style>
.bgimg {
  background-image: url("<?php echo $inserts[ 'images'][ 'background'] ?>");
}
</style>
</head>
<body>

<?php require $inserts[ 'menubar_include'] ?>

<!-- Header with image -->
<header class="bgimg w3-display-container w3-grayscale-min" id="home">
  <div class="w3-display-bottomleft w3-center w3-padding-large w3-hide-small">
    <span class="w3-tag">A little contribution to the Great Exposé<br>of totalitarian administrative crime cover-ups</span>
  </div>
  <div class="w3-display-middle w3-center">
    <span class="w3-text-white dt-header-title">solving a<br>Lungs Mystery</span>
  </div>
  <div class="w3-display-bottomright w3-center w3-padding-large">
    <span class="w3-text-white">since June, 2019</span>
  </div>
</header>

<!-- Add a background color and large text to the whole page -->
<div class="w3-sand w3-grayscale w3-large">

<!-- About Container -->
<div class="w3-container-xpatch w3-padding-64-patch-for-main-heading w3-main-heading-patch-part3" id="about">
  <div class="dt-content dt-main-heading-area w3-container-xpatch-patch-part1">
    <h5 class="w3-main-heading-patch-part2"><span class="w3-tag w3-wide dt-long-heading">ABOUT EX&shy;POS&shy;ING THE SE&shy;CRE&shy;TIVE CRIM&shy;I&shy;NAL ABUSES OF AD&shy;MIN&shy;IS&shy;TRA&shy;TIVE POWER WITH THE DIGNI&shy;TECH SAM&shy;PLE SELF-DEFENSE TOOL</span></h5>
  </div>
  <div class="dt-content w3-container-xpatch-patch-part1">
    <p>The DigniTech ultra light web development framework for presenting self-defensive content against the abuse of administrative power, canceling dissent, and other extreme rationalist abuse cover-up attacks in complementary landing page format was created as a simple yet powerful tool for participating in the Great Exposé of the abuse of administrative power at Maltech – the ideologically hijacked <a href="https://taltech.ee/" title="The belly of the beast in Estonia" target="_blank">Tallinn University of Technology</a> – by a Tallinn Tech alumnus from a <a href="https://www.w3schools.com/w3css/tryw3css_templates_cafe.htm" title="An effective means of counter-canceling, especially in small societies" target="_blank">W3C.CSS template</a> in response to the hijacking of the administration of the Maltech tennis court from an invited rescue community consisting of him as the person responsible for the renovation and a sustainable system development project for as well as the administration of the rescued court and other students mainly, after their contacts, shared know-how, common effort and mutual respect based system had succeeded in getting rid of all the traces of incompetence (the result of arrogance, to be exact) of the Maltech administration regarding the university tennis court welfare and usage, accompanied by an apparent bioweapon attack on his lungs in (or before?) early June, 2019.</p>
    <p>The need for such a tool had become quite straightforward as this attack, which was yet another one in a long and incredible series spanning almost 2 decades already, clearly tipped the bucket as an obvious attempt to block self-defense and resistance to coordinated efforts in the High Heavens of Maltech to hijack public space administration by means of comprehensive contract violations as well as cover-up attacks of the incompetence and the accompanying abusive schemings of the ungrateful Maltech administration asking capable students for help in order to just steal by starting an eternal and escalating series of conflict provocations beyond imagination out of thin air, driven by the worst administrative ambitions aimed at brutally hijacking the missing know-how, long-term community effort and what not into extremely corrupt hands where the very problems with the university tennis court originated in.</p>
    <p>Interestingly, at the end of the year already the killer jab obedience blackmail scamdemic of a gang of international financial terrorists (COVID-19) broke out, and for some reason the lungs of those being "administered" by a similar bunch of totalitarian gangsters were targeted again, but on an unprecedented global scale this time. Looks like the organs of choice to have those under attack disabled or dead easily by just blocking professional medical help or the entire healthcare system to silence with impunity the dissident voices that the next victims of such bioterrorism need to hear are the lungs. Healing the lungs takes a lot of time, by the way, and requires very special treatment, so once your lungs have been seriously maimed by a bioweapon attack like the one that seems to be getting popular in Estonia these days, you'll be in serious trouble for many years or decades, easily resulting in overwhelming social pressure as a long-term result of your inability to work due to inflammation in the lungs disabling quality brainwork as well as taking a toll on the heart, provided that you get out of such a grueling medical condition alive, to start with – just to give you an idea of how life feels many years after a bioweapon attack like this. And the worst daily problem for the unemployed in this medical condition for an extended period of time is that such inflammation and other maiming means apparently can make your memory so fragile that you are unable to even complete sentences, which can be a severe synchronous communication problem for decades, for example, resulting in a rather asocial status. In 5 or 10 years many people simply don't care that you are unable to perform anywhere close to normal speed because of all these physical challenges you have almost no control of, and you might get into serious difficulties with trust. In other words, you can get labeled "fraudster" easily. And most probably it is not a coincidence that the Maltech public space administration hijacking cover-up team and the Big Pharma COVID-19 big profit hijacking cover-up team in the same year already chose the same organ as an effective means for trying to cover up their administrative crimes as well as blocking the resistance of their victims well after the robbery as <a href="https://substack.com/@keepingyouhonest/note/c-87267856" target="_blank">hardly anything is visible</a> on the outside of those suffering from such lung problems.</p>
    <p>The name of the self-defence tool, DigniTech, for presenting content like the one you are reading now was chosen to be indicative of the appropriate restricted context of a reasonable use of this kind of tech "language", unlike the inappropriate context of academic environments for pidgin language such as "TalTech" instead of just the natural "Tallinn Tech" as a shortened form of Tallinn University of Technology in English or either one in Estonian officially, let alone exclusively for developing a totalitarian spirit at educational institutions dominated by people leading bad lives who deliberately contaminate the daily communication for everybody. And importantly in our everyday practice, weaponization of our language like this seems to be intended to mess with the very basic dignity of the intellectually capable minds among us on a daily divisive basis first and foremost, so it doesn't look like just an arbitrary way of contaminating our communication for more unhealthy administrative control, but a means for eliminating those wise enough to notice the problem and do something about it. Therefore, special attention is due in order not to get either <a href="https://www.alilybit.com/p/chatgpt-said-im-the-smartest-kindest" target="_blank">dumbed down</a> even more than we already are or else get profiled for canceling and other ideological persecution, supported by the use of such an intellectually demeaning language by the majority of us as a screening and profiling means for sucking the intellectually capable resisters into the kind of administrative bullying that was brutally forced upon everybody at Maltech by the Jaak Aaviksoo gang about a decade ago and aligns perfectly with the currently popular masonic agendas for controlling the Western World. By now such weaponization of our language against the wise enough to be disobedient has already become the new "normal" for the masses lacking the intellectual capability or experience to even notice the problem that has led to a great many reasonable voices of dissent losing their positions at Maltech as well as their valuable professional careers, and becoming personae non grata overnight due to a persecution campaign of a gang of spiteful ideological terrorists.</p>
    <p>If you have been canceled like that by <a id="anchor" href="https://stopmaltech.tennisekontakt.ee/en/tools/#dreamland51" target="_blank">a gang of totalitarian scums</a> in your society too – wherever in the world you happen to be living – but have a basic understanding of languages like HTML, CSS, JavaScript and php, and are willing to set up your own website on a web hosting platform like e.g. <a href="https://www.hostinger.com/" target="_blank">Hostinger</a> or <a href="https://freehosting.com/" target="_blank">Freehosting</a>, or if you have alternative access to a web server for publishing your self-defence story on the World Wide Web then you can simply download the W3C.CSS template referred to above or similar as a presentation base, or download the source code of perhaps a suitable version above the DigniTech framework seed of this tool to aid with added functionality from GitHub or as a zip file <a href="#download">at the end of</a> this landing page demo in order to get your story online with minimal effort outside any annoying confines of a content management system, let alone our currently, say, narrowly popular censorship-oriented social media environments.</p>
    <p>As an example of how to use DigniTech above the framework seed version, you are welcome to read more closely about the ambitions of the Maltech administration that led to the above mentioned, say, Lungs Mystery of someone they had asked for help, following the apparent hijacking/bioweapon combo of 2019 (there were earlier failed hijacking attempts, including a major one in 2008, so they kept "improving") in the <a href="https://stopmaltech.tennisekontakt.ee/en/overview" target="_blank">overview</a> part of Andres's <a href="https://keepingyouhonest.substack.com/p/the-abuse-of-administrative-power" target="_blank">counter-canceling story of the Maltech scums</a> presented as a <span class="dt-glow">decolonization how-to</span> on Substack mostly, but the overview part outside Substack runs on a, say, beta version of the StopMaltech-on-DigniTech framework already, to give you an idea. After adding some fearures and refactoring its code will be made available on GitHub, too. In addition to serving as an important tool for organizing mass resistance against the abuse of administrative power at Maltech, DigniTech is free software accessible to everyone for helping expose abusive scheming along the lines of counter-canceling the totalitarian hijacker beast pattern as an international team of resisters outside Maltech and Estonia, too. It has become a very little world we are living in nowadays, so we'd better get into the habit of communicating with and supporting each other over long distances against <a href="https://mattiasdesmet.substack.com/p/the-de-souling-of-the-world-the-veil" target="_blank">extreme rationalist</a> serial murderers who keep pushing agendas like the one expressed by the following quote, and e.g. dominating our university by means of extension gangs of the infamous local bribable slow-wit majority who have been observed to make up around 70% of a typical human population in number with, say, consistency in slow wit manifestationss ranging from death shot giving and taking to many other cases of serious ignorance of the dark side of the human nature – especially in politics – with very practical consequences, mysteriously falling close to the same percentage of a population total over and over again, wherever we look:</p>
    <div class="w3-panel w3-leftbar w3-light-grey dt-inner-flow dt-centered-block dt-inner-flow-margin-top">
      <p><i>"The world today has 6.8 billion people. That's headed up to about 9 billion. Now if we do a really great job on new vaccines, healthcare, reproductive health services, we could lower that by perhaps ten or fifteen percent." [see part 5.46-6.1 of the video below]</p>
      <p>An international financial terrorist, bioterrorist, and a totalitarian regime pusher: Bill Gates</p>
    </div>
    <a href="https://ugetube.com/watch/died-suddenly-full-documentary_48BfRmGBU1Yl2Tm.html" target="_blank" class="dt-centered-block dt-fit-content"><img src="<?php echo $inserts[ 'images'][ 'bioterrorism'] ?>" class="w3-margin-top dt-inner-flow"></a>
    <p><strong>Number of victims:</strong> about <a href="https://www.walshmedicalmedia.com/open-access/analysis-of-covid19-vaccination-effectiveness.pdf" target="_blank">twenty million</a></p>
    <p><strong>As of:</strong> just 2 years into "treatment"</p>
    <p>Evidence described in the above mentioned decolonization how-to shows that there is an ideologically loaded sibling killer mentality for hijacking public administration being spread at Maltech that was imported to our university under financial pressure leading to dependencies on the whims of the High Heavens of Microsoft in about early 10s or late 00s, which keep lurking behind the scenes now for socially extremely destructive totalitarian control that every capable and accommodating student at Maltech had better be aware of nowadays. Needless to say, such imports are a lethal poison for the loval society.</i></p>
    <p>What we should do at minimum is hold such totalitarian assassins and their companies in contempt, and insist that everybody else who wants to do business with us at least try to do the same. The ratio of their minions camp vs that of the resisters mainly depends on maintaining a respectable soul health and demonstrating the unacceptability in our societies of the agendas of such extreme capitalist scums against the backdrop of it. We have an infinite number of ways of achieving it in practice – just use your imagination. To start with, it would be wise to find out what the heck is going on in the countries where such terrorists come from nowadays.</p>
    <figure class="dt-inner-flow dt-centered-block dt-inner-flow-margin"><iframe class="dt-inner-flow-video-area" src="https://www.youtube.com/embed/OCBoJEnP2dU?si=2knFRVNw88_-RX8C" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe><figcaption class="dt-figcaption">A reminder about extreme capitalism: the ever-present gap between our words and our deeds can easily become a cheap talk era called tyranny if we let absolute power corrupt absolutely and override our hard-fought freedoms.</figcaption></figure>
    <p>There are good and bad ways of achieving reasonable goals, and choosing with responsibility between these two can make a huge difference in the reality that we have. We need to resist totalitarian patterns such as the one quoted above in our societies for our personal security, basically. And that's where DigniTech can prove to be a surprisingly helpful tool – just check out the following sample exposé to get an idea of how to spread words of warning using such tools and hold the extreme rationalist scums firmly in contempt despite their sneaky ways of trying to sow death and destruction in our societies. Social media, including Substack, can be too restrictive to do it at times.</p>
  </div>
</div>

<!-- Menu Container -->
<div class="w3-container-xpatch w3-container-xpatch-patch-part2" id="menu">
  <div class="dt-content w3-container-xpatch-patch-part1">
    <h5 class="w3-center w3-padding-48"><span class="w3-tag w3-wide">A SAMPLE CONTRIBUTION TO THE GREAT EXPOSÉ</span></h5>

    <p>More often than not, <a href="https://substack.com/@keepingyouhonest/note/c-87267856" target="_blank">knowing about a problem</a> is half of the solution as the critical mass of us usually doesn't know neither of the existence of a problem nor where the solution is just waiting to show up. In other words, knowing indirectly how attacks like the one described in the above referred decolonization how-to are carried out makes it possible to spread the word to bring such criminal activities to public attention, and subsequently to a halt. The latter can't happen sooner than the former, especially while the police in Estonia, for example, confess that totalitarian scheming like this lies outside their competence and they can't do anything about it. Well, let's do some analysis right here then, what the current trends in international financial (extreme capitalist) terrorism are pointing out to us what likely must have been behind the Lungs Mystery case at Maltech, too. Although we can't analyze the Maltech case directly due to police incompetence or whatever it is, indirect information about what is going on around the corner can usually greatly help us understand what is going on and hold the bastards in contempt to block their evil anyway.</p>
    <p>In our case the leader of the gang is a usual suspect internationally (see the quote above), so it is a relatively easy case to figure out what the heck Microsoft might be up to after having ideologically hijacked our university, basically. These are businessmen who hate to see any keen eyes and fully functional brains around, obviously, including the students at Maltech. Which is to say that our university has become part of a larger ideological (non-academic) business after the paradigm shift introduced by Microsoft apparently. This is what has been going on in the United States, i.e. the source country of the killer social paradigm import at about the time of the Tennis Contacts community effort robbery at Maltech, in the period 2015-2025:</p>

    <div class="w3-row w3-center w3-card w3-padding dt-inner-flow dt-centered-block dt-highlighted-area dt-inner-flow-margin-top">
      <a href="javascript:void(0)" onclick="openMenu(event, 'Kidnapping');" id="myLink">
        <div class="w3-col s6 tablink">A Big Pharma "care" exposé and a few similar murders</div>
      </a>
      <a href="javascript:void(0)" onclick="openMenu(event, 'COVID');">
        <div class="w3-col s6 tablink">Main culprit exposé of the COVID-BP bioterrorism</div>
      </a>
    </div>

    <div id="Kidnapping" class="w3-container menu w3-padding-48 w3-card dt-inner-flow dt-centered-block dt-highlighted-area dt-inner-flow-margin-bottom">
      <h5 class="dt-glow">Hijacking organs at hospitals from patients secretively profiled for financially very profitable murder</h5>
      <p class="w3-text-grey">An interview by Tessa Lena on April 7, 2025:</p>
      <div class="substack-post-embed"><p lang="en">Shocking Story of Nurse Helena Krizek and Her Late Daughter Bianca  by Tessa Lena</p><p>A story of a grieving mother on a quest to uncover the truth </p><a data-post-link href="https://tessa.substack.com/p/alleged-medical-murder-helena-krizek">Read on Substack</a></div><script async src="https://substack.com/embedjs/embed.js" charset="utf-8"></script>

      <h5 class="dt-glow dt-inner-flow-margin-top">Hijacking intellectual property at tech companies by means of employee murder</h5>
      <p class="w3-text-grey">An interview by Tucker Carlson on January 17, 2025:</p>
      <div class="substack-post-embed"><p lang="en">Death of an Open A.I. Whistleblower  by Peter A. McCullough, MD, MPH</p><p>Suchir Balaji was trying to warn the world of the dangers of Open A.I. when he was found dead in his apartment. His story suggests that San Francisco has become an open sewer of corruption. </p><a data-post-link href="https://www.thefocalpoints.com/p/death-of-an-open-ai-whistleblower">Read on Substack</a></div><script async src="https://substack.com/embedjs/embed.js" charset="utf-8"></script>

      <h5 class="dt-glow dt-inner-flow-margin-top">A murder series at Boeing which very much smells like silencing for the cover-up of the abuse of administrative positions, too</h5>
      <p class="w3-text-grey">A summary by John Leake on May 3, 2024:</p>
      <div class="substack-post-embed"><p lang="en">Another Boeing Whistleblower Dies Suddenly by Peter A. McCullough, MD, MPH</p><p>Joshua Dean (45) dead of MRSA, second whistleblower to die in last two months</p><a data-post-link href="https://www.thefocalpoints.com/p/another-boeing-whistleblower-dies">Read on Substack</a></div><script async src="https://substack.com/embedjs/embed.js" charset="utf-8"></script>

      <p class="dt-inner-flow-margin-top">And so forth... An obvious conclusion here: the closer your profession is to a fashion model, the more talented but principled you are, or the more inconvenient your discoveries are for the High Heavens of a large technological business with military ties, the higher your risk of being profiled for murder nowadays.</p>
    </div>

    <div id="COVID" class="w3-container menu w3-padding-48 w3-card dt-inner-flow dt-centered-block dt-highlighted-area dt-inner-flow-margin-bottom">
      <h5 class="dt-glow">Percentage play about the Bill Gates case</h5>
      <p class="w3-text-grey">An interview by Maria Zeee on November 4, 2024:</p>
      <div class="substack-post-embed"><p lang="en">Bill Gates Finally Held Accountable for Deceiving the Public on COVID-19 Injections by Peter A. McCullough, MD, MPH</p><p>Epidemiologist Nic Hulscher on Vigilant News with Maria Zeee</p><a data-post-link href="https://www.thefocalpoints.com/p/bill-gates-finally-held-accountable">Read on Substack</a></div><script async src="https://substack.com/embedjs/embed.js" charset="utf-8"></script>

      <h5 class="dt-glow dt-inner-flow-margin-top">Percentage play about the Anthony Fauci case</h5>
      <p class="w3-text-grey">An interview by Grant Stinchfield on June 5, 2024:</p>
      <div class="substack-post-embed"><p lang="en">Grant Stinchfield Exposes Dr. Fauci as a Tyrant</p><p>Dr. McCullough on Stinchfield Podcast Reviews Congressional Testimony</p><a data-post-link href="https://www.thefocalpoints.com/p/grant-stinchfield-exposes-dr-fauci">Read on Substack</a></div><script async src="https://substack.com/embedjs/embed.js" charset="utf-8"></script>

      <p class="dt-inner-flow-margin-top">The COVID-BP terrorism exposé gain-of-momentum seems to be finally catching fire. And the next most reasonable step, obviously, is to generalize it to an overall soul health level acceptable in our societies...</p>
    </div>

    <p>Now using this information about satanic imports from the States to our little messed up satellite country, dear fellow Estonians, make the likely behavior of our local bribed servile scums of the omnipresent gang of the invisible Br'er Jaw shaped by such a killer social ecosystem, their likely corresponding mafia operations in our banana republic, and their likely impact on the administration of institutions like Maltech against the backdrop of the above referred decolonization how-to vivid in your imagination... This is the result of the import of slut mentality (masonic bitch mode "success") since the end of the 90s, which the predecessor of the above referenced decolonization how-to titled Sense of Time and the Extreme Feminist Death Drive warned against in 2005 already. Hence, capable and accommodating students among others – don't believe anything you are being fed by the administrative personnel at bribed tech institutions in Estonia and other countries playing the role of the 51st state of the USA! For your personal security, what you really should do is exactly the opposite – watch out for satanic abusive scheming at institutions like Maltech, carried out by their local bribed administrations. This is how masonic satanism and extreme capitalism work in practice, hand in hand. Avoidance of extremes (extreme rationalism, extreme capitalism, extreme feminism, and other sources of slut mentality) is crucial for getting out of this vicious circle, and staying modest really is an important skill.
    <p>Also very importantly, against the backdrop of murders like those presented above, it becomes easy to put Lungs Mysteries like the one apparently fabricated by bioterrorists supporting the crimes of the Maltech administration into international context as well as see what kind of meaning the top-level gangs leading such efforts like Young Global Leaders are trying to assign to phrases like <a href="https://alilybit.substack.com/p/what-the-f-is-going-on" target="_blank">"useless people"</a> and other terminology along these lines. To put it short, it is a lack of principles of the WEF gangsters and their stupid minions, so we have "useless doctors" at our hospitals who truly care about our welfare and don't comply with the extreme rationalist dictate for a masonic power grab, we have "useless helpers" at Maltech who truly care about the result of their work and don't comply with the extreme rationalist dictate for a masonic power grab of the WEF gangsters or that of their young bribed local minions at our universities, and so forth. Now that's clearly the bastard logic of those who need to eliminate dissent in order to cling to power – anyone who tries to resist the obvious criminal foundations of clearly masonic style power grabs gets labeled "useless" and becomes a target of ideological persecution. And they have several layers to cover such power grabs up, such as the subtle layer of implicitly labeling (i.e. what you can, say, feel in the air) professions like fashion model, requiring less education than the regular ones to become successful, "useless eater business" according to the weaponized language being pushed by satanic total control gangs like WEF and YGL apparently, in order to push yet another divide-and-conquer among the mostly servile and poorly educated masses (the same ominous 70% of us as usual who are manipulable into supporting such acts of divide-and-conquer of themselves), or the subtle layer of mobilizing those being considerably younger than the old masonic murder foxes pulling the strings in the locker room for easier manipulation of the inexperienced youth into organizations like YGL or, analogically, what the Student Union at Maltech has become by now as a result of such an imported abusive scheming, and so forth.</p>
    <p>To be precise, it is the, say, <a href="https://tessa.substack.com/p/real-talk-the-mother-of-all-psyops" target="_blank">hedgehog syndrome</a> of the stupid-by-default Homo Sapiens that is being exploited by the masonic scums here. What's truly funny about it, however, is that the whole profiling-as-useless business of the masonic bastards seems to be trying hard to push anyone capable of successfully tackling the complexity of masonic corruption into this deadly category of being useless (imagine how many people the sheer need to investigate masonic corruption makes "uselessly" useless in such a lofty interpretation of this word due to our truly useless police in this case...) as a direct security measure already of their <a href="https://tessa.substack.com/p/how-domination-drives-genocides" target="_blank">System of Domination</a> despite all our Substack posts among other information freely available in concise form on the Internet for everyone to see by now. Let's call this funny phenomenon the increasingly insufficiently massive information inertia for masonic corruption cover-up. And it's nice to see that so many of us are already seeing through this wall of massive information piled up for such blocker inertia that we simply need to communicate professionally and understand to render any such attempts to cover up masonic corruption useless before even getting profiled for anything, to improve the resisters/minions ratio. Well done – our understanding can only get more widespread from here.</p>
    <p>In the very least we can conclude that building useful and concise counter-information inertia against totalitarian schemings like the ones described above has a very helpful effect for everyone who happens to get under such attacks – widespread social support for watching out collectively as opposed to letting the valuable dissidents among us get compartmentalized and canceled from our society.</p>
    <p>Solving the Lungs Mystery at Maltech like this for now isn't complete nor perfect, and we might not be able to point a finger at the tyrants among us operating with impunity, but at least you know what you should be able to keep an eye on. You might prefer to ignore it for now, but if you catch yourself feeling the weight of exactly the same abusive scheming patterns in reality that you have been reading about here (a good friend being destroyed like this, for example) then you at least know what you should pay more attention to.</p>
  </div>
</div>

<!-- Contact/Area Container -->
<div class="w3-container-xpatch w3-container-xpatch-patch-part2" id="where">
  <div class="dt-content w3-container-xpatch-patch-part1">
    <h5 class="w3-center w3-padding-48"><span class="w3-tag w3-wide">WHERE TO INVEST</span></h5>
    <p>For this minimalist DigniTech framework seed demo to just introduce the W3C template it originates in and solve a sample case to sow a seed of ideas for the global self-defense community to come up with opinions on what functionality should be added to this ultra light framework, only cosmetic changes to the original W3C template have been made in the seed version of the DigniTech framework as a symbolic start of developing a tool for presenting self-defense and counter-canceling content. Ultra light web development means that DigniTech is optimized for landing pages, basically. For more complex navigation, a comments feature, and other functionality beyond that of a simple landing page, please use Substack or equivalent instead. Importantly, from there you can always link to the parts of your story needing the above mentioned presentation features on an otherwise much less visible website. In other words, these two presentation alternatives neatly complement each other as long as Substack hasn't implemented the features provided by the DigniTech, say, extension framework in complementary landing page format.</p>
    <p>On Substack, by the way, additional help for getting online in serious cases is available in non-work periods at <a href="https://keepingyouhonest.substack.com/" target="_blank">keepingyouhonest.substack.com</a> for a paid 3-digit EUR subscription per year, but depending on the weight of the case with respect to the counter-canceling cases in focus here, making an exception financially isn't always impossible. The number of paid subscriptions during the first year was an absolute zero, but who knows, maybe such a need for tech support is a better reason for miracles to start happening to support all the work you are reading here.</p>
    <p>Regarding the potential DigniTech framework extensions and e.g. videos presented on the <a href="https://stopmaltech.tennisekontakt.ee" target="_blank">Stop Maltech</a> website running on such a DigniTech framework extension, loading content from some video hosting platforms can be extremely time-consuming or not work as an embedded video at all. Also, many cases need to be presented not just in English but in the local language, too. These two improvements – content partitioning and language support – will be available in StopMaltech-on-DigniTech, i.e. the next version of the DigniTech framework. Hope this helps many more canceled folks get online properly who don't have a suitable platform and a professional interviewer at their disposal as long as Substack or any other relatively free speech platforms lack the named anchor feature (such as the #dreamland51 hashtag in the "a gang of totalitarian scums" link <a href="#anchor">above</a>, pointing to the part of the video that describes the idea behind this quoted phrase to provide for a compact and accurate definition of the terms that we need to use in our meaningful self-defense and counter-canceling stories) and haven't provided for the couple relatively critical featurrs already described! Those dissidents who have been canceled to death already and can't tell their stories anymore are very welcome to be introduced in DigniTech by their close ones, obviously – may their stories not get buried under the inaccessibility of tech solutions and may the Substack features catch up, too.</p>
    <p>As for the sample content of this little demo of the DigniTech tool – with the help of a little bit of imagination, it pretty much solves the mystery part of the Lungs Mystery encountered at Maltech for the most general practical purposes of getting public attention to the serial killers among us on the move – credit due to the people being interviewed and the interviewers doing their job professionally as well as to a few more Substack authors who are going to be referred to below. No idea yet how mysteries like this are being manufactured in the High Heavens of Maltech, but by investing into these Substack projects you literally enable the publishing of such indirectly revealing content in many cases, i.e. your financial support often makes a big difference.</p>
    <p>For further reading along the lines of the topics just presented, you can find more on Substack, for example. Regarding the problems with the above mentioned extreme rationalist vandalism and the so-called de-souling of the world, there are many more posts on this crucial subject accessible for free on Substack than the one already referred to above, providing a solid basis for understanding these phenomena and countering the many manifestations of this problem, such as the following writings of considerable practical value:</p>
    <ul>
      <li><a href="https://petermcculloughmd.substack.com/p/a-cancer-of-the-soul" target="_blank">A Cancer of the Soul</a></li>
      <li><a href="https://alilybit.substack.com/p/how-to-identify-a-psy-op" target="_blank">How to Identify a Psy-Op</a></li>
      <li><a href="https://tessa.substack.com/p/the-game-of-musical-chairs" target="_blank">The Game of Musical Chairs</a></li>
      <li><a href="https://amirpars.substack.com/p/farewell-sweden-my-beloved-country" target="_blank">Farewell Sweden, My Beloved Country</a></li>
      <li><a href="https://theworkofwomen.substack.com/p/feminine-opposition-to-porn-is-not" target="_blank">Feminine Opposition to Porn is Not Hysterical</a></li>
    </ul>
    <p>Regarding the bioweapons in, say, masonic extreme rationalist use nowadays, preliminary coverage has been thankfully provided on Substack, too:</p>
    <ul>
      <li><a href="https://petermcculloughmd.substack.com/p/us-biodefense-and-biolabs-in-ukraine" target="_blank">U.S. Biodefense & Biolabs in Ukraine</a></li>
      <li><a href="https://rwmalonemd.substack.com/p/ukraine-biolabs-update" target="_blank">Ukraine Biolabs Update</a></li>
    </ul>
    <p>Such reasonable cooperation along the lines of the secretive manifestations of totalitarianism that are designed to go unnoticed otherwise is very healthy indeed. Some Substack authors have been spreading professionally crafted warning messages worldwide about international extreme capitalist totalitarianism, to end this little helper tool demo in a motivating way of getting counter-canceled for the leading globalist pushers of slut mentality, dissident assassinations, and other extreme rationalist corruption cover-up attempts that harness our abundance of ignorance to let them cling to their ultra corrupt authoritarian power, as we speak up in order not to let power slip into the hands where it doesn't belong:</p>
    <p>Lily</p>
    <ul>
      <li><a href="https://alilybit.substack.com/p/the-man-who-broke-the-bank-of-england" target="_blank">The Man Who Broke the Bank of England</a></li>
      <li><a href="https://alilybit.substack.com/p/the-wolf-of-hungary-the-early-years" target="_blank">The Wolf of Hungary - The Early Years of George Soros</a></li>
    </ul>
    <p>Mattias Desmet</p>
    <ul>
      <li><a href="https://mattiasdesmet.substack.com/p/my-speech-at-the-us-senate" target="_blank">My Speech at the U.S. Senate</a></li>
      <li><a href="https://mattiasdesmet.substack.com/p/my-speech-at-the-european-parliament" target="_blank">My Speech at the European Parliament in Brussels</a></li>
      <li><a href="https://mattiasdesmet.substack.com/p/my-speech-in-the-parliament-of-romania" target="_blank">My Speech in the Parliament of Romania</a></li>
      <li><a href="https://mattiasdesmet.substack.com/p/podcast-with-naomi-wolf" target="_blank">Podcast with Naomi Wolf</a></li>
      <li><a href="https://mattiasdesmet.substack.com/p/my-interview-with-tucker-carlson" target="_blank">My Interview with Tucker Carlson</a></li>
    </ul>
    <p><span class="w3-tag">FYI!</span> If you are not a skilled writer yet, you can help expose international financial terrorism in other ways, too. We the writers find donations very helpful, for example. In fact, you can contribute to your own welfare by helping competent and reliable people help you protect your rights.</p>
    <figure class="dt-inner-flow-compact dt-centered-block dt-inner-flow-margin"><img src="<?php echo $inserts[ 'images'][ 'error'] ?>" class="dt-inner-flow-compact"><figcaption class="dt-figcaption">The persistence of mutually enriching communities dominated by independent minds are absolutely vital to our societies during the lengthy totalitarian winters of the stupid-by-default humankind.</figcaption></figure>
    <p><strong>Cooperate</strong> as a co-author, transfer an amount, or just comment our results so far to add any missing details or let us know how we are doing – all of it is important teamwork. By the way, comments on the above referenced selection of Top Twenty-five reads used in the DigniTech framework seed demo and relevant to the topic of the Lungs Mystery that finally accompanied the abuse of administrative power at Maltech can sometimes be very helpful to us – you are encouraged to give your useful feedback to all these and many more of our posts on Substack:</p>
    <ul>
      <li><a href="https://petermcculloughmd.substack.com/p/grant-stinchfield-exposes-dr-fauci/comments" target="_blank">Grant Stinchfield Exposes Dr. Fauci as a Tyrant</a></li>
      <li><a href="https://tessa.substack.com/p/alleged-medical-murder-helena-krizek/comments" target="_blank">Shocking Story of Nurse Helena Krizek and Her Late Daughter Bianca</a></li>
      <li><a href="https://alilybit.substack.com/p/what-the-f-is-going-on/comments" target="_blank">What the Fuck Is Going On?</a></li>
      <li><a href="https://petermcculloughmd.substack.com/p/bill-gates-finally-held-accountable/comments" target="_blank">Bill Gates Finally Held Accountable for Deceiving the Public on COVID-19 Injections</a></li>
      <li><a href="https://mattiasdesmet.substack.com/p/the-de-souling-of-the-world-the-veil/comments" target="_blank">The de-souling of the world</a></li>
      <li><a href="https://tessa.substack.com/p/how-domination-drives-genocides/comments" target="_blank">What Drives the Great Reset? A Conversation with Steven Newcomb</a></li>
      <li><a href="https://petermcculloughmd.substack.com/p/death-of-an-open-ai-whistleblower/comments" target="_blank">Death of an Open A.I. Whistleblower</a></li>
      <li><a href="https://petermcculloughmd.substack.com/p/another-boeing-whistleblower-dies/comments" target="_blank">Another Boeing Whistleblower Dies Suddenly</a></li>
      <li><a href="https://petermcculloughmd.substack.com/p/us-biodefense-and-biolabs-in-ukraine/comments" target="_blank">U.S. Biodefense & Biolabs in Ukraine</a></li>
      <li><a href="https://rwmalonemd.substack.com/p/ukraine-biolabs-update/comments" target="_blank">Ukraine Biolabs Update</a></li>
      <li><a href="https://alilybit.substack.com/p/how-to-identify-a-psy-op/comments" target="_blank">How to Identify a Psy-Op</a></li>
      <li><a href="https://alilybit.substack.com/p/chatgpt-said-im-the-smartest-kindest/comments" target="_blank">ChatGPT Said I'm the Smartest, Kindest, Most Morally Upright Person to Ever Walk the Earth</a></li>
      <li><a href="https://petermcculloughmd.substack.com/p/a-cancer-of-the-soul/comments" target="_blank">A Cancer of the Soul</a></li>
      <li><a href="https://tessa.substack.com/p/the-game-of-musical-chairs/comments" target="_blank">The Game of Musical Chairs</a></li>
      <li><a href="https://amirpars.substack.com/p/farewell-sweden-my-beloved-country/comments" target="_blank">Farewell Sweden, My Beloved Country</a></li>
      <li><a href="https://theworkofwomen.substack.com/p/feminine-opposition-to-porn-is-not/comments" target="_blank">Feminine Opposition to Porn is Not Hysterical</a></li>
      <li><a href="https://alilybit.substack.com/p/the-man-who-broke-the-bank-of-england/comments" target="_blank">The Man Who Broke the Bank of England</a></li>
      <li><a href="https://alilybit.substack.com/p/the-wolf-of-hungary-the-early-years/comments" target="_blank">The Wolf of Hungary - The Early Years of George Soros</a></li>
      <li><a href="https://mattiasdesmet.substack.com/p/my-speech-at-the-us-senate/comments" target="_blank">My Speech at the U.S. Senate</a></li>
      <li><a href="https://mattiasdesmet.substack.com/p/my-speech-at-the-european-parliament/comments" target="_blank">My Speech at the European Parliament in Brussels</a></li>
      <li><a href="https://mattiasdesmet.substack.com/p/my-speech-in-the-parliament-of-romania/comments" target="_blank">My Speech in the Parliament of Romania</a></li>
      <li><a href="https://mattiasdesmet.substack.com/p/podcast-with-naomi-wolf/comments" target="_blank">Podcast with Naomi Wolf</a></li>
      <li><a href="https://mattiasdesmet.substack.com/p/my-interview-with-tucker-carlson/comments" target="_blank">My Interview with Tucker Carlson</a></li>
      <li><a href="https://tessa.substack.com/p/real-talk-the-mother-of-all-psyops/comments" target="_blank">Real Talk: The Mother of All Psyops</a></li>
      <li><a href="https://keepingyouhonest.substack.com/p/the-abuse-of-administrative-power/comments" target="_blank">The abuse of administrative power with a psychopath grin in post-Soviet Estonia</a></li>
    </ul>
    <p><strong>WC.CSS team</strong> – thanks for this template which worked like placeholders just waiting to be filled with exactly the information that needed to be published. Inadvertently or not, can't blame you for a lack of insight.</p>
    <p id="download"><strong>The DigniTech framework versions so far:</strong></p>
    <ul>
      <li>StopMaltech-on-DigniTech (the StopMaltech functionality enhanced DigniTech framework) beta:
        <ul>
          <li><a href="https://stopmaltech.tennisekontakt.ee/" title="DigniTech demo site" target="_blank">Demo site</a></li>
          <li>GitHub (TODO)</li>
          <li>Download as zip file (TODO)</li>
        </ul>
      </li>
      <li>The DigniTech framework seed:
        <ul>
          <li><a href="https://dignitech.tennisekontakt.ee/" title="DigniTech demo site" target="_blank">Demo site</a></li>
          <li><a href="https://github.com/asulling/dignitech" title="DigniTech on GitHub" target="_blank">GitHub</a></li>
          <li><a href="<?php echo $downloads[ 'dignitech'] ?>" title="Download as zip file">Download as zip file</a></li>
        </ul>
      </li>
    </ul>
    <p>In summary, good luck with more coop for such indirect or direct exposés of extreme rationalist corruption, the leading murderer-thieves among us, and what not in the World Wide Web community for the police to catch up with, and feel free to use the DigniTech tool to turn such cooperation into self-defense against abusive schemings like the ones presented above if this tool is what you find handy for making your problem known like the one presented above, well capable of opening a great many eyes to notice and take action against the predators around the corner to make our common fight easier as a team effort.</p>
  </div>
</div>

<!-- End page content -->
</div>

<!-- Footer -->
<footer class="w3-center w3-light-grey w3-padding-48 w3-large">
  <p>Powered by <a href="https://www.w3schools.com/w3css/default.asp" title="W3.CSS" target="_blank" class="w3-hover-text-green">w3.css</a></p>
</footer>

<script>
// Tabbed Menu
function openMenu(evt, menuName) {
  var i, x, tablinks;
  x = document.getElementsByClassName("menu");
  for (i = 0; i < x.length; i++) {
    x[i].style.display = "none";
  }
  tablinks = document.getElementsByClassName("tablink");
  for (i = 0; i < x.length; i++) {
    tablinks[i].className = tablinks[i].className.replace(" w3-dark-grey", "");
  }
  document.getElementById(menuName).style.display = "block";
  evt.currentTarget.firstElementChild.className += " w3-dark-grey";
}
document.getElementById("myLink").click();
</script>

</body>