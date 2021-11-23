#!/bin/bash
#usage: bash curator.sh <model> <image_uri>

model=$1
image_uri=$2

uri_hash=$(echo -n $image_uri |openssl base64 -A)
curl -s $image_uri -o models/$model/tmp/$uri_hash.png
cp models/$model/tmp/$uri_hash.png models/$model/nft.png
lib/usdzconvert/usdzconvert models/$model/$model.fbx models/$model/exports/$uri_hash.usdz
rm -rf models/$model/tmp/$uri_hash.png