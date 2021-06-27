#include<stdio.h>

void strcpyXX(char *src,char *dest)
{	
	if(src == NULL || dest==NULL)
	{
		return;
	}
	
	while(*src != '\0')
	{
		if((*src>='a') && (*src<='z'))
		{
			*dest=*src - 32;
		}
		else
		{
		    *dest=*src;	
		}
		
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
	
	strcpyXX(Arr,Brr);
	
	printf("Copied String is: %s\n",Brr);
	printf("Copied String is: %s\n",Arr);
	
	return 0;
	
}