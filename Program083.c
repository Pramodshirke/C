#include<stdio.h>

int CountA(char str[],char ch)
{
	int iCnt=0;
	
	if(str==NULL)
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
	int iRet=0;
	char ch='\0';
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter Character you want to Search\n");
	scanf("%c",ch);
	
	//fgets(Arr,40,stdin);
	
	iRet=CountA(Arr,ch);
	
	printf("Frequency if A is : %d",iRet);
	
	return 0;
	
}