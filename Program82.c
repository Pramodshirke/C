#include<stdio.h>

int CountA(char str[])
{
	int iCnt=0;
	
	if(str==NULL)
	{
		return 0;
	}
	while(*str != '\0')
	{
		if(*str == 'a')
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
	int iRet=0;
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	//fgets(Arr,40,stdin);
	
	iRet=CountA(Arr);
	
	printf("Frequency if A is : %d",iRet);
	
	return 0;
	
}