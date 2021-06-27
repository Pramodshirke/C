#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
	if(ch>='a' && ch<='z')
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
	
	bRet=CheckSmall(cValue);
	
	if(bRet==true)
	{
		printf("It Is Small Letter\n");
	}
	else
	{
		printf("It Is Not Small Letter\n");
	}
	return 0;
	
}

