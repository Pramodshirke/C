#include<stdio.h>

void DisplayR()
{
	static int i=1;
	
	if(i<=5)
	{
		printf("%d\t",i);
		i++;
		DisplayR();
	}
}
int main()
{
	DisplayR();
	return 0;
}