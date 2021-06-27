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

void MultDigit(PNODE Head)
{
	
	while(Head!=NULL)
	{
		int iDigit=0;
		int iMult=1;
		while((Head->Data)!=0)
		{
			iDigit=(Head->Data)%10;
			if(iDigit==0)
			{
				iDigit=1;
			}
			iMult=iMult*iDigit;
			Head->Data=Head->Data/10;
		}
		printf("%d\t",iMult);
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
	InsertFirst(&First,151);
	InsertFirst(&First,395);
	InsertLast(&First,20);
	
	printf("Actual nodes\n");
    Display(First);
	
	printf("Multiplications of Digits Are:\n");
	MultDigit(First);
	printf("\n");
	
	return 0;	
}