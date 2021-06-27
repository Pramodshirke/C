

#include<stdio.h>
#include<stdlib.h>

int DisplayEvenSum(int Arr[],int iSize)
{
	int i=0;
	int iSum=0;
	
	if((Arr == NULL) || (iSize <= 0))
	{
		return 0;
	}
	
	printf("Even Elements Are\n");
	
	for(i=0;i<iSize;i++)
	{
	     if(Arr[i] % 2 == 0)
		 {
			 iSum=iSum+Arr[i];
		 }
	}
	return iSum;
}
int main()
{
	int *arr=NULL;
	int i=0;
	int iLength=0;
	int iRet=0;
	
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
	
	iRet=DisplayEvenSum(arr,iLength);
	
	printf("Summetion is : %d",iRet);
	
	free(arr);
	
	return 0;
}