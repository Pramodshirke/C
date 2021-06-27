#include<stdio.h>
#include<stdbool.h>


void Display(char ch)
{
  printf("Decimal\t %d\n",ch);
  printf("Octal\t %o\n",ch);
  printf("HexaDecimal\t %x",ch);
}
int main()
{
	char cValue='\0';
	bool bRet;
	printf("Enter Character\n");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	return 0;
	
}
