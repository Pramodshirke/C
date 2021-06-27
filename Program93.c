#include<stdio.h>

int Reverse(char str[])
{
	char *start,*end;
	char temp;
	if(str==NULL)
	{
		return 0;
	}
	end=str;
	start=str;
	
	while(*end != '\0')
	{
		end++;
	}
	end--;
	
	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		
		start++;
		end--;
	}
	
}
int main()
{
	char Arr[40];
	
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	Reverse(Arr);
	
	printf("Reversed String is: %s",Arr);
	return 0;
}