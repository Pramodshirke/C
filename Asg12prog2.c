#include<stdio.h>

void Pattern(unsigned int iRow ,unsigned int iCol)
{
	int i=0,j=0;
    char ch1='\0';
	char ch2='\0';
	for(i=1;i<=iRow;i++)
	{
		for(j=1,ch1='A',ch2='a';j<=iCol;j++)
	       {
			   if(i%2==0)
			   {
				printf("%c\t",ch2++);
			   }
			   else
			   {
				   printf("%c\t",ch1++);
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