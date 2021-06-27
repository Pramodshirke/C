#include<stdio.h>

void DisplayR()
{
	static char i='a';
	
	if(i<'g')
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