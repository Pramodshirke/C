#include<stdio.h>

void Display(int iNo1, int iNo2)
{
	int i=0;
	
	for(i=0;i<=iNo2;i++)
	{
		printf("%d\n",iNo1);
	}
}

int main()
{
	int iValue=0;
	int iCnt=0;
	
	printf("Enter Number To Display\n");
	scanf("%d",&iValue);
	
	printf("How many times you want to display the first number\n");
	scanf("%d",&iCnt);
	
	Display(iValue,iCnt);
	
	return 0;
}