#include<stdio.h>
#include<stdlib.h>

int Diff(int Arr[],int iLength)
{
	int i=0;
	int iMin=0;
	int iMax=0;
	
	iMin=Arr[0];
	iMax=Arr[0];
	
	for(i=0;i<iLength;i++)
	{
		if(Arr[i] > iMax)
		{
			iMax=Arr[i];
		}
		if(Arr[i] < iMin)
		{
			iMin=Arr[i];
		}
	}
	
	return iMax-iMin;
}

int main()
{
	int *arr=NULL,iSize=0;
	int i=0;
	int iRet=0;
	
	printf("Enter Number of Elements\n");
	scanf("%d",&iSize);

    arr =(int*)malloc(iSize * sizeof(int));

    printf("Enter Elements\n");
     
    for(i=0;i<iSize;i++)
	{
		scanf("%d",&arr[i]);
	}	

	if(arr==NULL)
	{
		printf("Memory not Allocated");
		return -1;
	}
	
	iRet=Diff(arr,iSize);
	
	printf("Diffrence Is: %d",iRet);


	free(arr);
	
	return 0;
	
}