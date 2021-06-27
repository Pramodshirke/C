// Accept a number from user and check whether the number is pallindrome or not
//input : 123
// output : not pallindrome
//input : 121
// output : pallindrome

#include<stdio.h>
#include<stdbool.h>

int CheckP(int iNo)
{
	int iDigit=0,iRev=0;
	int iTemp=0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	iTemp = iNo;
	while(iNo > 0)
	{
		iDigit=iNo%10;
		iRev=(iRev*10)+ iDigit;
		iNo = iNo/10;
		
	}
	if(iRev == iTemp)
		{
			return true;
		}
		else
		{
			return false;
		}
}


int main()
{
	int iValue=0;
	bool bRet;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	bRet=CheckP(iValue);
	
	if(bRet == true)
	{
		printf("The Number is Pallindrome");
	}
	else
	{
		printf("The Number is not Pallindrome");
	}
	
	return 0;
	
}