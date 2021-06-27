#include<stdio.h>

int CountSpace(char *str)
{
	static int iCnt=0;
	
	if(str==NULL)
	{
		return 0;
	}
	
	if(*str != '\0')
	{
		if(*str == ' ')
		{
			iCnt++;
		}
		CountSpace(++str);
	}
	
	return iCnt;
}
int main()
{
	int iRet=0;
	char arr[20];
	
	printf("Enter String\n");
	scanf(" %[^'\n']s",arr);
	
	iRet=CountSpace(arr);
	
	printf("Frequency of WhiteSpace is:%d",iRet);
	
	
	
	return 0;
}