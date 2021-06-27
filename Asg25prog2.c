#include<stdio.h>

int Frequency(char *str,char ch)
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
			iCnt++;
		}
		str++;
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
	
	iRet=Frequency(Arr,cValue);
	
	printf("Frequency of %c is : %d",cValue,iRet);
	
	return 0;
}