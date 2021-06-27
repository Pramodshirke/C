//Write a program to accept one number from user and display that number of times even number

#include<stdio.h>

void DisplayEven(int iNo)
{
	int iCnt;
	if(iNo == 0)
	{
		return;
	}
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if(iCnt % 2 == 0)
		{
			printf("%d\n",iCnt);
		}
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter a number\n");
	scanf("%d",&iValue);
	
	DisplayEven(iValue);
	
	return 0;
}