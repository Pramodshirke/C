#include<stdio.h>
#include<stdlib.h>

int Frequency(int *Arr,int iSize,int iValue)
{
	int i=0;
	int iCnt=0;
	
	printf("Elemnts are\n");
	
	for(i=0;i<iSize;i++)
	{
     if(iValue == *Arr+i)
	 {
		 iCnt++;
	 }
	}
	return iCnt;
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
	
	printf("Enter the element you want to search\n");
	scanf("%d",&iNo);
	
	iRet = Frequency(arr,iLength,iNo);
	
	printf("%d is present %d times",iNo,iRet);
	
	free(arr);
	
	return 0;
	
}