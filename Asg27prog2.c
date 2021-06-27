#include<stdio.h>
#include<stdbool.h>

// 0000 0000 0000 0010 0000 0000 0001 0000
//   0   0    0     2    0    0    1    0

bool CheckBit(unsigned int iNo)
{
	unsigned int iMask=0x00020010;
	int iResult=0;
	
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
	bool iRet=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet=CheckBit(iValue);
	
	if(iRet==true)
	{
		printf("5th And 18th Bit is On");
	}
	else
	{
		printf("5th And 18th Bit Is Off");
	}
}