// Time Complexity = O(N) where N is Range
#include<stdio.h>

int RangeRev(int iNo1,int iNo2)
{
	int iCnt=0;

    for(iCnt=iNo2;iCnt>iNo1;iCnt--)
	{
		printf("%d\n",iCnt);
	}
	return iCnt;
}
int main()
{
	int iValue1=0;
	int iValue2=0;
	int iRet=0;
	
	printf("Enter Starting Point\n");
	scanf("%d",&iValue1);
	
	printf("Enter Ending Point\n");
	scanf("%d",&iValue2);	
	
	iRet = RangeRev(iValue1,iValue2);
	
	printf("Addition is: %d",iRet);
	
	return 0;
}