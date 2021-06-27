#include<stdio.h>

int OffBit(unsigned int iNo)
{
	unsigned int iMask=0xFFFFFFFB;
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