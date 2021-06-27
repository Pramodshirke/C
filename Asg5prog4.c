#include<stdio.h>

int NonFactSum(int iNo)
{
	int iCnt = 0;
	int iSum=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if(iNo % iCnt > 0)
		{
			iSum =iSum + iCnt;
		}
	}
	return iSum;
}
int main()
{
	int iValue=0;
	int iRet;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet=NonFactSum(iValue);
	
	printf("Sum of Nonfators is : %d\n",iRet);
	
	return 0;
	
}