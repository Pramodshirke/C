#include<stdio.h>

int Toggle(char str[])
{
	int iCnt=0;
	
	if(str==NULL)
	{
		return 0;
	}
	while(*str != '\0')
	{
		iCnt++;
		str++;
	}
	str--;
	while(iCnt>0)
	{
		printf("%c",*str);
		iCnt--;
		str--;
	}
}
int main()
{
	char Arr[40];
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	//fgets(Arr,40,stdin);
	
	Toggle(Arr);
	
	return 0;
	
}