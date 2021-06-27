#include<stdio.h>
#include<stdbool.h>


bool CheckSymbol(char ch)
{
   if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9'))
   {
	   return false;
   }
   else 
   {
	   return true;
   }
}
int main()
{
	char cValue='\0';
	bool bRet;
	printf("Enter Character\n");
	scanf("%c",&cValue);
	
	bRet=CheckSymbol(cValue);
	
	if(bRet==true)
	{
		printf("It is Symbol");
	}
	else
	{
		printf("It is Not Symbol");
	}
	
	return 0;
	
}

