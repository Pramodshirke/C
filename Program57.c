/*
Row =4
Colomn=3
1	*	*	*
*	2	*	*
*	*	3	*
*	*	*	4
*/

#include<stdio.h>

void Pattern(unsigned int iRow ,unsigned int iCol)
{
	int i=0,j=0;

	
	for(i=1;i<=iRow;i++)
	{ 
		for(j=1;j<=iCol;j++)
		   {		
				if(i==1 || j==1 || j==iCol || i==iRow)
				{
					printf("#\t");
				}
				else
				{
					printf("*\t");
				}
				
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
