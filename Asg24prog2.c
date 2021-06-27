#include<stdio.h>

int struprX(char str[])
{
	if(str==NULL)
	{
		return 0;
	}
	
	while(*str != '\0')
	{
		if((*str>='a') && (*str<='z'))
		{
			*str= *str-32;
		}
		str++;
	}
}
int main()
{
	char Arr[40];
	printf("Enter String:\n");
	scanf("%[^'\n']s",Arr);
	
	struprX(Arr);
	
	printf("Changed String Is : %s",Arr);
	
	return 0;
 	
}