<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xmlns:og="http://opengraphprotocol.org/schema/" xmlns:fb="http://www.facebook.com/2008/fbml" xml:lang="<?php print $language->language ?>" lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">
<head>
  <title><?php print $head_title; ?></title>
  <?php print $head; ?>
  <?php print $styles; ?>
  <?php print $scripts; ?>
</head>

<body class="<?php print $body_classes; ?> show-grid">
  
   <div id="wrapper">
    <div id="region-secondary-menu">
    <?php print $region_secondary_menu; ?>
    </div>

 

    <div id="header" class="container-12">
        <?php print $site_logo; ?>
        <?php print $tournament_logo; ?>
        <?php print $tournament_date; ?>
      
        <?php if ($region_city_menu): ?>
          <div id="region-city-menu">
          <?php print $region_city_menu; ?>
          </div>
        <?php endif; ?>

        <?php if ($region_main_menu): ?>
          <div id="region-main-menu">
          <?php print $region_main_menu; ?>
          </div>
        <?php endif; ?>        
    </div><!-- /header -->

    <?php if ($region_top): ?>
      <div id="region-top" class="region container-12">
      <?php print $region_top; ?>
      </div>
    <?php endif; ?>
       
    <div id="content" class="container-12 clear">
      <?php print $breadcrumb; ?>
      <?php if ($title && !$is_region): ?>
        <h1 class="title grid-12 al" id="page-title"><?php print $title; ?> </h1>
      <?php endif; ?>
      <?php if ($tabs): ?>
        <div class="tabs"><?php print $tabs; ?></div>
      <?php endif; ?>
      <?php print $messages; ?>
      <?php print $help; ?>
      <div id="main-content" class="grid-12 region">
        <?php print $content; ?>
      </div>
    </div><!-- /content -->

    <div id="secondary-content" class="clear">
      <div id="secondary-content-inner" class="container-12">
        <?php if ($region_middle): ?>
          <div id="region-middle" class="region grid-12">
          <?php print $region_middle; ?>
          </div>
        <?php endif; ?>
        <?php if ($region_middle_left): ?>
          <div id="region-middle-left" class="region grid-4">
          <?php print $region_middle_left; ?>
          </div>
        <?php endif; ?>
        <?php if ($region_middle_center): ?>
          <div id="region-middle-center" class="region grid-4">
          <?php print $region_middle_center; ?>
          </div>
        <?php endif; ?>
        <?php if ($region_middle_right): ?>
          <div id="region-middle-right" class="region grid-4">
          <?php print $region_middle_right; ?>
          </div>
        <?php endif; ?>
        <?php if ($region_bottom): ?>
          <div id="region-bottom" class="region grid-12">
          <?php print $region_bottom; ?>
          </div>
        <?php endif; ?>
      </div>
    </div><!-- /Secondary content -->
  
    <?php if ($footer_1 || $footer_2 || $footer_3 || $footer_4): ?>
    <div id="footer" class="clear">
      <div id="footer-inner">
        <ul id="footer-regions" class="container-12 clear">
            <?php if ($footer_1): ?>        
            <li class="region grid-3">
              <?php print $footer_1; ?>
            </li>
            <?php endif; ?>
            <?php if ($footer_2): ?>        
            <li class="region grid-3">
              <?php print $footer_2; ?>
            </li>
            <?php endif; ?>
            <?php if ($footer_3): ?>        
            <li class="region grid-3">
              <?php print $footer_3; ?>
            </li>
            <?php endif; ?>
            <?php if ($footer_4): ?>        
            <li class="region grid-3">
              <?php print $footer_4; ?>
            </li>
            <?php endif; ?>
        </ul>
	<?php if ($footer_message): ?>
          <div id="disclaimer" class="container-12 clear">
            <div id="disclaimer-inner">
              <p><?php print $footer_message; ?></p>
            </div>
          </div>
        <?php endif; ?>
      </div>
    </div><!-- /footer -->
    <?php endif; ?>

  </div><!-- /wrapper -->
  <?php print $closure; ?>
</body>
</html>
