

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{
	int i=0;
	if((Arr == NULL) || (iSize <= 0))
	{
		return;
	}
	
	printf("Even Elements Are\n");
	
	for(i=0;i<iSize;i++)
	{
		if(Arr[i] % 2 == 0)
		{
			printf("%d\n",Arr[i]);
		}
	}
}
int main()
{
	int *arr=NULL;
	int i=0;
	int iLength=0;
	
	printf("Enter Number of elements\n");
	scanf("%d",&iLength);
	
	arr=(int*)malloc(iLength * sizeof(int));
	
	if(arr == NULL)
	{
		printf("Unable to allocate memory\n");
		return -1;
	}
	
	printf("Enter Elements\n");
	
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	Display(arr,iLength);
	
	free(arr);
	
	return 0;
}