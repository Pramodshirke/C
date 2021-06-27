// Accept one number from user and display addtion of its factors
// Time Complexity : O(N) where N = input

#include<stdio.h>
int FactorSum(int iNo)
{
	int iCnt=0;
	int iAns=0;
		if(iNo < 0)
	{
		iNo = -iNo;
	}

		for(iCnt=1;iCnt<=iNo/2;iCnt++)
	{
		if(iNo % iCnt == 0)
		{
			iAns = iAns + iCnt;
		}
		
	}
return iAns;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	
	iRet = FactorSum(iValue);

    printf("Addtion is : %d\n",iRet);
	return 0;
}