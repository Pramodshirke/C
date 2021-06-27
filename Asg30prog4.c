#include<stdio.h>
#include<stdbool.h>

bool CheckBit(unsigned int iNo,int iPos1,int iPos2)
{
	unsigned int iMask1=0X00000001;
	unsigned int iMask2=0X00000001;
	unsigned int iResult1=0,iResult2=0,i=0;
	
	for(i=0;i<32;i++)
	{
		iResult1=iNo&iMask1;
	    iMask1=iMask1<<(iPos1-1);
	    iResult2=iNo&iMask2;
	    iMask2=iMask2<<(iPos2-1);
	}
	
	if((iResult1 == iMask1) || (iResult2==iMask2))
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
	unsigned int iValue=0,iPos1=0,iPos2=0;
	unsigned int bRet=false;
	
	printf("Enter Number\n");
	scanf("%u",&iValue);
	
	printf("Enter First Number\n");
	scanf("%u",&iPos1);
	
	printf("Enter Second Number\n");
	scanf("%u",&iPos2);
	
	bRet=CheckBit(iValue,iPos1,iPos2);
	
	if(bRet==true)
	{
		printf("Bits Are ON");
	}
	else
	{
		printf("Bits Are OFF");
	}
	
	return 0;
}