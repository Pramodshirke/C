#include<stdio.h>

int strlenX(char str[])
{
	int iCnt=0;
	
	while(*str != '\0')
	{
		str++;
		iCnt++;
	}
	return iCnt;
}
int main()
{
	char Arr[40];
	int iRet=0;
	printf("Enter Your Name\n");
	scanf("%[^'\n']s",Arr);
	
	//fgets(Arr,40,stdin);
	
	iRet=strlenX(Arr);
	
	printf("Length is : %d",iRet);
	
	return 0;
	
}