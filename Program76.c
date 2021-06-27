#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Frequency(int Arr[],int iSize)
{
	int i=0;
	
	if(Arr==NULL)
	{
		return -1;
	}
	iMax=Arr[0];
	for(i=0;i<iSize;i++)
	{
		if(Arr[i] == 11)
		{
			break;
		}
	}
	
	if(i==iSize)
	{
		return false;
	}
	else
	{
		return true;
	}
}
int main()
{
	int *arr=NULL;
	int iLength=0;
	int i=0;
	bool iRet;
	
	printf("Enter Number of Elements\n");
	scanf("%d",&iLength);
	
	arr=(int*)malloc(iLength * sizeof(int));
	
	printf("Enter %d elements\n",iLength);
	
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	iRet = Frequency(arr,iLength);
	
	if(iRet== true)
	{
		printf("11 is Presnt");		
	}
	else
	{
		printf("11 is not present");
	}



		
	free(arr);
	return 0;
	
}