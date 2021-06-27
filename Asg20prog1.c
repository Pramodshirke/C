#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
	int i=0;
	int iMax=0;
	
	iMax=Arr[0];
	
	for(i=0;i<iLength;i++)
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
	
	iRet=Product(arr,iSize);
	
	printf("Largest Element Is: %d",iRet);


	free(arr);
	
	return 0;
	
}