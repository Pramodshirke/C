#include<stdio.h>
#include<stdlib.h>


int Frequency(int Arr[],int iLength)
{
   int i=0;
   int iCnt1=0,iCnt2=0;
   
   for(i=0;i<iLength;i++)
   {
	if(Arr[i]%2==0)
	{
		iCnt1++;
	}		
	else
	{
		iCnt2++;
	}
   }
   
   return iCnt1-iCnt2;
}

int main()
{
	int *arr,iSize=0;
	int i=0, iRet=0;
	
	printf("Enter Nubmer of elements\n");
	scanf("%d",&iSize);
	
	arr=(int*)malloc(iSize * sizeof(int));
	
	if(arr==NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter Elements\n");
	
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	iRet=Frequency(arr,iSize);
	
	printf("DIffrence is : %d",iRet);
	free(arr);
	
	return 0;
	
}