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
    newn->prev = NULL;
    newn->data = no;
    newn->next = NULL;

    if(*Head==NULL)
    {
        *Head = newn;
    } 
    else
    {
       
    }
}

void InsertLast(PPNODE Head, int no)
{

}


void InsertAtPos(PPNODE Head, int no, int iPos)
{


}

void DeleteFirst(PPNODE Head)
{

}

void DeleteLast(PPNODE Head)
{
    
}

void DeleteAtPos(PPNODE Head, int iPos)
{
    
}

void Display(PNODE Head)
{

}

int Count(PNODE Head)
{

    return 0;
}

int main()
{
    PNODE First = NULL;

    return 0;
}