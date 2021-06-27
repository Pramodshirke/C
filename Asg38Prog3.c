#include<stdio.h>

int StrlenX(char *str)
{
	static int iCnt=0;
	
	if(str==NULL)
	{
		return 0;
	}
	
	if(*str != '\0')
	{
		iCnt++;
		StrlenX(++str);
	}
	return iCnt;
}
int main()
{
	int iRet=0;
	char arr[20];
	
	printf("Enter String\n");
	scanf("%s",arr);
	
	iRet=StrlenX(arr);
	
	printf("%d",iRet);
	
	
	
	return 0;
}