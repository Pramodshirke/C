#include<stdio.h>

int struprX(char str[])
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
		
		str++;
	}
}
int main()
{
	char Arr[40];
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	//fgets(Arr,40,stdin);
	
	struprX(Arr);
	
	printf("UpperCase is :%s",Arr);
	
	return 0;
	
}