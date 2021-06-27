#include<stdio.h>

void Pattern(unsigned int iNo)
{
	int i=0;
	char ch='A';
	
	for(i=1;i<=iNo;i++)
	{
		printf("%c\t",ch++);
	}
}
int main()
{
	unsigned int iValue=0;
	
	printf("Enter Nummber\n");
	scanf("%u",&iValue);
	
	Pattern(iValue);
	
	return 0;
}