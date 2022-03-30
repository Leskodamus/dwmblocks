#!/bin/sh

mem=`free --mebi | sed -n '2{p;q}' | awk '{printf ("%2.2fGB", ( $3 / 1024))}'`
icon=" "

echo " $icon$mem "
