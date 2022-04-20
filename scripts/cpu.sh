#!/bin/sh

cpu=`top -b -n1 | grep "Cpu(s)" | awk '{print $2 + $4}'`
icon=" "

echo " $icon$cpu% "
