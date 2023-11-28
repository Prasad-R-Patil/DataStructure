#include<stdio.h>
#include<stdlib.h>

//Structure Declaration

struct Node
{
    int data;                     // 4 Byte
    struct node *next;            // 8 Byte

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
    PNODE First = NULL; 

    return 0;
}