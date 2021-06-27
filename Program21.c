//Addition of digits
#include<stdio.h>

int SumDigits( int iNo)
{
	int iSum=0;
	
	if(iNo<= 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iSum = iSum + (iNo % 10);
		iNo = iNo/10;
	}
	return iSum;
}
int main()
{
	int iValue;
	int iRet=0;
	
	printf("Enter Number");
	scanf("%d",&iValue);
	
	iRet = SumDigits(iValue);
	
	printf("Sum is %d\n",iRet);
	
	return 0;
}
