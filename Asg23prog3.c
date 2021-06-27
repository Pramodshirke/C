#include<stdio.h>

int main()
{
	char Arr[40];
	
	printf("Enter String:\n");
	scanf("%[^'\n']s");
	
	#include<stdio.h>

int Diffrence(char str[])
{
	int iCnt1=0;
	int iCnt2=0;
	
	
	
	if(str == NULL)
	{
		return 0;
	}
	while(*str != '\0')
	{
		if((*str>='a') && (*str<='z'))
		{
			iCnt1++;
		}
		else if((*str>='A') && (*str<='Z'))
		{
			iCnt2++;
		}		
		str++;
	}
	
	return iCnt1-iCnt2;
}
int main()
{
	char Arr[40];
	int iRet=0;
	
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=Diffrence(Arr);
	
	printf("Diffrence is : %d",iRet);
	
	return 0;
	
}
}