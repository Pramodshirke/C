#include<stdio.h>

int Reverse(char str[])
{
	char *start,*end,Temp;
	
	if(str == NULL)
	{
		return 0;
	}
	
	start=str;
	end=str;
	
	while(*end != '\0')
	{
		end++;
	}
	end--;
	
	while(start<end)
	{
		Temp=*start;
		*start=*end;
		*end=Temp;
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
	
	printf("MOdified String Is: %s",Arr);
	
	return 0;
	
}