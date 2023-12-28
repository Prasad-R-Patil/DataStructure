#include<iostream>
using namespace std;

class NODE
{
    public:
        int data;
        NODE * next;
};

class SinglyLinkedList
{
    public: 
            NODE * Head;
            int Size;
    
    SinglyLinkedList()
    {
        Head = NULL;
        Size = 0;
    }

    void InsertAtFirst(int data)
    {
        NODE * newn = new NODE();

        newn->data=data;
        newn->next=NULL;

        if(Head==NULL)
        {
            Head=newn;
            Size++;
        }
        else
        {
            newn->next=Head;
            Head=newn;
            Size++;

        }
    }

    void InsertAtLast(int data)
    {
             NODE * newn = new NODE();

        newn->data=data;
        newn->next=NULL;

        if(Head==NULL)
        {
            Head=newn;
            Size++;
        }
        else
        {
            NODE * temp=Head;

            while (temp->next != NULL)
            {
                temp=temp->next;
            }
            temp->next=newn;
            Size++;
        }
    }

    void DeleteAtFirst()
    {
        Head->data=Head->next->data;
        Head->next=Head->next->next;

        Size--;
    }

    // void DeleteAtLast()
    // {
    //     NODE * temp = Head;

    //     while(temp->next->next = NULL)
    //     {
    //         temp=temp->next;
    //     }
    //     temp->next=NULL;
    //     Size--;
    // }

   void Display()
    {
        NODE *temp=Head;

        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
        cout<<Size<<endl;
        
    }

};

int main()
{
    SinglyLinkedList  sobj;

    sobj.InsertAtFirst(100);
    sobj.InsertAtFirst(90);
    sobj.InsertAtFirst(80);
    sobj.InsertAtFirst(70);
    sobj.InsertAtFirst(60);
    sobj.InsertAtFirst(50);
    sobj.InsertAtFirst(40);
    sobj.InsertAtFirst(30);
    sobj.InsertAtFirst(20);
    sobj.InsertAtFirst(10);

    sobj.InsertAtLast(110);
    sobj.InsertAtLast(120);
    sobj.InsertAtLast(130);
    sobj.InsertAtLast(140);
    sobj.InsertAtLast(150);

    sobj.DeleteAtFirst();
    sobj.DeleteAtFirst();

    // sobj.DeleteAtLast();
    // sobj.DeleteAtLast();

    sobj.Display();
    

}