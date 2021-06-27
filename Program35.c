#include<stdio.h>

int Diffrence(int iNo)
{
	int iCnt=0;
	int iSum1=0,iSum2;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if(iNo % iCnt == 0)
		{
			iSum1= iSum1+iCnt;
		}
		else
		{
			iSum2= iSum2+iCnt;
		}		
	}
	return iSum1-iSum2;
}
int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet=Diffrence(iValue);
	
	printf("Diffrence between factors and nonfators is : %d\n",iRet);
	
	return 0;
	
}