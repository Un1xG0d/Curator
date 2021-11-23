#!/bin/bash
#usage: bash curator.sh <model> <image_uri>
#example: bash curator.sh wood_block https://ipfs.io/ipfs/QmQHrJuvjKSsa3BDd8BVhHFKExjy61vJQ2EuZ27TzEj7ed

model=$1
image_uri=$2

if [ $model = "wood_block" ]
then
	uri_hash=$(echo -n $image_uri |openssl base64 -A)
	curl -s $image_uri -o models/$model/tmp/$uri_hash.png
	cp models/$model/tmp/$uri_hash.png models/$model/nft.png
	usdz_filename=models/"$model"/exports/"$uri_hash".usdz
	lib/usdzconvert/usdzconvert models/"$model"/"$model".fbx $usdz_filename
	rm -rf models/$model/tmp/$uri_hash.png
elif [ $model = "test" ]
then
    echo "Test passed"
else
    echo "Failed"
fi