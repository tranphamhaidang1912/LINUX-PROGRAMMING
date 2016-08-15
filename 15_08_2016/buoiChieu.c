#include <stdio.h>

void main()
{
	char ans;
	int kt = 1;
	do
	{
		printf("Hom nay la buoi chieu dung khong?\nY/N:");
		scanf("%c",&ans);
		if(ans == 'Y' || ans == 'y')
		{
			printf("Chao buoi chieu\n");
			kt = 0;
		}
		else if(ans == 'N' || ans == 'n')
		{
			printf("Khong\n");
			kt = 0;
		}
	} while(kt == 1);
}