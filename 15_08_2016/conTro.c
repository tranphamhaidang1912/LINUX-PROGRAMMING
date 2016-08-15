#include <stdio.h>

void main()
{
	int x = 45;
	int *y = &x;
	*y = 92;
	printf("Giá trị của x là: %i\n", x);
}