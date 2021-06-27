#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
  int i=0;
   
  for(i=0;i<iLength;i++)
  {
	  if(iNo==Arr[i])
	  {
		break;
	  }
  }
  
	return i;
  
}
int main()
{
	int *arr,iSize=0;
	int i=0,iNo=0;
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
	
	printf("Enter Number For Frequency\n");
	scanf("%d",&iNo);
	
	iRet=Frequency(arr,iSize,iNo);
	
	printf("%d is Present at %d Postion ",iNo,iRet);


	free(arr);
	
	return 0;
	
}