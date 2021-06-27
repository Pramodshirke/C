// Input: 5
// Output: A	A	A	A	A	

#include<stdio.h>

void Pattern(unsigned int iNo,char ch)
{
	int iCnt=0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%c\t",ch);
	}
}

int main()
{
	unsigned int iValue=0;
	char cValue='\0';
	
	printf("Enter Number\n");
	scanf("%u",&iValue);
	
	printf("Character which you want to display\n");
	scanf(" %c",&cValue);
	
	Pattern(iValue,cValue);
	
	return 0;
}