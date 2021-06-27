#include<stdio.h>

int FirstChar(char *str,char ch)
{
	int iCnt=0;
	
	if(str == NULL)
	{
		return 0;
	}

	while(*str != '\0')
	{
		if(*str == ch)
		{
		    break;
		}
		iCnt++;
		str++;
	}
	
	if(*str=='\0')
	{
		return -1;
	}

	return iCnt;
}
int main()
{
	char Arr[40];
	char cValue='\0';
	int  iRet=0;
	
	printf("Enter String:\n");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter Character\n");
	scanf(" %c",&cValue);
	
	iRet=FirstChar(Arr,cValue);
	
	printf("%c is Present at: %d",cValue,iRet);
	
	return 0;
}