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
	char ch='\0';
	
	if(iRow != iCol)
	{
		return ;
	}
	
	for(i=1;i<=iRow;i++)
	{ 
		for(j=1,ch='A';j<=iCol;j++,ch++)
		   {		
				if(i>=j)
				{
					printf("%c\t",ch);
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
