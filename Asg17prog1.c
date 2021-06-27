#include<stdio.h>
#include<stdlib.h>

int Display(int *Arr,int iSize)
{
	int i=0;
	int iSum=0,iSum2=0;
	
	printf("Elemnts are\n");
	
	for(i=0;i<iSize;i++)
	{
     iSum= iSum+ Arr[i];
	}
	return iSum;
}
int main()
{
	int *arr=NULL;
	int iLength=0;
	int i=0,iRet=0;
	
	printf("Enter Number of Elements\n");
	scanf("%d",&iLength);
	
	arr=(int*)malloc(iLength * sizeof(int));
	
	printf("Enter %d elements",iLength);
	
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	iRet = Display(arr,iLength);
	
	printf("Addtion is %d",iRet);
	
	free(arr);
	
	return 0;
	
}