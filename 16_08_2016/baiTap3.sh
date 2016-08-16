#!/bin/sh

tongLe=0
for i in `seq 0 1510`
do
	if [ `expr $i % 2` -ne 0 ]; then
		tongLe=`expr $tongLe + $i`
	fi
done
echo "Tong cac so le trong doan 0 - 1510 = $tongLe"