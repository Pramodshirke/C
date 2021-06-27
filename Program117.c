#include<stdio.h>
#include<stdbool.h>

// 0000 0000 0000 0000 0000 0000 0101 0100
//   0   0    0     0    0    0    5    4
int CountBit(unsigned int iNo)
{
	unsigned int iMask=0X00000001;
	unsigned int Result=0;
	int iCnt=0,i=0;
	
	for(i=0;i<32;i++)
	{
		Result=iNo&iMask;
		
		if(Result == iMask)
		{
			iCnt++;
		}
		iMask=iMask<<1;
	}
	return iCnt;
}
int main()
{
	unsigned int iValue=0;
	int iRet=0;
	
	printf("Enter Number\n");
	scanf("%u",&iValue);
	
	iRet=CountBit(iValue);
	
	printf("Total ON bits Are:\n%d",iRet);
	return 0;
}