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

int FirstOcc(PNODE Head,int iPos)
{
	int iCnt=1;
	
	while(Head!=NULL)
	{
		if(Head->Data == iPos)
		{
			break;
		}
	
		Head=Head->Next;
		iCnt++;	
		
	}
 
    if(Head->Data!=iPos)
    {
	    return 0;
    }
    else
    {
	    return iCnt;
    }
}
int LastOcc(PNODE Head,int iPos)
{
	int iCnt=0;
	
	while(Head!=NULL)
	{
		if(Head->Data == iPos)
		{
			iCnt++;
			Head=Head->Next;
		}
        else
		{
		   iCnt++;                                 
		   Head=Head->Next;
		}
		
	}
 
	return iCnt;
}
int Addition(PNODE Head)
{
	int iSum=0;
	
	while(Head!=NULL)
	{
		iSum=iSum+(Head->Data);
		Head=Head->Next;
	}
	return iSum;
}

int Maximum(PNODE Head)
{
	int iMax=0;
	
	while(Head!= NULL)
	{
		if(Head->Data>iMax)
		{
			iMax=Head->Data;
		}
		Head=Head->Next;
	}
	return iMax;
}

int Minimum(PNODE Head)
{
	int iMin=Head->Data;
	
	while(Head!= NULL)
	{
		if(Head->Data<iMin)
		{
			iMin=Head->Data;
		}
		Head=Head->Next;
	}
	return iMin;
}
int main()
{
	PNODE First=NULL;
	int iRet=0,iPos=0;
	
	InsertFirst(&First,10);
	InsertFirst(&First,20);
	InsertFirst(&First,30); 
	InsertFirst(&First,40);
	InsertFirst(&First,50);
	InsertFirst(&First,60);
	InsertLast(&First,20);
	
	printf("Actual nodes\n");
    Display(First);
	//printf("Enter Element To Search:\n");
	//scanf("%d",&iPos);
	
	//iRet=FirstOcc(First,iPos);
	//printf("Number Present At %d Position\n",iRet);
	
	//printf("Enter Element To Search:\n");
	//scanf("%d",&iPos);
	
	//iRet=LastOcc(First,iPos);
	//printf("Number Present At %d Position\n",iRet);
	
	//iRet=Addition(First);
	//printf("Addtion of Elemnts is:%d\n",iRet);
	
	//iRet=Maximum(First);
	//printf("Largest Element is:%d\n",iRet);
	
	iRet=SecondMaximum(First);
	printf("Second Largest Element is:%d\n",iRet);
	
	//iRet=Minimum(First);
	//printf("Smallest Element is:%d\n",iRet);
	return 0;	
}