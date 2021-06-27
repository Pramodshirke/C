// Time Complexity = O(N) where N is Range
#include<stdio.h>

void RangeDisplayEven(int iNo1,int iNo2)
{
	int iCnt=0;

    for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
	{
		if(iCnt % 2 == 0)
		{
			printf("%d\n",iCnt);
		}
	}
}
int main()
{
	int iValue1=0;
	int iValue2=0;
	
	
	printf("Enter Starting Point\n");
	scanf("%d",&iValue1);
	
	printf("Enter Ending Point\n");
	scanf("%d",&iValue2);	
	
	RangeDisplayEven(iValue1,iValue2);
	
	return 0;
}