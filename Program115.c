#include<stdio.h>
#include<stdbool.h>

// 0000 0000 0000 0000 0000 0000 0101 0100
//   0   0    0     0    0    0    5    4
int OnBit(unsigned int iNo,int iPos)
{
	unsigned int iMask=0X00000001;
	unsigned int Result=0;
	
	if((iPos<1) || (iPos>32))
	{
		return 0;
	}
	iMask=iMask<<(iPos-1);
	
	Result=iNo|iMask;
	
    return Result;
	
}
int main()
{
	unsigned int iValue=0,iPos=0;
	int iRet=0;
	
	printf("Enter Number\n");
	scanf("%u",&iValue);
	
	printf("Enter Position\n");
	scanf("%d",&iPos);
	iRet=OnBit(iValue,iPos);
	
	printf("New Number is:\n%d",iRet);
	
	return 0;
}