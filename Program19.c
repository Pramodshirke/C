// Accept numbers from user and dislpay digits of that number reversly
//input: 7521
//output: 1
//        2
//        5
//        7
#include<stdio.h>


void DisplayDigits( int iNo)
{
	int iDigit=0;
	
	if(iNo<= 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		printf("%d\n",iDigit);
		iNo = iNo/10;
	}
}
int main()
{
	int iValue;
	
	printf("Enter Number");
	scanf("%d",&iValue);
	
	DisplayDigits(iValue);
	
	return 0;
}
