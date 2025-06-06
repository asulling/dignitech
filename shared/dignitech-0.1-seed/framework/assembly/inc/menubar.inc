<!-- Links (sit on top) -->
<?php if($to_be_displayed['menu']): ?>
<div class="w3-top w3-top-patch">
  <div class="w3-row-xpatch">
<?php foreach($menubar->get() as $key => $vals): ?>
    <div class="w3-col-xpatch">
      <a href="<?php echo $vals[ 'link'] ?>" class="w3-button w3-button-patch w3-block w3-black<?php if ($vals[ 'focus']): ?> dt-focus<?php endif ?>"<?php if ($vals[ 'popup']): ?> target="_blank"<?php endif ?>><?php echo $vals[ 'title'] ?></a>
    </div>
<?php endforeach ?>
  </div>
<?php if($to_be_displayed['arrow']): ?>
  <div id="dt-rotate-screen-icon-container">
    <img src="<?php echo $inserts[ 'images'][ 'rotate'] ?>">
  </div>
<?php endif ?>
</div>
<?php endif ?>
