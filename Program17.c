#include<stdio.h>
#include<stdbool.h>

bool FactorSum(int iNo)
{
	int iCnt=0;
	int iAns=0;
	
		if(iNo < 0)
	{
		iNo = -iNo;
	}

		for(iCnt=1;iCnt<=iNo/2;iCnt++)
	{
		if(iNo % iCnt == 0)
		{
		  iAns = iAns + iCnt;
		}
	}
    if(iAns == iNo)
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
	
	bRet=FactorSum(iValue);
	
	if(bRet==true)
	{
		printf("%d Number is perfect number",iValue);
	}
	else
	{
		printf(" %d Number is not perfect number",iValue);
	}
	
}