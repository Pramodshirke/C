// Input: 5
// Output: A	B	C	D	E	

#include<stdio.h>

void Pattern(unsigned int iNo)
{
	int iCnt=0;
	char ch='A';
	
	for(iCnt=1;iCnt<=iNo;iCnt++) //for(iCnt=1;iCnt<=iNo;iCnt++,ch++) Ways To increse counter of character to display A B C D....
	{
		printf("%c\t",ch++);	//printf("%c\t",ch)
		                        //ch++;
	}
}

int main()
{
	unsigned int iValue=0;
	char cValue='\0';
	
	printf("Enter Number\n");
	scanf("%u",&iValue);
	
	Pattern(iValue);
	
	return 0;
}