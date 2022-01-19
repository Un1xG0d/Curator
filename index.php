<!DOCTYPE html>
<head>
  <meta charset="utf-8">
  <meta name="viewport" content="initial-scale=1.0, maximum-scale=1.0, user-scalable=no" />
  <title>Curator</title>
  <link rel="stylesheet" href="styles.css">
  <link rel="apple-touch-icon" href="img/logo.jpg">
</head>
<body>
  <center>
    <br>
    <div class="card shadow">
      <span style="font-size: 25px;">Using </span><span style="font-size: 35px;">Curator</span><span style="font-size: 25px;"> is easy!</span>
      <ul>
        <li>Copy the link to your token on OpenSea.</li><br>
        <li>Paste the link into the text box below.</li><br>
        <li>Tap the 3D model you want to generate.</li><br>
        <li>Aim your iPhone at a flat surface (like a table or the floor) and let the camera stabilize.</li>
      </ul> 
    </div>
    <br>
    <form method="post" action="">
      <input type="text" name="opensea_url" id="opensea_url" placeholder="OpenSea link:">
      <br>
      <br>
      <button type="submit" name="model" id="model" value="easel">
        <img class="thumbnail_image" src="img/thumbnail_easel.png">
        <div>Easel</div>
      </button>
      <button type="submit" name="model" id="model" value="picture_frame">
        <img class="thumbnail_image" src="img/thumbnail_picture_frame.png">
        <div>Picture frame</div>
      </button>
      <button type="submit" name="model" id="model" value="">
        <img class="thumbnail_image" src="img/thumbnail_placeholder.png">
        <div>Treasure chest</div>
      </button>
      <button type="submit" name="model" id="model" value="wood_block">
        <img class="thumbnail_image" src="img/thumbnail_wood_block.png">
        <div>Wooden block</div>
      </button>
    </form>
  </center>
  <?php
  if (!empty($_POST['model']) && !empty($_POST['opensea_url'])){
    $model=$_POST['model'];
    $opensea_url=$_POST['opensea_url'];
    $url_components=explode("/", $opensea_url);
    $token_id=$url_components[count($url_components)-1];
    $contract_address=$url_components[count($url_components)-2];
    $opensea_api_url="https://api.opensea.io/api/v1/asset/$contract_address/$token_id/?format=json";
    $user_agent=$_SERVER['HTTP_USER_AGENT']??null;
    ini_set('user_agent', $user_agent);
    $metadata=json_decode(file_get_contents($opensea_api_url), true);
    $image_uri=$metadata["image_url"];
    shell_exec("cd /var/www/html/ && bash curator.sh $model $image_uri");
    echo "<script type='text/javascript'>window.location = 'models/$model/exports/".base64_encode($image_uri).".usdz'</script>";
  }
  ?>
</body>
</html>