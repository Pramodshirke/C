#include<stdio.h>
// 1111 1111 1111 1111 1111 1111 1111 1011
//   F   F    F     F    F    F    B   B
int OffBit(unsigned int iNo)
{
	unsigned int iMask=0xFFFFFFBB;
	unsigned int Result=0;
	
	Result=iNo&iMask;
	return Result;
	
}
int main()
{
	unsigned int iValue=0;
	unsigned int iRet=0;
	
	printf("Enter Number\n");
	scanf("%u",&iValue);
	
	iRet=OffBit(iValue);
	
	printf("Number After Updation is: %d",iRet);
	
	return 0;
}