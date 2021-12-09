# Curator
Use augmented reality to transform your room into a museum for interactively viewing your NFTs.

## Build Docker container
```
docker build -t curator:latest .
docker run -d -p 80:80 curator:latest
```

## Usage
1. View your token on the OpenSea website or iOS app.
2. Tap the **Share** button and copy the URL to your clipboard.
3. Paste the URL into the specified textfield on Curator’s index page.
4. Tap the 3D model you want to customize.
5. Aim your iPhone at a flat surface (like a table or the floor) and let the camera stabilize.