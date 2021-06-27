#include<stdio.h>

int CountSmall(char *str)
{
	static int iCnt=0;
	
	if(str==NULL)
	{
		return 0;
	}
	
	if(*str != '\0')
	{
		if(*str >= 'a' && *str <= 'z')
		{
			iCnt++;
		}
		CountSmall(++str);
	}
	
	return iCnt;
}
int main()
{
	int iRet=0;
	char arr[20];
	
	printf("Enter String\n");
	scanf(" %[^'\n']s",arr);
	
	iRet=CountSmall(arr);
	
	printf("Count Of Small Charcter:%d",iRet);
	
	
	
	return 0;
}