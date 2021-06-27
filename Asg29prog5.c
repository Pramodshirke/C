#include<stdio.h>

int ToggleBit(unsigned int iNo)
{
	unsigned int iMask1=0X00000001,iMask2=0x00000001;
	unsigned int iResult=0,Result=0;
	int iCnt=0;
	
	for(iCnt=0;iCnt<4;iCnt++)
	{
		Result=iNo^iMask1;
		iMask1=iMask1<<1;
	}
	
	return iResult;
	
}
int main()
{
	unsigned int iValue=0,iPos=0;
	unsigned int iRet=0;
	
	printf("Enter Number:\n");
	scanf("%u",&iValue);
	
	iRet=ToggleBit(iValue);
	
	printf("Changed Value is: %d",iRet);
	
	return 0;
}

