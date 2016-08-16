#!/bin/sh

echo "Nhap vao mot so bat ki:"
read so

if [ `expr $so % 2` -eq 0 ]
	then
	echo "$so la so chan"
else
	echo "$so la so le"
fi
