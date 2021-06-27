#include<stdio.h>

int main()
{
	char Arr[40];
	
	printf("Enter Your Name\n");
	//scanf("%[^'\n']s",Arr);
	
	//gets(Arr);
	fgets(Arr,40,stdin);
	//scanf("%s",Arr);
	
	printf("Your Name is: %s\n",Arr);
	
	return 0;
}