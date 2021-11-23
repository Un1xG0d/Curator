#!/bin/bash
#usage: bash curator.sh <model> <image_uri>

model=$1
image_uri=$2

generate_usdz () {
	uri_hash=$(echo -n $image_uri |openssl base64 -A)
	curl -s $image_uri -o models/$model/tmp/$uri_hash.png
	cp models/$model/tmp/$uri_hash.png models/$model/nft.png
	usdz_filename=models/"$model"/exports/"$uri_hash".usdz
	lib/usdzconvert/usdzconvert models/"$model"/"$model".fbx $usdz_filename
	rm -rf models/$model/tmp/$uri_hash.png
}

if [ $model = "wood_block" ]
then
	generate_usdz
elif [ $model = "easel" ]
then
    generate_usdz
else
    echo "Failed"
fi