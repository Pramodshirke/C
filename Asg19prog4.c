#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iNo1,int iNo2)
{
	int i=0;
	
	printf("Numbers Are\n");
	
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]>=iNo1 && Arr[i]<=iNo2)
		{
		   printf("%d\n",Arr[i]);
		}
	}
}

int main()
{
	int *arr=NULL,iSize=0;
	int i=0,iNo1=0;
	int iRet=0,iNo2=0;
	
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
	
	printf("Enter First Range\n");
	scanf("%d",&iNo1);
	
	printf("Enter Last Range\n");
	scanf("%d",&iNo2);
	
	Range(arr,iSize,iNo1,iNo2);


	free(arr);
	
	return 0;
	
}