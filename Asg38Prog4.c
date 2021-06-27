#include<stdio.h>

int Fact(int iNo)
{
	static int iFact=1;

    if(iNo>0)
	{
		iFact=iFact*iNo;
		iNo--;
		Fact(iNo);
	}
	return iFact;
}
int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet=Fact(iValue);
	
	printf("Factrial is: %d",iRet);
	
	
	
	return 0;
}