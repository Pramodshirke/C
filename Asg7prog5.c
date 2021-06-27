//Time Complexity = O(N) Where N is input

#include<stdio.h>

int MultDigits(int iNo)
{
	int iDigit=0;
	int iSum1=0;
	int iSum2=0;

	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo > 0)
	{
		iDigit = iNo%10;
    if(iDigit % 2 == 0)
	{
		iSum1 = iSum1+iDigit;
	}
	if(iDigit % 2 > 0)
	{
	    iSum2 = iSum2+iDigit;	
	}
 
		iNo=iNo/10;
	}

    return iSum1-iSum2;
}
int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet=MultDigits(iValue);
	
	printf("Diffrence is : %d\n",iRet);
	
	return 0;
	
}