#include<stdio.h>
#include<stdbool.h>

// 0000 0000 0000 0000 0100 0000 0000 0000
//   0   0    0     0    5    0    0    0
bool ChkBit(unsigned int iNo)
{
	unsigned int iMask=0X00005000;
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
	
	iRet=ChkBit(iValue);
	
	if(iRet == true)
	{
		printf(" 15th Bit is On");
	}
	else
	{
		printf("15th Bit is Off");
	}
	
	return 0;
}