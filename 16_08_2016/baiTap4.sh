#!/bin/sh

echo "Nhap mau khau"
read matKhau

while [ $matKhau != $1 ]; do
	echo "Sai mat khau, vui long nhap lai"
	read matKhau
done