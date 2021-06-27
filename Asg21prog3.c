#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char ch)
{
	if(ch>='0' && ch<='9')
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
	
	bRet=CheckDigit(cValue);
	
	if(bRet==true)
	{
		printf("It Is Digit\n");
	}
	else
	{
		printf("It Is Not Digit\n");
	}
	return 0;
	
}

