#include<stdio.h>
#include<stdbool.h>

bool CheckBit(unsigned int iNo,int iPos)
{
	unsigned int iMask=0X00000001;
	unsigned int iResult=0;
	
	if((iPos<0) || (iPos>32))
	{
		return false;
	}
	
	iMask=iMask<<(iPos-1);
	
	iResult=iNo&iMask;
	
	if(iResult==iMask)
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
	unsigned int iValue=0,iPos=0;
	unsigned int iRet=0;
	
	printf("Enter Number:\n");
	scanf("%u",&iValue);
	
	printf("Enter Position:\n");
	scanf("%d",&iPos);
	
	iRet=CheckBit(iValue,iPos);
	
	if(iRet== true)
	{
		printf("Bit is ON");
	}
	else
	{
		printf("Bits is OFF");
	}
}

