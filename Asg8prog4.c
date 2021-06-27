#include<stdio.h>

void DisplayOdd(int iNo)
{
	int iCnt=0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}	
	
    for(iCnt=0;iCnt<=iNo;iCnt++)
	{
		if(iCnt%2 > 0)
		{
			printf("%d\n",iCnt);
		}
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