#include<stdio.h>

void DisplayASCII()
{
	int i=0;
	printf("-------------------------------------------------------------\n");
	printf("ASCII TABLE\n");
	printf("-------------------------------------------------------------\n");
	for(i=0;i<=128;i++)
	{
		printf("%d\t%c\t%o\t%x",i,i,i,i);
		printf("\n");
	}
}
int main()
{
	DisplayASCII();
	return 0;
}