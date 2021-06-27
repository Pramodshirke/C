#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iSize)
{
	int i=0;
	int iMin=0;
	
	if(Arr==NULL)
	{
		return -1;
	}
	iMin=Arr[0];
	for(i=0;i<iSize;i++)
	{
		if(Arr[i] < iMin)
		{
			iMin=Arr[i];
		}
	}

	return iMin;
	
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
	
	iRet = Minimum(arr,iLength);

			printf("Smallest Number is %d",iRet);

	
	
	
	
	free(arr);
	
	return 0;
	
}