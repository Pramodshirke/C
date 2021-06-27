#include<stdio.h>

int ToggleBit(unsigned int iNo,int iPos)
{
	unsigned int iMask=0X00000001;
	unsigned int iResult=0;
	
	if((iPos<1) || (iPos>32))
	{
		return 0;
	}
	
	iMask=iMask<<(iPos-1);
	
	iResult=iNo^iMask;
	
	return iResult;
	
}
int main()
{
	unsigned int iValue=0,iPos=0;
	unsigned int iRet=0;
	
	printf("Enter Number:\n");
	scanf("%u",&iValue);
	
	printf("Enter Position:\n");
	scanf("%d",&iPos);
	
	iRet=ToggleBit(iValue,iPos);
	
	printf("Changed Value is: %d",iRet);
	
	return 0;
}

