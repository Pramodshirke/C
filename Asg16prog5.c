/*
Row =6
Colomn=6
1       2       3       4       5
1       2                       5
1               3               5
1                       4       5
1       2       3       4       5
*/

#include<stdio.h>

void Pattern(unsigned int iRow ,unsigned int iCol)
{
	int i=0,j=0;
	
	if(iRow != iCol) 
	{
		return ;
	}
	
	for(i=1;i<=iRow;i++)
	{ 
		for(j=1;j<=iCol;j++)
		{		
				if(i==1 || i==iRow || j==1 || j==iCol || i==j)
				{
					printf("%d\t",j);
		    	}
				else
				{
					printf(" \t");
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
