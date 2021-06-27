#include<stdio.h>

int FirstChar(char *str,char ch)
{
	int iCnt=0;
	char *start;
	
	if(str == NULL)
	{
		return 0;
	}
	
	start=str;
	
	while(*str != '\0')
	{
		iCnt++;
		str++;
	}
	str--;
	
	while(str != (start-1))
	{   
        iCnt--;
		
		if(*str==ch)
		{
			break;
		}
		str--;
	}
	
	if(str==(start-1))
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