#include<stdio.h>

int Space(char str[])
{
	int iCnt=0;
	
	if(str==NULL)
	{
		return 0;
	}
	
	while(*str != '\0')
	{
		if(*str== ' ')
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
	
	printf("Enter String:\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=Space(Arr);
	
	printf("Number Of White Spaces Are:%d ",iRet);
	
	return 0;
 	
}