#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Check(int iNo)
{
	if((iNo % 5) == 0)
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
	BOOL bRet = FALSE;
	
	printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
	{
		printf("The number is Divisible By 5");
	}
	else
	{
		printf("The number is not Divisible By 5");
	}
	return 0;
}