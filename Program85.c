#include<stdio.h>

int CountSmall(char str[])
{
	int iCnt=0;
	
	if(str==NULL)
	{
		return 0;
	}
	while(*str != '\0')
	{
		if(*str>='a' && *str<='z')
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
	
	iRet=CountSmall(Arr);
	
	printf("Frequency of Small is: %d",iRet);
	
	return 0;
	
}