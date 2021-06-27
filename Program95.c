#include<stdio.h>

void strcpyRev(char *src,char *dest)
{	
    char *start;
	
	if(src == NULL || dest==NULL)
	{
		return;
	}
	start=src;
	
	while(*src != '\0')
	{
		src++;
	}
	src--;
	
	while(src != (start-1))
	{
		*dest=*src;
		src--;
		dest++;
	}
	*dest='\0';
}
int main()
{   
	char Arr[40];
	char Brr[40];
	
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	strcpyRev(Arr,Brr);
	
	printf("Copied String is: %s\n",Brr);
	
	return 0;
	
}