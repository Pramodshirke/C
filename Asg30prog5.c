#include<stdio.h>

int ToggleBitRange(unsigned int iNo,int iStart,int iEnd)
{
	unsigned int iMask=0X00000001,iResult=0;
	int i=0,iCnt=0;
	
	for(i=iStart;i<=iEnd;i++)
	{
	    iResult=iNo^iMask;
		iMask=iMask<<1;
	}
	

 return iResult;
}
int main()
{
	unsigned int iValue=0,iPos1=0,iPos2=0;
	unsigned int iRet=0;
	
	printf("Enter Number\n");
	scanf("%u",&iValue);
	
	printf("Enter Start \n");
	scanf("%u",&iPos1);
	
	printf("Enter End\n");
	scanf("%u",&iPos2);
	
	iRet=ToggleBitRange(iValue,iPos1,iPos2);
	
	printf("%u",iRet);
	
	return 0;
}