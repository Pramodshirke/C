#include<stdio.h>
#include<stdbool.h>
// 0000 0000 0000 0000 0000 0001 1100 0000
//   0    0    0    0    0    1    C    0
bool CheckBit(unsigned int iNo)
{
	unsigned int iMask=0X000001C0;
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

