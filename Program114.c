#include<stdio.h>
#include<stdbool.h>

// 0000 0000 0000 0000 0000 0000 0101 0100
//   0   0    0     0    0    0    5    4
bool ChkBit(unsigned int iNo,int iPos1,int iPos2)
{
	unsigned int iMask=0X00000000 ,iMask1=0X00000001, iMask2=0X00000001;
	unsigned int Result=0;
	
	if((iPos1<1) || (iPos2>32) || (iPos2<1) || (iPos2>32))
	{
		return false;
	}
	iMask1=iMask1<<(iPos1-1);
	iMask2=iMask2<<(iPos2-1);
	
	iMask=iMask1|iMask2;
	
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
	unsigned int iValue=0,iPos1=0,iPos2=0;
	int iRet=0;
	
	printf("Enter Number\n");
	scanf("%u",&iValue);
	
	printf("Enter Position1\n");
	scanf("%d",&iPos1);
	
	printf("Enter Position2\n");
	scanf("%d",&iPos2);
	
	iRet=ChkBit(iValue,iPos1,iPos2);
	
	if(iRet == true)
	{
		printf("%d and %d Bit is On",iPos1,iPos2);
	}
	else
	{
		printf("%d and %d Bit is Off",iPos1,iPos2);
	}
	
	return 0;
}