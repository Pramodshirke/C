#include<stdio.h>

void DisplayDigits(char str[])
{
	
	if(str==NULL)
	{
		return;
	}
	
	printf("Digits Are:\n");
	while(*str != '\0')
	{
		if((*str>='0') && (*str<='9'))
		{
		    printf("%c",*str);
		}
		str++;
	}
}
int main()
{
	char Arr[40];
	printf("Enter String:\n");
	scanf("%[^'\n']s",Arr);
	
	DisplayDigits(Arr);
	
	return 0;
 	
}