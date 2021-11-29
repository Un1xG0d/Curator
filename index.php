<!DOCTYPE html>
<head>
  <meta charset="utf-8">
  <meta name="viewport" content="initial-scale=1.0, maximum-scale=1.0, user-scalable=no" />
  <title>Curator</title>
  <link rel="stylesheet" href="styles.css">
</head>
<body>
  <center>
    <form name='form' method='post' action="index.php">
      <input type="text" name="opensea_url" id="opensea_url" placeholder="OpenSea link:">
      <br>
      <br>
      <button type="submit" name="model" id="model" value="easel">
        <img class="thumbnail_image" src="img/thumbnail_easel.png">
        <div>Easel</div>
      </button>
      <button type="submit" name="model" id="model" value="wood_block">
        <img class="thumbnail_image" src="img/thumbnail_wood_block.png">
        <div>Wooden block</div>
      </button>
    </form>
  </center>
  <?php
  $context = stream_context_create(
    array(
      "http" => array(
          "header" => "Mozilla/5.0 (iPhone; CPU iPhone OS 12_0 like Mac OS X) AppleWebKit/604.1.38 (KHTML, like Gecko) Version/12.0 Mobile/15A372 Safari/604.1"
      )
    )
  );

  if (!empty($_POST['model']) && !empty($_POST['opensea_url'])){
    $model=$_POST['model'];
    $opensea_url=$_POST['opensea_url'];
    $url_parts=explode("/", $opensea_url);
    $token_id=$url_parts[count($url_parts)-1];
    $contract_address=$url_parts[count($url_parts)-2];
    $opensea_api_url="https://api.opensea.io/api/v1/asset/$contract_address/$token_id/?format=json";
    $metadata = json_decode(file_get_contents($opensea_api_url, false, $context), true);
    $image_uri=$metadata["image_original_url"];
    shell_exec(". /var/www/html/lib/.bashrc && cd /var/www/html/ && bash curator.sh $model $image_uri");
    echo "<script type='text/javascript'>window.location = 'models/$model/exports/".base64_encode($image_uri).".usdz'</script>";
  }
  ?>
  <script type='text/javascript'>
    document.getElementById("opensea_url").focus();
  </script>
</body>
</html>