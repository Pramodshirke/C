#include<stdio.h>


void FactDec(int iNo)
{
	int iCnt =0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt=iNo/2;iCnt>0;iCnt--)
	{
		if(iNo % iCnt == 0)
		{
		printf("%d\n",iCnt);
		}
	}
	
}

int main()
{
	int iValue=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	FactDec(iValue);
	
	
	return 0;
}