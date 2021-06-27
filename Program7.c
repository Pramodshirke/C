//Accept no from user and check whether that number is divisible by 3 and 5
//input: 10
//output:no
//input: 15
//output:yes
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




bool CheckDvisible(int iNo)
{
	if(((iNo % 3 == 0 )) && ((iNo % 5 == 0 )))
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
	int bRet=false;
	
	printf("Enter the Number");
	scanf("%d",&iValue);
	
	bRet= CheckDvisible(iValue);
	
	if(bRet==true)
	{
		printf("number is divisible by 3 and 5 ");
	}
	else
	{
		printf("number is not divisible by 3 and 5  ");
	}
	return 0;
}
