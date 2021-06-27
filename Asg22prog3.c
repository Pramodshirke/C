#include<stdio.h>

void Convert(char ch)
{
    if(ch>='A' && ch<='Z')
	{
		while(ch<'Z')
		{
			ch++;
		printf("%c\t",ch);
		}
	}
	else if(ch>='a' && ch<='z')
	{
		while(ch>'a')
		{
			printf("%c\t",ch);
			ch--;
		}
	}
	else
	{
		return;
	}
}
int main()
{
	char cValue='\0';
	
	printf("Enter Character\n");
	scanf("%c",&cValue);
	
	Convert(cValue);
	
	return 0;
	
}

