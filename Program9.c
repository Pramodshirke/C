#include<stdio.h>

void CheckResult(int iMarks)
{
	
	
	if((iMarks>100) || (iMarks<0))
	{
		printf("Wrong Entry");
		return;
	}
	if(iMarks>=0 && iMarks<35)
	{
		printf("You are fail");
	}
	else if(iMarks>=35 && iMarks<50)
	{
		printf("You are third class");
	}
	else if(iMarks>=50 && iMarks<60)
	{
		printf("You are second class");
	}
	else if(iMarks>=60 && iMarks<70)
	{
		printf("You are first class");
	}
	else if(iMarks>=70 && iMarks<=100)
	{
		printf("You are firstclass with distinction");
	}
	
	
}

int main()
{
	
	int iValue=0;
	
	printf("Enter marks\n");
	scanf("%d",&iValue);
	
	CheckResult(iValue);
	
	return 0;
	
}