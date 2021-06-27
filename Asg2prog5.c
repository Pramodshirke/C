#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkEvn(int iNo)
{
	if(iNo % 2 == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
    int iValue=0;
    BOOL bRet= FALSE;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	bRet = ChkEvn(iValue);
	
	if(bRet == TRUE )
	{
	printf("The number is even");
	}
	else
	{
	printf("The number is odd");	
	}
	
	return 0;
}