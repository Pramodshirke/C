#include<stdio.h>

void Pattern(unsigned int iRow ,unsigned int iCol)
{
	int i=0,j=0;
	int iCnt=1;

	for(i=1;i<=iRow;i++)
	{ 
		for(j=1;j<=iCol;j++)
	       {
			printf("%d\t",iCnt++);
	       }
		   printf("\n");
	}	   
}

int main()
{
	unsigned int iValue1=0,iValue2=0;


	printf("Enter Rows\n");
	scanf("%u",&iValue1);
	
    printf("Enter Colomns\n");
	scanf("%u",&iValue2);
	Pattern(iValue1,iValue2);
	
	return 0;
}