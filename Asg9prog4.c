// Time Complexity = O(N) where N is Range
#include<stdio.h>

int SumEven(int iNo1,int iNo2)
{
	int iCnt=0;
	int iSum=0;
     
	 if(iNo1 < 0 || iNo2 < 0)
	 {
		 printf("Invalid Range\n");
		 return 0;
	 }

    for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
	{
		if(iCnt % 2 ==0)
		{
			iSum = iSum + iCnt;
		}
	}
	return iSum;
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
	
	iRet = SumEven(iValue1,iValue2);
	
	printf("Addition is: %d",iRet);
	
	return 0;
}