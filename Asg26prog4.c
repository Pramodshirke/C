#include<stdio.h>

int CopySmall(char *src,char *dest)
{
	if(src==NULL || dest==NULL)
	{
		return 0;
	}
	
	while(*src != '\0')
	{
		if((*src>='a') && (*src<='z'))
		{
			*dest=*src;
		    dest++;			
		}

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
	
	CopySmall(Arr,Brr);
	
	printf("Small Letters in String are:\n%s",Brr);
	
	return 0;
}