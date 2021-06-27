#include<stdio.h>
#include<stdbool.h>

// 0000 0000 0000 0000 0000 0000 0101 0100
//   0   0    0     0    0    0    5    4
bool ChkBit(unsigned int iNo)
{
	unsigned int iMask=0X00000054;
	unsigned int Result=0;
	
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
	unsigned int iValue=0;
	unsigned int iRet=0;
	
	printf("Enter Number\n");
	scanf("%u",&iValue);
	
	iRet=ChkBit(iValue);
	
	if(iRet == true)
	{
		printf("5th Bit is On");
	}
	else
	{
		printf("5th Bit is Off");
	}
	
	return 0;
}