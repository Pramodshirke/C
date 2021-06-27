#include<stdio.h>

// 0000 0000 0000 0000 0000 0000 0100 0000
//  0     0    0    0   0     0    4    0   
int Toggle(unsigned int iNo)
{
	unsigned int iMask=0x00000040;
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
	
	iRet=Toggle(iValue);
	
	printf("Chnged Number is: %d",iRet);
	
	return 0;
}