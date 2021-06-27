#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize)
{
	int i=0;
	int iMax=0;
	
	if(Arr==NULL)
	{
		return -1;
	}
	iMax=Arr[0];
	for(i=0;i<iSize;i++)
	{
		if(Arr[i] > iMax)
		{
			iMax=Arr[i];
		}
	}

	return iMax;
	
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
	
	iRet = Frequency(arr,iLength);

			printf("Largest Number is %d",iRet);

	
	
	
	
	free(arr);
	
	return 0;
	
}