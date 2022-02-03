#!/bin/bash

model=$1
image_uri=$2
. /var/www/html/lib/.bashrc
encoded_uri=$(echo -n $image_uri |openssl base64 -A)
curl -s $image_uri -o models/$model/tmp/$encoded_uri.png
cp models/$model/tmp/$encoded_uri.png models/$model/nft.png
lib/usdzconvert/usdzconvert models/$model/$model.fbx models/$model/exports/$encoded_uri.usdz > /dev/null 2>&1
chmod u+w tmp/*
lib/usdzconvert/usdzconvert models/$model/$model.fbx models/$model/exports/$encoded_uri.usdz
rm -rf models/$model/tmp/$encoded_uri.png