<!DOCTYPE html>
<head>
  <title>Curator</title>
  <meta charset="utf-8">
  <meta name="viewport" content="initial-scale=1.0, maximum-scale=1.0, user-scalable=no" />
  <link rel="stylesheet" href="styles.css">
  <link rel="apple-touch-icon" href="img/logo.jpg">
</head>
<body>
  <center>
    <br>
    <div class="card shadow">
      <span style="font-size: 25px;">Using </span><span style="font-size: 35px;">Curator</span><span style="font-size: 25px;"> is easy!</span>
      <ul>
        <li>Copy your token's link/identifier.</li><br>
        <li>Paste it into the text box below.</li><br>
        <li>Tap the 3D model you want to generate.</li><br>
        <li>Aim your iPhone at a flat surface (like a table or the floor) and let the camera stabilize.</li>
      </ul>
    </div>
    <br>
    <button class="change_blockchain_button" id="change_blockchain_button">Change blockchain</button>
    <div id="modal" class="modal">
      <div class="modal-content">
        <button class="blockchain_button" onclick="set_blockchain('opensea')">OpenSea</button>
        <button class="blockchain_button" onclick="set_blockchain('wax')">Wax</button>
      </div>
    </div>
    <br>
    <form method="post" action="">
      <input type="text" name="opensea_url" id="opensea_url" placeholder="OpenSea token URL:">
      <input type="text" name="wax_id" id="wax_id" placeholder="Wax asset ID:" style="display:none">
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
  <script>
    document.getElementById("change_blockchain_button").onclick = function() {
      document.getElementById("modal").style.display = "block";
    }

    function set_blockchain(chain) {
      document.getElementById("modal").style.display = "none";
      if (chain == "opensea") {
        document.getElementById("opensea_url").style.display = "";
        document.getElementById("wax_id").style.display = "none";
        document.getElementById("wax_id").value = "";
      } else if (chain == "wax") {
        document.getElementById("wax_id").style.display = "";
        document.getElementById("opensea_url").style.display = "none";
        document.getElementById("opensea_url").value = "";
      }
    }
  </script>
  <?php
  $stripped_chars=array("#", "&", "<", ">", ";", "*", " ", "'", "\"", "\$");
  if (!empty($_POST["model"]) && !empty($_POST["opensea_url"])){
    $model=str_replace($stripped_chars, "", $_POST["model"]);
    $opensea_url=str_replace($stripped_chars, "", $_POST["opensea_url"]);
    $url_components=explode("/", $opensea_url);
    $token_id=$url_components[count($url_components)-1];
    $contract_address=$url_components[count($url_components)-2];
    $opensea_api_url="https://api.opensea.io/api/v1/asset/$contract_address/$token_id/?format=json";
    $user_agent=$_SERVER["HTTP_USER_AGENT"]??null;
    ini_set("user_agent", $user_agent);
    $metadata=json_decode(file_get_contents($opensea_api_url), true);
    $image_uri=$metadata["image_url"];
    shell_exec("cd /var/www/html/ && bash curator.sh $model $image_uri");
    echo "<script type='text/javascript'>window.location = 'models/$model/exports/".base64_encode($image_uri).".usdz'</script>";
  }

  if (!empty($_POST["model"]) && !empty($_POST["wax_id"])){
    $model=str_replace($stripped_chars, "", $_POST["model"]);
    $wax_id=str_replace($stripped_chars, "", $_POST["wax_id"]);
    $wax_api_url="https://wax.api.atomicassets.io/atomicassets/v1/assets/$wax_id";
    $user_agent=$_SERVER["HTTP_USER_AGENT"]??null;
    ini_set("user_agent", $user_agent);
    $metadata=json_decode(file_get_contents($wax_api_url), true);
    $image_uri="https://ipfs.io/ipfs/".$metadata["data"]["data"]["img"];
    shell_exec("cd /var/www/html/ && bash curator.sh $model $image_uri");
    echo "<script type='text/javascript'>window.location = 'models/$model/exports/".base64_encode($image_uri).".usdz'</script>";
  }
  ?>
</body>
</html>