//Accept no from user and diplay its table
//input: 2
//output:2 4 6 8 10 12 14 16 18 20

#include<stdio.h>

void DisplayTable(int iNo)
{
	int iCnt=0;
	int ans;
	if(iNo<0)
	{
		iNo= -iNo;
	}
	for(iCnt=1;iCnt<=10;iCnt++)
	{
	   ans= iNo*iCnt;// Avoid
       printf("%d\n",ans);	//printf("%d\n",iNo*iCnt);   
	}
}

int main()
{
	
	int iValue=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	DisplayTable(iValue);
	
	return 0;
	
}