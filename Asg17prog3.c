#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	int i=0;
	
	printf("Even Numbers Divisible By 5 Are:\n");
	
	for(i=0;i<iLength;i++)
	{
		if((Arr[i] % 5 == 0) && (Arr[i] % 2 == 0))
		{
			printf("%d\n",Arr[i]);
		}
	}
}
int main()
{
	int *arr,iSize=0;
	int i=0;
	
	printf("How many Elements You Want To Enter\n");
	scanf("%d",&iSize);
	
	arr=(int*)malloc(iSize * sizeof(int));
	
	printf("Enter Elements\n");
	
	for(i=0;i<iSize;i++)
	{
	   scanf("%d",&arr[i]);	
	}
	
	Display(arr,iSize);
	
	free(arr);
	
	return 0;
	
	
}