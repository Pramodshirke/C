#include<stdio.h>
#include<stdbool.h>

// 0000 0000 0000 0000 0000 1000 0000 0000
//   0    0    0    0    0    8    0    0 

// 0000 0000 0000 0000 0000 0001 0000 0000
//   0    0    0    0    0    1    0    0 
 

bool CheckBit(unsigned int iNo)
{
	unsigned int iMask1=0X00000800;
	unsigned int iMask2=0X00000100;
	unsigned int iResult1=0,iResult2=0;
	
	iResult1=iNo&iMask1;
	iResult2=iNo&iMask2;
	
	if((iResult1 == iMask1) || (iResult2==iMask2))
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
	unsigned int bRet=false;
	
	printf("Enter First Number\n");
	scanf("%u",&iValue);
	
	bRet=CheckBit(iValue);
	
	if(bRet==true)
	{
		printf("Bits Are ON");
	}
	else
	{
		printf("Bits Are OFF");
	}
	
	return 0;
}