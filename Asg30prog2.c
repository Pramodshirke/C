#include<stdio.h>

void CountBit(unsigned int iNo1,unsigned int iNo2)
{
	unsigned int iMask1=0X00000001;
	unsigned int iMask2=0X00000001;
	unsigned int iResult1=0,iResult2=0;
	
	int i=0;
	
	for(i=1;i<=32;i++)
	{
		iResult1=iNo1&iMask1;
		iResult2=iNo2&iMask2;
        if((iResult1==iMask1) && (iResult2==iMask2))
		{
			printf("%d\t",i);
		}
		iMask1=iMask1<<1;
		iMask2=iMask2<<1;
		
	}

}
int main()
{
	unsigned int iValue1=0,iValue2=0;
	
	printf("Enter First Number\n");
	scanf("%u",&iValue1);
	
	printf("Enter Second Number\n");
	scanf("%u",&iValue2);
	
	CountBit(iValue1,iValue2);
	
	return 0;
}