/*
  :::::::::::::::::::::::::::::::::::::::::
        Singly Circular Linked List 
        -> Insertion
            -> InsertFirst
            -> InsertLast
            -> InsertAtPos
        -> Deletion
            -> DeleteFirst
            -> DeleteLast
            -> DeleteAtPos
        -> Count Node
            -> Count
        -> Display
            -> Display

*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

// typedef struct node NODE;
// typedef struct node* PNODE;
// typedef struct node** PPNODE;

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;      // #

    return 0;
}