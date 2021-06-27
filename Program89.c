#include<stdio.h>

int Toggle(char str[])
{
	int iCnt=0;
	
	if(str==NULL)
	{
		return 0;
	}
	while(*str != '\0')
	{
		if(*str>='a' && *str<='z' )
		{
		  *str = *str - 32;
		}
		else if(*str>='A' && *str<='B' )
		{
		  *str = *str + 32;
		}
		str++;
	}
}
int main()
{
	char Arr[40];
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	//fgets(Arr,40,stdin);
	
	Toggle(Arr);
	
	printf("Updated String is :%s",Arr);
	
	return 0;
	
}