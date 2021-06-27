//Time Complexity = O(N) Where N is input

#include<stdio.h>

int MultDigits(int iNo)
{
	int iDigit=0;
	int iAns=1;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo > 0)
	{
		iDigit = iNo%10;
        if(iDigit == 0)
		{
			iAns = iAns*iDigit;
		}

		iNo=iNo/10;
	}
    return iAns;
}
int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet=MultDigits(iValue);
	
	printf("Multiplication of all digits is : %d\n",iRet);
	
	return 0;
	
}