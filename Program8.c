//Accept no from user and check whether first number is divisible by second or not
//input: 15 5
//output:true
//input: 21 6
//output:false
/////////////////////////////////////////////////////////////////////////////////
//
//function name: CheckDivisible
//Input: integer
//outout: Boolean(true/false)
//Discription: check whether that number is divisible by 3 and 5
// date: 01/03/2021
// Author: Pramod
//
////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>




bool CheckDvisible(int iNo1, int iNo2)
{
	if(iNo1 % iNo2 == 0)
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
	int iValue1=0;
	int iValue2=0;
	int bRet=false;
	
	printf("Enter first Number");
	scanf("%d",&iValue1);
	
	printf("Enter second Number");
	scanf("%d",&iValue2);
	bRet= CheckDvisible(iValue1,iValue2);
	
	if(bRet==true)
	{
		printf("%d is divisible by %d ",iValue1,iValue2);
	}
	else
	{
		printf("%d is not divisible by %d ",iValue1,iValue2);
	}
	return 0;
}
