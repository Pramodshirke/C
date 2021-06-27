#include<stdio.h>

int strlwrX(char str[])
{
	if(str == NULL)
	{
		return 0;
	}
	while(*str != '\0')
	{
		if((*str>='A') && (*str<='Z'))
		{
			*str=*str+32;
		}
		str++;
	}
}
int main()
{
	char Arr[40];
	
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	strlwrX(Arr);
	
	printf("Changed String Is: %s",Arr);
	
	return 0;
	
}