# Curator
Use augmented reality to transform your room into a museum for interactively viewing your NFTs.

## Build Docker container
```
docker build -t site:latest .
docker run -d -p 80:80 site:latest
```

## Usage
1. View your token on the OpenSea iOS app.
2. Tap the **Share** button and copy the URL to your clipboard.
3. Paste the URL into the specified textfield on Curator’s index page.
4. Select the 3D model you want to customize.
5. Tap the **View in AR** button to generate your USDZ file.
6. Aim your iPhone at a flat surface (like a table or the floor) and let the camera stabilize.