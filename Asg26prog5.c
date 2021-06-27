#include<stdio.h>

int CopySmall(char *src,char *dest)
{
	if(src==NULL || dest==NULL)
	{
		return 0;
	}
	
	while(*dest != '\0')
	{
		dest++;
	}

	while(*src != '\0')
	{
       *dest=*src;
		dest++;
		src++;
	}
	*dest='\0';
}
int main()
{
	char Arr[40];
	char Brr[40];
	
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter Another String\n");
	scanf("%[^'\n']s",Brr);
	
	CopySmall(Arr,Brr);
	
	printf("Concatinated String is:\n%s",Brr);
	
	return 0;
}