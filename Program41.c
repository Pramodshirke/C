#include<stdio.h>

int MaxMin(int iNo)
{
	int iMax=0;
	int iMin=9;
	int iDigit=0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(;iNo>0;)
	{
		iDigit=iNo%10;
	  if(iDigit > iMax)
		{
			iMax=iDigit;
		}
	  if(iDigit < iMin)
		{
			iMin=iDigit;
		}
		iNo=iNo/10;
		
	}
	return iMax-iMin;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet=MaxMin(iValue);
	
	printf("Difference is: %d",iRet);
	
	return 0;
}