#include<stdio.h>

int SumDigit(int iNo)
{
	static int iMult=1,iDigit=0;

    if(iNo>0)
	{
		iDigit=iNo%10;
		iMult=iMult*iDigit;
		iNo=iNo/10;
		SumDigit(iNo);
	}
	return iMult;
}
int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet=SumDigit(iValue);
	
	printf("Addition OF Digits: %d",iRet);
	
	
	
	return 0;
}