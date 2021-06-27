#include<stdio.h>

int CountSmall(char str[])
{
	int iCnt1=0;
	int iCnt2=0;
	
	
	
	if(str == NULL)
	{
		return 0;
	}
	while(*str != '\0')
	{
		if((*str>='a') && (*str<='z'))
		{
			iCnt1++;
		}		
		str++;
	}
	
	return iCnt1-iCnt2;
}
int main()
{
	char Arr[40];
	int iRet=0;
	
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=CountSmall(Arr);
	
	printf("Small Letters Are: %d",iRet);
	
	return 0;
	
}