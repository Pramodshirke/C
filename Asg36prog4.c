#include<stdio.h>

void DisplayR()
{
	static char i='A';
	
	if(i<'G')
	{
		printf("%c\t",i);
		i++;
		DisplayR();
	}
}
int main()
{
	DisplayR();
	return 0;
}