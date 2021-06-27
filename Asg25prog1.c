#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str,char ch)
{
   if(str==NULL)
	{
		return 0;
	}
	
	while(*str != '\0')
	{
		if(*str == ch)
		{
			break;
		}
		str++;
	}
	
	if(*str=='\0')
	{
		return false;
	}
	else
	{
		return true;
	}
}
int main()
{
	char Arr[40];
	char cValue;
	bool bRet;
	
	printf("Enter String:\n");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter the Character\n");
	scanf(" %c",&cValue);
	
	bRet=ChkChar(Arr,cValue);
	
	if(bRet == true)
	{
		printf("Character is Present");
	}
	else
	{
		printf("Character is not Present");
	}
	
	return 0;
}
