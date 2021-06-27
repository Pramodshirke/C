#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

void OpenFile(char Name[])
{
	int fd;
	
	fd=open(Name,O_RDONLY);
	
    if(fd==-1)
	{
		printf("Unable to open File\n");
	}
	else
	{
		printf("File Opened Succesfully\n");
	}
	
	close(fd);
}
int main()
{
	char str[30];
	
	printf("Enter Name Of File\n");
	scanf("%[^'\n']s",&str);
	
	close(fd);
	return 0;
}