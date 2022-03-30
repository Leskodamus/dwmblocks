#!/bin/sh

gpu=`optimus-manager --print-mode | grep 'Current GPU mode' | awk '{print $5}'`
gpu_change=`optimus-manager --status | grep 'GPU mode requested' | awk '{print $8}'`

if [ $gpu == "hybrid" ]; then
	icon=" "
elif [ $gpu == "intel" ]; then
	icon=" "
fi

if [ $gpu_change != "no" ]; then
	echo " $icon$gpu->$gpu_change "
else 
	echo " $icon$gpu "
fi
