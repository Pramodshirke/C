#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
	int iCnt=0;
	
		if(iNo < 0)
	{
		iNo = -iNo;
	}

		for(iCnt=2;iCnt<=iNo/2;iCnt++)
	{
		if(iNo % iCnt == 0)
		{
		  break;
		}
		
	}
   if(iCnt == (iNo/2)+1)
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
	int iValue=0;
	bool bRet;
	
    printf("Enter first number\n");
	scanf("%d",&iValue);
	
	bRet=CheckPrime(iValue);
	
	if(bRet==true)
	{
		printf("%d Number is prime number",iValue);
	}
	else
	{
		printf(" %d Number is not prime number",iValue);
	}
	
}