//Addition of digits
#include<stdio.h>

int  DigitFrequency( int iNo, int i)
{
	int iDigit=0;
	int iCnt=0;
	if(iNo<= 0)
	{
		iNo = -iNo;
	}
	if((i<0) || (i>9))
	{
		printf("Invalid Digit");
		return 0;
	}
		
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iNo = iNo/10;
		if(iDigit == i)
		{
			iCnt++;
		}
	}
   return iCnt;
}
int main()
{
	int iValue1 , iValue2;
	int iRet=0;
	
	printf("Enter Number");
	scanf("%d",&iValue1);
	
	printf("Enter the digit you want to search");
	scanf("%d",&iValue2);
	
	iRet = DigitFrequency(iValue1,iValue2);
	
	printf("NO of given digits are %d\n",iRet);
	
	return 0;
}
