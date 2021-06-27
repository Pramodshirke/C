//Accept number from user and return the largest digit
//input : 123
// output : 3
//input : 344368
// output : 8

#include<stdio.h>
#include<stdbool.h>

int MaxDigit(int iNo)
{
	int iDigit=0;
    int iMax=0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	while(iNo > 0)
	{
		iDigit=iNo%10;
		if(iDigit > iMax)
		{
			iMax=iDigit;
			if(iMax == 9) // to reduce time complexity for which number contains 9
			{
				break;
			}
		}
	    iNo = iNo/10;
		
	}
	return iMax;
}


int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet=MaxDigit(iValue);
	
	printf("Largest Digit is : %d\n",iRet);
	
	return 0;
	
}