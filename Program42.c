#include<stdio.h>

void NumberLine(int iNo)
{
	int iCnt=0;
	
	for(iCnt=-iNo;iCnt<=iNo;iCnt++)
	{
		printf("%d\t",iCnt);
	}
	printf("\n");
}
int main()
{
	int iValue=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	NumberLine(iValue);
	
	return 0;
}
