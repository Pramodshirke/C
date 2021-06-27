#include<stdio.h>
#include<stdlib.h>

void Diff(int Arr[],int iLength)
{
	int i=0;
	int iDigit=0;
	int iCnt=0;
	int iTemp=0;
	
	printf("Three Digit Number is\n");
	
	for(i=0;i<iLength;i++)
	{
		iTemp=Arr[i];
	 while(iTemp!=0)
	 {
		iDigit=iTemp%10 ;
		iCnt++;
		iTemp/10;
	 }	
        if(iCnt==3)
		{
			printf("%d",iTemp);
		}	 
	}
}

int main()
{
	int *arr=NULL,iSize=0;
	int i=0;
	
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
	
	Diff(arr,iSize);

	free(arr);
	
	return 0;
	
}