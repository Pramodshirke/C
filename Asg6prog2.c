//Time Complexity = O(N) Where N is input
#include<stdio.h>
#include<stdbool.h>

int DigitZero(int iNo)
{
	int iDigit=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo > 0)
	{
		iDigit = iNo%10;
		if(iDigit == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
		iNo=iNo/10;
	}

}
int main()
{
	int iValue=0;
	bool bRet;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	bRet=DigitZero(iValue);
	
	if(bRet == true)
	{
		printf("Number Contains Zero");
	}
	else
	{
		printf("Number Not Contains Zero");
	}
	return 0;
	
}