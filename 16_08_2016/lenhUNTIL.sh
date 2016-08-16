#!/bin/sh

foo=1
until [ $foo -eq 10 ]
do
	echo "Here $foo"
	foo=$(($foo+1))
done
exit 0