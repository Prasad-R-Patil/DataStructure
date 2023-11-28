/*
    ::  Doubly Linked List :: 
            Insertion
                InsertFirst
                InsertLast
                InsertAtPosition
            Deletion
                DeleteFirst
                DeleteLast
                DeleteAtPosition
            Display
            Count
    :::::::::::::::::::::::::
*/

#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node * next;
    struct node * prev ; // #
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->prev = NULL; // #
    newn->data = no;
    newn->next = NULL;

    if(*Head==NULL) // DLL is empty
    {
        *Head = newn;
    } 
    else
    {
       newn->next = *Head; 
       (*Head)->prev = newn; // # 
       *Head = newn;
    }
}

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->prev = NULL; // #
    newn->data = no;
    newn->next = NULL;

    PNODE temp = *Head;
    if(*Head==NULL) // DLL is empty
    {
        *Head = newn;
    } 
    else
    {
       while((temp)->next != NULL)
       {
            temp = (temp)->next;
       }

      newn->prev = temp;
      temp->next = newn;
    }
}

void DeleteFirst(PPNODE Head)
{
    if(*Head==NULL)
    {
        return;
    }
    else if(((*Head)->next == NULL) && ((*Head)->prev == NULL))// single node
    {
        free(*Head);
        *Head = NULL;
    } 
    else
    {
        *Head = (*Head)->next;
        free((*Head)->prev);
        (*Head)->prev = NULL;
        
    }

}

void DeleteLast(PPNODE Head)
{
     if(*Head==NULL)
    {
        return;
    }
    else if(((*Head)->next == NULL) && ((*Head)->prev == NULL))// single node
    {
        free(*Head);
        *Head = NULL;
    } 
    else
    {
        PNODE temp = *Head;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        free(temp->next);
        temp->next = NULL;
    }
}

void Display(PNODE Head)
{
    printf("Contents of LinkedList are : \n");

    printf("NULL <==>");

    while(Head!=NULL)
    {

        printf("|%d| <==> ",Head->data);
        Head = Head->next;
    }
    printf("NULL \n");
    
}

int Count(PNODE Head)
{
    int iCnt = 0;
    while(Head!=NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

void InsertAtPos(PPNODE Head, int no, int iPos)
{
    int iSize = 0, i = 0;
    iSize = Count(*Head);
    PNODE newn = NULL;
    PNODE temp = *Head;

    if((iPos<1)||(iPos>iSize+1))
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos==1)
    {
        InsertFirst(Head,no);
    }
    else if(iPos== iSize+1)
    {
        InsertLast(Head,no);
    }
    else
    {
        temp = *Head;
        newn = (PNODE)malloc(sizeof(NODE));

        newn->prev = NULL; 
        newn->data = no;
        newn->next = NULL; // # 

        for(i = 1 ; i<iPos-1;i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
    }

}

void DeleteAtPos(PPNODE Head, int iPos)
{
    int iSize = 0;
    iSize = Count(*Head);

    if((iPos<1)||(iPos>iSize))
    {
        printf("Invalid Position\n");
        return;
    }
    if(iPos==1)
    {
        DeleteFirst(Head);
    }
    else if(iPos== iSize)
    {
        DeleteLast(Head);
    }
    else
    {
        
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    Display(First);
    iRet = Count(First);
    printf("The count is : %d\n",iRet);

    InsertLast(&First,101);
    InsertLast(&First,111);
    InsertLast(&First,121);
    
    Display(First);
    iRet = Count(First);
    printf("The count is : %d\n",iRet);

    /*
    DeleteFirst(&First);
    Display(First);
    iRet = Count(First);
    printf("The count is : %d\n",iRet);

    DeleteLast(&First);
    Display(First);
    iRet = Count(First);
    printf("The count is : %d\n",iRet);
    */

    InsertAtPos(&First,105,5);
    Display(First);
    iRet = Count(First);
    printf("The count is : %d\n",iRet);



    return 0;
}