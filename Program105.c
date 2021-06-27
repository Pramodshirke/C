#include<stdio.h>
// Same As Program104.c

int CountOne(unsigned int iNo)
{
	unsigned int iDigit=0;
	int iCnt=0;
	
	while(iNo>0)
	{
		iDigit=iNo%2;
	    iCnt=iCnt+iDigit;
		iNo=iNo/2;
	}
	return iCnt;
}
int main()
{
	unsigned int iValue=0;
	unsigned int iRet=0;
	
	printf("Enter Number\n");
	scanf("%u",&iValue);
	
	iRet=CountOne(iValue);
	
	printf("No. of 1 bits Are: %d",iRet);
	
	return 0;
}