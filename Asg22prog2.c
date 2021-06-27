#include<stdio.h>
#include<stdbool.h>

void Convert(char ch)
{
    if(ch>='a' && ch<='z')
	{
		ch=ch-32;
		printf("Conversion is %c",ch);
	}
	else if(ch>='A' && ch<='Z')
	{
		ch=ch+32;
		printf("Conversion is %c",ch);
	}
	else
	{
		printf("%c",ch);
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

