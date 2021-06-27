#include<stdio.h>

void Pattern(unsigned int iNo)
{
	int i=0;
	
	printf("\n");
	for(i=iNo;i>=1;i--)
	{
		printf("%d\t#\t",i);
	}
	printf("\n");
}
int main()
{
	unsigned int iValue=0;
	
	printf("Enter Nummber\n");
	scanf("%u",&iValue);
	
	Pattern(iValue);
	
	return 0;
}