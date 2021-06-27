#include<stdio.h>
// 0000 0000 0000 0000 0000 0000 0000 0100
//   0   0    0     0    0    0    0    4
int Toggle(unsigned int iNo)
{
	unsigned int iMask=0X00000004;
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
	
	iRet=Toggle(iValue);
	
	printf("Number After Updation is: %d",iRet);
	
	return 0;
}