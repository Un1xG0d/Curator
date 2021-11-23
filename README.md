# Curator
Use augmented reality to transform your room into a museum for viewing your NFT collection.

## Manual USDZ generation
```
bash curator.sh <model> <image_uri>
```

## Docker
```
docker build -t site:latest .
docker run -d -p 80:80 site:latest
```
