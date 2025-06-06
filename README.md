# DigniTech

DigniTech is an ultra light web development framework for presenting self-defensive content against the abuse of administrative power, canceling dissent, and other [extreme rationalist](https://mattiasdesmet.substack.com/p/the-de-souling-of-the-world-the-veil) crime cover-up attacks in complementary landing page format to support the counter-canceling of totalitarian scums.

This framework can be used for many other good and reasonable purposes too, but this was the initial reason to come up with this tool on GitHub.

## Description

The DigniTech tool was initially developed for counter-canceling specific cases of extreme rationalist terrorism which at Maltech (the ideologically hijacked Tallinn University of Technology) and elsewhere in Estonia in about 2018-2020 culminated in a comprehensive witch hunt for apparently suppressing dissent to an ambitious administrative power grab of quite a brutal totalitarian stripe. However, as the canceling of innocent and rightfully disobedient people by means of provocation attacks, fabricated false accusations, and other forms of extreme rationalist terror to leave them jobless (or dead as such schemings quickly escalated into a global killer jab obedience blackmail scamdemic of the international financial terrorists in 2020) and their valuable careers shattered have become a major concern in many other technocratic parts of the Western World as well, the DigniTech tool can help solve such problems outside Maltech and Estonia, too. Knowing about the problem is often half of the solution -- that's why. And another practical fact to keep in mind when looking for working solutions is that while finding peaceful solutions should always be a priority, the numerous bastard-mode individuals among us don't understand anything above the counter-canceling level of finding one, unfortunately, so in order not to waste your time writing self-defense stories to go ignored, you should have a Plan B for counter-canceling the sources of the mayhem when needed, too.

Earlier self-defense included intervention from the Sports and Youth Department of the Tallinn City Government in 2008, for example, after having been notified by a student community under attack of an obvious abusive scheming set up by the Maltech administration against the students asked for help for hijacking the administration of the renovated university tennis court as a result of the competence and work of this community according to a contract protecting these results. The idea of the scheming was apparently to demolish the fence of the court (using a fabricated pretext of building an additional tennis court right next to it-- which wasn't enough to fool everyone though -- to cover up the incompetence, ineptitude, and stagnation dominating the High Heavens of Maltech) freshly built with no input from the university administration as a result of the contacts and know-how of the student community that the Head of the Sports Club Tennis Department had literally begged for help to rescue the tennis court on campus. However, this help didn't eliminate the root cause of the problem, unfortunately, so the corruption at Maltech -- which is prone to turn into fatal cases for capable and accommodating students among many other criminal alternatives -- is now being tackled publicly in front of a worldwide audience as an extra kick for the police to do something about such abusive schemings against the students of Tallinn Tech among other victims of the ideological colonization driven hijacking of public space in Estonia by the extreme rationalist terrorists who dominate the Maltech administration after a, say, billmasonic paradigm shift introduced at Maltech by Microsoft about a decade before the scamdemic years started worldwide, which the police in Estonia claim is "out of their competence". Wish them better luck this time.

A more thorough overview about extreme rationalist terrorism describing the accompanying abusive schemings at Maltech and the hijacking ambitions of its administration have been published on Substack:

* [The abuse of administrative power with a psychopath grin in post-Soviet Estonia](https://keepingyouhonest.substack.com/p/the-abuse-of-administrative-power)

## Getting Started

### A self-defense/counter-canceling website setup instructions for dummies, a disclaimer, and a little warning

If you by and large understand the basic idea behind the following instructions, you should be safe installing the DigniTech framework seed to come up with your own self-defense story on the Internet.

However, the author doesn't want to take any responsibility for the non-existent limits of, well, user creativity when it comes to unbelievable things that can go wrong, so if you screw up anything then you are on your own, alright. Other than that, the following procedure should be straightforward, easy to follow and lead to smoothly working results without much effort.

The style of the following set of instructions will be irritating for many of you, most probably, but as some of the poor dissidents among us being ideologically persecuted might be relatively computer-illiterate in some cases, and maybe have only a relatively small percentage of their brains working in panic mode, I hope you bare with this inconvenience to accommodate a community of, say, ideological persecution targets with induced disabilities, and thanks for being considerate of them.

### Installing a minimal web development environment and generating the presentation of your story

* Before uploading your self-defense story to a website, you need to set up a webserver on your computer, download the DigniTech framework seed to prepare the story for presentation, modify this framework to meet the needs of your story, download an SCSS stylesheet generator, and generate stylesheets for styling the presentation of your story. Composing your story will be left for you to experiment with, so we'll start with the setup and download instructions, and continue with a little how-to for generating the stylesheets here.

* Install a web server on your computer and run it. If you have a Windows machine then you can install XAMPP, for example: [https://www.apachefriends.org/download.html](https://www.apachefriends.org/download.html)

* You can download DigniTech as source code from here on GitHub or as a zip file from the [DigniTech demo website](https://dignitech.tennisekontakt.ee/#download). Download (and unpack if you downloaded the zip file version) the folder "dignitech" to your computer and place it under the document root of the web server installed in the previous step (C:\xampp\htdocs\ if you have Windows and installed XAMPP, for example). For everything to work without configuration at https://localhost/dev.localhost/dignitech/access/ for testing, you can make a new directory "dev.localhost" under the document root and place the downloaded framework folder there; otherwise you should modify the dignitech/content/assembly/conf/content-base.php file accordingly. Open the index file of the framework in your browser (https://localhost/dev.localhost/dignitech/access/index.php in the above described case, for example) to see the sample landing page. You are now ready to turn this landing page into the presentation of your own self-defense story.

* For generating stylesheets from the designs you have modified, i.e. from the *.scss files in the dignitech\style-gen\source folder, download [dart-sass from GitHub](https://github.com/sass/dart-sass/releases/tag/1.89.0), unpack it and place the result in this folder. For a typical Windows machine nowadays, [this zip file](https://github.com/sass/dart-sass/releases/download/1.89.0/dart-sass-1.89.0-windows-x64.zip) would be the right one to download from there.

* After the download and modifying the files to meet the needs of your story, open the C:\xampp\htdocs\dignitech\style-gen\source folder [in the Windows command prompt](https://www.wikihow.com/Open-a-Folder-in-Cmd) if your computer is running Windows, for example, or wherever you moved the dignitech folder, and run the following commands:
```
C:\xampp\htdocs\dev.localhost\dignitech\style-gen\source> dart-sass\sass.bat w3-overlay.scss ..\w3-overlay.css
C:\xampp\htdocs\dev.localhost\dignitech\style-gen\source> dart-sass\sass.bat dt-framework.scss ..\dt-framework.css
C:\xampp\htdocs\dev.localhost\dignitech\style-gen\source> dart-sass\sass.bat dt-content.scss ..\dt-content.css
```
Move the newly generated dignitech\style-gen\dt-content.css file to the dignitech\content\resources\style folder, and the dignitech\style-gen\w3-overlay.css and dignitech\style-gen\dt-framework.css files to the dignitech\framework\resources\style folder, and refresh the browser cache (ctrl+shift+F5 in most browsers).

Under Linux and suchlike, you should be able to easily figure out how to do it all on your own. This little tutorial is for profound dummies only.

That's it -- you should now see your story styled appropriately at (https://localhost/dev.localhost/dignitech/access/index.php) in your browser.

### Getting access to an online web server and deploying your self-defense story

* Get a domain name (yourcountercancelingstory.net, for example) and a web hosting plan, and point the domain to your web hosting provider. For examole, buying a basic web hosting plan from [hostinger.com](https://hostinger.com) comes with pretty much everything you need configured for you, and they have a well-functioning customer support team, too. For a few headaches (downtimes, no replies to requests for help, and suchlike), there are free hosting plans available from providers like [freehosting.com](https://freehosting.com) if just a couple dollars per month or a little bit more doesn't work out in your situation.

* To deploy the presentation of your story from the web server on your computer (development machine) to the web server of your web hosting provider (production server), you should log in at their website, open File Manager or similar, navigate to the directory public_html/ (or public_html/yourcountercancelingstory.net/ if you chose to place your story under a subdomain and you can see such a directory in public_html) or wherever you want to have your story deployed (referred to as "root location" in the following), and choose "Upload directory" or similar from the menu bar above to upload the DigniTech framework seed folder. As an example of creating a subdomain before the upload, the DigniTech demo running on the Hostinger web hosting service was downloaded to the root of the dignitech.tennisekontakt.ee subdomain, resulting in the folder "/public_html/dignitech/dignitech" (the "/public_html/dignitech" part being the root location and the additional "/dignitech" part corresponding to the uploaded folder) in the file system (at the moment of this writing, you can find the page for creating subdomains at Hostinger, for example, by selecting "Manage" next to your root domain on the post-login landing page after a successful login, and then scrolling down to and clicking on "Domains" and "Subdomains"). The instructions below assume that you have a subdomain set up this way at Hostinger and use it as a root location, but other deployment solutions involving either a subdomain or a domain should be implemented very similarly.

* After the upload, you can change current directory to public_html/dignitech/dignitech/access and move the index.php file in there to the public_html/dignitech folder, for example, by right-clicking on the index file, choosing "Move file" from the pop-up menu, double-clicking on ".." twice, and pressing the "MOVE" button, and remove the ../content/assembly/ prefix from the path to the content-base.php file in this index file (double-click on the index file to open it for editing). Save and exit the index file, navigate to the content base configuration file described by the path you just edited (dignitech/content/assembly/conf/content-base.php), open it for editing, and edit at least the WEB_ROOT and INC_ROOT configuration parameters (remove the /dev.localhost and dev.localhost/ parts and the /dignitech and dignitech/ parts from the APP_ROOT path and the two paths already mentioned, both in INC_ROOT) to match your case (the define-statement lines with these three configuration parameters in the first position, and the line NOT starting with "//" (meaning "comment out"), to be precise, and likewise in all the following examples, too). You can see how these three path definitions look like in the commented out lines above in the configuration file.

* It is a good idea to place only the CONTENTS of the subfolder "resources" in both the dignitech/content and dignitech/framework folders to a publicly accessible directory on the web server. These contents should preferably be moved to the root location, probably, so just replace 'content/resources/' with '' in the CONTENT_RESOURCES_ROOT definition. Save and exit the content base conf file and do so in the framework base configuration, too (set the last part of the FRAMEWORK_RESOURCES_ROOT path constant definition in the dignitech/framework/assembly/conf/framework-base.php file to '', that is).

* Now, of course, you need to actually move these fles you just described in the configuration by navigating to their parent directories and right-clicking on them (the folders "images" and "style" in dignitech/content/resources folder, and the folder "graphics" in dignitech/framework/resources folder) to follow the move-procedure described in the next-previous step already to place these folders in the root location (double-click on ".." three times here + MOVE). As for the style folder in the framework resources folder, you can just move the CONTENTS of it to the style folder you already moved from the content resources folder as long as you've managed to keep the names of all your stylesheets distinct to do a merge in the folder "style" that already exists in the root location.

* Regarding the contents of the "assembly" subfolders in both the dignitech/content and dignitech/framework folders, it would actually be a good idea to place them outside the document root of the web server for security reasons, but as a dummy file named DO_NOT_UPLOAD_HERE has been placed outside the public_html directory (document root on Linux machines, that is), let's just move-and-merge to the root location again the folders "conf" and "inc" from both these subfolders analogically to what was described in the previous two steps (merge each of these folders like you merged the style folders, that is), and just move to the same destination the "lib" folder from the framework assembly folder. And in the content base configuration file again, find the lines NOT starting with "//" and containing the definitions of the path constants CONTENT_ASSEMBLY_ROOT and FRAMEWORK_ASSEMBLY_ROOT, and replace '/framework/assembly' in both of these definitions with '' to complete the configuration accordingly.

* You can now delete (right-click on folder name + "Delete") the downloaded folder "dignitech" together with the style-gen folder -- whatever it contains -- and all the emptied folders in it, and navigate to the root location of your self-defense story to see it online in your browser at yourcountercancelingstory.net, for example. If you don't see it then make sure that you have a "conf" folder (with 3 files in it), a "graphics" folder (2 folders with 1 file each), an "images" folder (2 files), an "inc" folder (2 files), a "lib" folder (1 file), and a "style" folders (4 files), and an index file in your root location, and haven't made any typos when editing the configuration files. If still in trouble then delete all uploaded files, and upload and follow these instructions again, and the landing page should work. After distributing the link to the website published like this, your story will be making the necessary rounds, hopefully. Congrats for being in the position of getting noticed and the attention due now!

## Help

If the instructions provided above aren't sufficient for some mysterious reason then additional help is available for getting critical content online for an additional fee. Please read the sample presentation that comes with the DigniTech demo for more information.

## Authors

Andres Sulling

Founder of the Tennise Kontakt (Tennis Contacts) clay court rescue and management system and community at Tallinn University of Technology as well as off campus

## Version History

* (coming soon) 0.2
    * StopMaltech-on-DigniTech (the StopMaltech functionality enhanced DigniTech framework)
    * Multilanguage support and content pagination features
* 0.1
    * Initial Release (the DigniTech framework seed)

## License

DigniTech is licensed as free software. You can find more information about the idea of free software on the [GNU website](https://www.gnu.org/), for example.

## Acknowledgments

Writing self-defense/counter-canceling stories and frameworks to support it is not something pleasant to do. I would like to thank the authors of the following sample nine Substack posts who have been most inspirational and helped get this part done properly:
* https://petermcculloughmd.substack.com/p/grant-stinchfield-exposes-dr-fauci
* https://tessa.substack.com/p/alleged-medical-murder-helena-krizek
* https://alilybit.substack.com/p/what-the-f-is-going-on
* https://mattiasdesmet.substack.com/p/the-de-souling-of-the-world-the-veil
* https://petermcculloughmd.substack.com/p/bill-gates-finally-held-accountable
* https://petermcculloughmd.substack.com/p/death-of-an-open-ai-whistleblower
* https://rwmalonemd.substack.com/p/ukraine-biolabs-update
* https://amirpars.substack.com/p/farewell-sweden-my-beloved-country
* https://theworkofwomen.substack.com/p/feminine-opposition-to-porn-is-not
