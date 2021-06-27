//Addition of digits
#include<stdio.h>

int EvenDigits( int iNo)
{
	int iDigit=0;
	int iCnt=0;
	
	if(iNo<= 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		if(iDigit % 2==0)
		{
			iCnt = iCnt+ iDigit;
			iCnt++;
		}
		iNo = iNo/10;
	}
   return iCnt;
}
int main()
{
	int iValue;
	int iRet=0;
	
	printf("Enter Number");
	scanf("%d",&iValue);
	
	iRet = EvenDigits(iValue);
	
	printf("Sum is %d\n",iRet);
	
	return 0;
}
