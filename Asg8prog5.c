#include<stdio.h>

void DisplayOdd(int iNo)
{
	int iCnt=0;
	int iAns=1;
	if(iNo < 0)
	{
		iNo = -iNo;
	}	
	
    for(iCnt=1;iCnt<=5;iCnt++)
	{
		iAns=iNo * iCnt;
		printf("%d\n",iAns);
	}
}
int main()
{
	int iValue=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	DisplayOdd(iValue);
	
	return 0;
}