#include<stdio.h>

int CopyContent(char *src,char *dest,int iCnt)
{
	if(src==NULL || dest==NULL || iCnt<=0)
	{
		return 0;
	}
	
	while((iCnt > 0) && (*src != '\0'))
	{
		*dest=*src;
		src++;
		dest++;
		iCnt--;
	}
	*dest='\0';
}
int main()
{
	char Arr[40];
	char Brr[40];
	int iValue=0;
	
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter Number till That Copy\n");
	scanf("%d",&iValue);
	
	CopyContent(Arr,Brr,iValue);
	
	printf("Copied String is:\n%s",Brr);
	
	return 0;
}