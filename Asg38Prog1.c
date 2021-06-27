#include<stdio.h>

void DisplayR(int iNo)
{
	static int i=0;
	
	if(iNo > 0)
	{
		printf("%d\t*\t",iNo);
		i++;
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