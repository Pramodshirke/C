#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int Data;
	struct node *Next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int No)
{
	PNODE newn=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->Data=No;
	newn->Next=NULL;
	
	if(*Head==NULL)
	{
		*Head=newn;
	}
	else
	{
		newn->Next=*Head;
		*Head=newn;
	}
}
void InsertLast(PPNODE Head,int No)
{
	PNODE newn=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->Data=No;
	newn->Next=NULL;
	
	if(*Head==NULL)
	{
		*Head=newn;
	}
	else
	{
		PNODE temp=*Head;
		
		while(temp->Next!=NULL)
		{
			temp=temp->Next;
		}
		temp->Next=newn;
	}
}

void Display(PNODE Head)
{
	while(Head!=NULL)
	{
		printf("|%d|->\t",Head->Data);
		Head=Head->Next;
	}
	printf("NULL\n");
}
void Perfect(PNODE Head)
{
	int iCnt=0;
	while(Head!=NULL)
	{
		int iSum=0;
		for(iCnt=1;iCnt<=(Head->Data)/2;iCnt++)
		{
			if((Head->Data) % iCnt == 0)
			{
				iSum=iSum+iCnt;
			}
		}
		if(iSum == Head->Data)
        {	   
		    printf("%d\t",(Head->Data));
		}
		Head=Head->Next;
		
	}
	
}

void Prime(PNODE Head)
{
	while(Head!=NULL)
	{
		int iCnt =0;
		for(iCnt=2;iCnt<=(Head->Data)/2;iCnt++)
		{
			if((Head->Data) % iCnt == 0)
			{
				break;
			}
		}
		if(iCnt == ((Head->Data)/2)+1)
        {	   
		    printf("%d\t",(Head->Data));
		}
		Head=Head->Next;
	}
}

int SumEven(PNODE Head)
{
	int iSum=0;
	while(Head!=NULL)
	{
		if((Head->Data) % 2 == 0)
		{
			iSum=iSum+(Head->Data);
		}
	    Head=Head->Next;
	}
	
	return iSum;
}

void AddDigit(PNODE Head)
{
	
	while(Head!=NULL)
	{
		int iDigit=0,iSum=0;
		
		while((Head->Data)!=0)
		{
			iDigit=(Head->Data)%10;
			iSum=iSum+iDigit;
			Head->Data=Head->Data/10;
		}
		printf("%d\t",iSum);
		Head=Head->Next;
	}
}

int main()
{
	PNODE First=NULL;
	int iRet=0,iPos=0;
	
	InsertFirst(&First,28);
	InsertFirst(&First,20);
	InsertFirst(&First,3); 
	InsertFirst(&First,6);
	InsertFirst(&First,7);
	InsertFirst(&First,7);
	InsertLast(&First,20);
	
	printf("Actual nodes\n");
    Display(First);
	
	printf("Perfect Numbers Are:\n");
	Perfect(First);
	printf("\n");
	
	printf("Prime Numbers Are:\n");
	Prime(First);
	printf("\n");
	
	iRet=SumEven(First);
	printf("Addition of Even Numbers is:%d\n",iRet);
	
	printf("Addtion Of Digits are as follows:");
	AddDigit(First);
	
	return 0;	
}