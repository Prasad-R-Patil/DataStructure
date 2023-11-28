#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *  PNODE;
typedef struct node **  PPNODE;

void InsertFirst(PPNODE Head , int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head==NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }

}

void InsertLast(PPNODE Head, int No)
{
    PNODE Temp = *Head;
    PNODE newn = NULL;
     newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head==NULL)
    {
        *Head = newn;
    }
    else
    {
        while(Temp->next != NULL)
        {
            Temp = Temp->next;
        }
        Temp->next=newn;
    }

}

void DeleteFirst(PPNODE Head)
{
    PNODE Temp  =*Head;
    if(*Head==NULL)                     //Case 1
    {
        return;
    }
    else if ((*Head) -> next == NULL)   //Case 1
    {
        free(*Head);
        *Head = NULL;
    }
    else                                //Case 3
    {
        *Head = (*Head) -> next;
        free(Temp);
    }
}

void DeleteLast(PPNODE Head)
{
    if(*Head==NULL)                     //Case 1
    {
        return;
    }
    else if ((*Head) -> next == NULL)   //Case 1
    {
        free(*Head);
        *Head = NULL;
    }
    else                                //Case 3
    {

    }   
}

void Display(PNODE Head)
{
    printf("Contents of Linked List : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);

        Head = Head->next;
    }
    printf("NULL \n");
}

int Count(PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
       iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

int main()
{
    int iRet = 0;

    PNODE First  = NULL;

    InsertFirst(&First, 111);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    InsertLast(&First,121);
    InsertLast(&First,151);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);    

    DeleteFirst(&First);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    return 0;
}