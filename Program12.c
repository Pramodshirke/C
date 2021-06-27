//Accept two numbers from and calculate its power
// input : 2 4
// output: 2*2*2*2


#include<stdio.h>
int Power(int iNo)
{

	int iCnt=0;
    int iAns=1;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	//     1       2         3
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		iAns= iNo * iAns ;//4
	}
	return iAns;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter first number\n");
	scanf("%d",&iValue);
	
	
	iRet=Power(iValue);
	
	printf("Result is : %d\n",iRet);
	return 0;
}