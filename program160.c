#include<stdio.h>
#include<stdlib.h>

//Structure Declaration

struct node
{
    int data;                     // 4 Byte
    struct node * next;            // 8 Byte

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    // step 1 : Allocate memory for node
     PNODE newn = NULL;
     newn = (PNODE)malloc(sizeof(NODE));

    // step 2 : Initilise th node
    newn->data = No;
    newn->next = NULL;

    //step 3 : check whether  LL is empty or not
    if(*Head == NULL) //LL is empty
    {
        *Head = newn;
    }
    else  //LL contains atlest 1 node in it
    {
        newn -> next = *Head;
        *Head = newn;
    }

}
void Display(PNODE Head)
{
    int iCnt = 0;
    printf("Element of Link List are \n==>>>");
    while(Head != NULL)
    {
        printf("|%d| --> ", Head->data);
        Head = Head -> next;
        iCnt++;
    }
    printf("NULL \n");

    printf("Count is ==>>> [ %d ]",iCnt);
}

int main()
{
    PNODE First = NULL; 

    InsertFirst(&First, 111);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    Display(First);

    return 0;
}