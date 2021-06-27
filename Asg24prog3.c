#include<stdio.h>

int ToggleX(char str[])
{
	if(str==NULL)
	{
		return 0;
	}
	while(*str != '\0')
	{
		if((*str>='A') && (*str<='Z'))
		{
			*str=*str+32;
		}
		else if((*str>='a') && (*str<='z'))
		{
			*str=*str-32;
		}
		str++;
	}
}

int main()
{
	char Arr[40];
	
	printf("Enter String:");
	scanf("%[^'\n']s",Arr);
	
	ToggleX(Arr);
	
	printf("The String is : %s",Arr);
	
	return 0;
	
}