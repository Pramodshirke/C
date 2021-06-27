#include<stdio.h>

int FactDiff(int iNo)
{
	int iCnt = 0;
	int iSum1=0;
	int iSum2=0;
	int iDiff=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if(iNo % iCnt == 0)
		{
			iSum1 =iSum1 + iCnt;
		}	
		if(iNo % iCnt > 0)
		{
			iSum2 =iSum2 + iCnt;
		}
		
	}
	return iSum1-iSum2;
}
int main()
{
	int iValue=0;
	int iRet;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet=FactDiff(iValue);
	
	printf("Diffrence between factors and nonfators is : %d\n",iRet);
	
	return 0;
	
}