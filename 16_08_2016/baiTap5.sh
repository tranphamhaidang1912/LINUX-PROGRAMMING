#!/bin/sh

echo "Chu cai dau tien trong bang chu cai?"
echo "A: C\tB: D\nC: A\tD: B"
read ans

case $ans in
	"A" | "a" | "B" | "b" | "D" | "d" )
	echo "That tiec, do la dap an sai"
	;;
	"C" | "c" )
	echo "Xin chuc mung, do la dap an dung"
	;;
	* )
	echo "Vui long chi chon 1 trong 4 dap an: A, B, C, D"
	exit 1
	;;
esac