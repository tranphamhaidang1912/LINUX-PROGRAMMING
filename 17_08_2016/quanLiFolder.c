#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
	int select;
	printf("1/Add a new folder\n2/Add or Remove a file\n3/Edit file\n4/Show and Arrange file in folder\n");
	scanf("%d", &select);
	
	switch(select)
	{
		case 1:
		{
			char folderName[100];
			printf("Input folder's name:\n");
			getchar();
			gets(folderName);
			mkdir(folderName);
			break;
		}
		case 2:
		{
			printf("1/Add a new file\n2/Remove a file\n");
			scanf("%d",&select);
			char fileName[100];
			printf("Input file's name\n");
			getchar();
			gets(fileName);
			switch(select)
			{
				case 1:
				{
					open(fileName, O_RDWR | O_CREAT);
					break;
				}
				case 2:
				{
					remove(fileName);
					break;
				}
			}
			
			break;
		}
	}
	return 0;
}