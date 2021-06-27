#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize,int iValue)
{
	int i=0;
	
	for(i=iSize-1;i>=0;i--)
	{
     if(iValue == Arr[i])
	 {
	    break;
	 }
	}

	return i;
	
}
int main()
{
	int *arr=NULL;
	int iLength=0;
	int i=0,iRet=0, iNo=0;
	
	printf("Enter Number of Elements\n");
	scanf("%d",&iLength);
	
	arr=(int*)malloc(iLength * sizeof(int));
	
	printf("Enter %d elements\n",iLength);
	
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter Elelment to Search\n");
	scanf("%d",&iNo);
	
	iRet = Frequency(arr,iLength,iNo);

			printf("Frequency is %d",iRet);
	
	free(arr);
	
	return 0;
	
}