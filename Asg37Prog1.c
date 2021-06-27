#include<stdio.h>

void DisplayR(int iNo)
{
	if(iNo > 0)
	{
		printf("*\t");
		iNo--;
		DisplayR(iNo);
	}
}
int main()
{
	int iValue=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	DisplayR(iValue);
	return 0;
}