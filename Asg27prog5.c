#include<stdio.h>
#include<stdbool.h>
// 1000 0000 0000 0000 0000 0000 0000 0001
//   8    0    0    0    0    0    0    1
bool CheckBit(unsigned int iNo)
{
	unsigned int iMask=0X80000001;
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

