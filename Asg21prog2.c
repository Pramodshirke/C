#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
	if((ch>='A' && ch<='Z'))
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
	
	bRet=CheckCapital(cValue);
	
	if(bRet==true)
	{
		printf("It Is Capital Letter\n");
	}
	else
	{
		printf("It Is Not Capital Letter\n");
	}
	return 0;
	
}

