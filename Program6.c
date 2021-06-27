//Accept no from user and check whether that number is even or odd
//input: 4
//output:the number is even
//input: 3
//output:the number is odd
/////////////////////////////////////////////////////////////////////////////////
//
//function name: CheckEven
//Input: integer
//outout: Boolean(true/false)
//Discription: 
// date: 01/03/2021
// Author: Pramod
//
////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>




bool CheckEven(int iNo)
{
	if(iNo % 2 == 0)
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
	
	bRet= CheckEven(iValue);
	
	if(bRet==true)
	{
		printf("The Number is even");
	}
	else
	{
		printf("The Number is odd ");
	}
	return 0;
}
