#include<stdio.h>

void Display(char str[])
{
	printf("Characters From String Are\n");
	
	while(*str != '\0')
	{
		printf("%c",*str);
		str++;
	}
}
int main()
{
	char Arr[40];
	
	printf("Enter Your Name\n");
	fgets(Arr,40,stdin);
	
	Display(Arr);
	
	return 0;
	
}