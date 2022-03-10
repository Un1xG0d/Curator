# Curator
Use augmented reality to transform your room into a museum for interactively viewing your NFT collection. Curator generates custom ARKit experiences from your personal NFTs.

## Video demo
[Watch on YouTube](https://youtu.be/Vkl_d8XTU5U)

## Usage
1. View your token on the OpenSea website/app.
2. Copy the entire URL to your clipboard.
3. Paste it into the specified textfield on Curator’s homepage.
4. Tap the 3D model you want to customize.
5. Aim your iPhone at a flat surface (like a table or the floor) and let the camera stabilize.

## Technical details
Curator is a [Dockerized](https://docs.docker.com/) web application that can load an [NFT](https://en.wikipedia.org/wiki/Non-fungible_token) onto a collection of 3D models.

[Blender](https://www.blender.org/) is used to pre-build the 3D models and texture them with a placeholder NFT image. All image textures must be stored in the `/var/www/html/models/<model_name>/` directory while building & exporting the model. Any mesh intended to hold the user’s NFT image should be textured with a placeholder image named `nft.png` in that same directory.  The model is exported to an [FBX](https://www.autodesk.com/developer-network/platform-technologies/fbx-sdk-2020-0) file with the filename `<model_name>.fbx`. Once the export is complete, the entire `<model_name>` folder can be copied from `/var/www/html/models/` to the `models/` directory of your Curator project.

Curator’s web application is built with PHP and is used to collect an OpenSea URL and a desired model from the user. It parses the input to determine the contract address and token ID. A query is made to the [OpenSea API](https://docs.opensea.io/reference/api-overview) to gather the token’s metadata and locate the URL of the NFT’s image. The model name and image URL are passed to `curator.sh` via `shell_exec()`.

This bash script downloads the NFT’s image and uses it to overwrite `nft.png` for the selected model. When the FBX file is then converted to a [USDZ](https://developer.apple.com/augmented-reality/quick-look/), it will pull the current contents of `nft.png` and generate the USDZ file with the user’s NFT image instead of the placeholder image.

The generated USDZ model can then be viewed on any iPhone that supports ARKit.

## Deploy container to Heroku
```
heroku container:login
heroku labs:enable --app nftcurator runtime-new-layer-extract
heroku container:push web --app nftcurator
heroku container:release web --app nftcurator
```