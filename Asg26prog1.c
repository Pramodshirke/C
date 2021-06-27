#include<stdio.h>

int Reverse(char *src,char *dest)
{	
	if(src == NULL)
	{
		return 0;
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
	char Arr[40]="Mravellous Infosystems";
	char Brr[40];
	
	Reverse(Arr,Brr);
	
	printf("Copied String is: %s",Brr);
	
	return 0;
	
}