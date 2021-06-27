#include<stdio.h>

void DisplaySchedule(char ch)
{
    if(ch =='A' || ch=='a')
	{
		printf("Your Exam At 7:00 AM\n");
	}
	else if(ch=='B' || ch=='b')
	{
		printf("Your Exam At 8:30 AM\n");
	}
	else if(ch=='C' || ch=='c')
	{
		printf("Your Exam At 9:20 AM\n");
	}
	else if(ch=='D' || ch=='d')
	{
		printf("Your Exam At 10:30 AM\n");
	}
	else
	{
		printf("Invalid Division\n");
	}
}
int main()
{
	char cValue='\0';
	
	printf("Please Enter Your Division For Your Exam Time\n");
	scanf("%c",&cValue);
	
	DisplaySchedule(cValue);
	
	return 0;
	
}

