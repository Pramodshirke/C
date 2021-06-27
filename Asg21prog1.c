#include<stdio.h>
#include<stdbool.h>

bool CheckAlpha(char ch)
{
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	char cValue='\0';
	bool bRet;
	
	printf("Enter Character\n");
	scanf("%c",&cValue);
	
	bRet=CheckAlpha(cValue);
	
	if(bRet==true)
	{
		printf("Given Input Is Alphabet\n");
	}
	else
	{
		printf("Given Input Is Not Alphabet\n ");
	}
	return 0;
	
}

