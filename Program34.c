//Accept number from user and return the Smallest digit
//input : 123
// output : 1
//input : 344368
// output : 3

#include<stdio.h>
typedef unsigned long int ULONG;

int MinDigit(ULONG iNo)
{
	int iDigit=0;
    int iMin= 9;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	while(iNo > 0)
	{
		
		iDigit=iNo%10;
		if(iDigit < iMin)
		{
			iMin=iDigit;
			if(iMin==0) //To reduce time complexity for which number there is 0 in number
			{
				break;
			}
			
		}
	    iNo = iNo/10;
		
	}
	
	return iMin;
}


int main()
{
	ULONG iValue=0;
	int iRet=0;
	
	printf("Enter Number\n");
	scanf("%lu",&iValue);
	
	iRet=MinDigit(iValue);
	
	printf("Minimum Digit is : %d\n",iRet);
	
	return 0;
	
}