#!/bin/sh

echo "Cac thu muc con trong thu muc $1:"
cd $1
#for thumuc in $(ls -l $1 | grep '^d' | awk '{print $9}')
for thumuc in $(ls -d */)
do
	echo $thumuc	
done