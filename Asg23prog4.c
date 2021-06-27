#include<stdio.h>
#include<stdbool.h>

bool Vowels(char str[])
{
	if(str==NULL)
	{
		return 0;
	}
	
	while(*str != '\0')
	{
		if((*str=='a') || (*str=='A') || (*str=='e') || (*str=='E') || (*str=='i') || (*str=='I') || (*str=='o') || (*str=='O') || (*str=='u') || (*str=='U') )
		{
			break;
		}
		str++;
	}
	
	if(*str=='\0')
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
	char Arr[40];
	bool bRet;
	
	printf("Enter String:\n");
	scanf("%[^'\n']s",Arr);
	
	bRet=Vowels(Arr);
	
	if(bRet == true)
	{
		printf("Vowels are Present\n");
	}
	else
	{
		printf("Vowels are Not Present\n");
	}

    return 0;	
}