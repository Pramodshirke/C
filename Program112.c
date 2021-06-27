#include<stdio.h>
#include<stdbool.h>

// 0000 0000 0000 0000 0000 0000 0101 0100
//   0   0    0     0    0    0    5    4
bool ChkBit(unsigned int iNo,int iPos)
{
	unsigned int iMask=0X00000001;
	unsigned int Result=0;
	
	if((iPos<1) || (iPos>32))
	{
		return false;
	}
	iMask=iMask<<(iPos-1);
	Result=iNo&iMask;
	
    if(Result==iMask)
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
	int iRet=0;
	
	printf("Enter Number\n");
	scanf("%u",&iValue);
	
	printf("Enter Position\n");
	scanf("%d",&iPos);
	iRet=ChkBit(iValue,iPos);
	
	if(iRet == true)
	{
		printf("%dth Bit is On",iPos);
	}
	else
	{
		printf("%dth Bit is Off",iPos);
	}
	
	return 0;
}