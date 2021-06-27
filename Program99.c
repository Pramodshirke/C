#include<stdio.h>

void strcatX(char *src,char *dest)
{	
	if(src == NULL || dest==NULL)
	{
		return;
	}
	
		while(*dest != '\0')
	{
		dest++;
	}
	while(*src != '\0')
	{
		*dest=*src;
		src++;
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
	
	printf("Enter String\n");
	scanf(" %[^'\n']s",Brr);
	
	strcatX(Arr,Brr);
	
	printf("Copied String is: %s\n",Brr);
	printf("Copied String is: %s\n",Arr);
	
	return 0;
	
}