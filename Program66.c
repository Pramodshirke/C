#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{
	int i=0;
	
	printf("Number of Elemnts are\n");
	
	for(i=0;i<iSize;i++)
	{
		printf("%d\n",Arr[i]);
	}
}
int main()
{
	int *arr=NULL;
	int iLength=0;
	int i=0;
	
	printf("Enter the number of elements\n");
	scanf("%d",&iLength);
	
	arr = (int*)malloc(iLength * sizeof(int));
	
	printf("Enter the elements\n");
	
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	Display(arr,iLength);
	
	free(arr);
	return 0;
}