#include<stdio.h>

void DisplayR(int iNo)
{
	static int i=1;
	
	if(i <= iNo)
	{
		printf("%d\t",i);
		i++;
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