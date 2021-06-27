#include<stdio.h>
#include<stdbool.h>
// 0000 1000 0001 0000 0100 0000 0100 0000
//   0    8    1    0    4    0    4    0
bool CheckBit(unsigned int iNo)
{
	unsigned int iMask=0x08104040;
	unsigned int iResult=0;
	
	iResult=iNo&iMask;
	
	if(iResult==iMask)
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
	
	printf("Enter Number:\n");
	scanf("%d",&iValue);
	
	iRet=CheckBit(iValue);
	
	if(iRet== true)
	{
		printf("Bits Are ON");
	}
	else
	{
		printf("Bits Are OFF");
	}
}

