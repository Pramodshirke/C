#include<stdio.h>

// 0000 0000 0000 0000 0000 0010 0100 0000
//  0     0    0    0   0     2    4    0   
int OffBit(unsigned int iNo)
{
	unsigned int iMask=0x00000240;
	unsigned int Result=0;
	
	Result=iNo^iMask;
	return Result;
	
}
int main()
{
	unsigned int iValue=0;
	unsigned int iRet=0;
	
	printf("Enter Number\n");
	scanf("%u",&iValue);
	
	iRet=OffBit(iValue);
	
	printf("Chnged Number is: %d",iRet);
	
	return 0;
}