#include<stdio.h>

// 0000 0000 0000 0000 0000 0000 0000 1111
//  0     0    0    0   0     0    0    F   
int OnBit(unsigned int iNo)
{
	unsigned int iMask=0x0000000f;
	unsigned int Result=0;
	
	Result=iNo|iMask;
	return Result;	
}
int main()
{
	unsigned int iValue=0;
	unsigned int iRet=0;
	
	printf("Enter Number\n");
	scanf("%u",&iValue);
	
	iRet=OnBit(iValue);
	
	printf("Chnged Number is: %d",iRet);
	
	return 0;
}