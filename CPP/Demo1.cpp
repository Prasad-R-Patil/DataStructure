#include<iostream>

using namespace std;

class Node
{
    public:
        int data;
        Node * Next;
};

class SSL
{
    public:
        Node * First;
        int Size;

    SSL()
    {
        First = NULL;
        Size=0;
    }

    void InsrtAtFirst(int data)
    {
        Node * newn = new Node();

        newn->data=data;
        newn->Next=NULL;

        if(First==NULL)
        {
            First=newn;
            Size++;
        }
        else
        {
            newn->Next=First;
            First=newn;
            Size++;
        }
    }

     void InsrtAtLast(int data)
    {
        Node * newn = new Node();

        newn->data=data;
        newn->Next=NULL;

        if(First==NULL)
        {
            First=newn;
            Size++;
        }
        else
        {
            Node * temp = First;

            while (temp->Next != NULL)
            {
                temp=temp->Next;
            }
            temp->Next=newn;
            Size++;
           
        }
    }



    void Display()
    {
        Node * temp = First;

        while(temp != NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->Next;

        }
        cout<<endl;
    }
};


int main()
{
    SSL sobj;

    sobj.InsrtAtFirst(500);
    sobj.InsrtAtFirst(400);
    sobj.InsrtAtFirst(300);
    sobj.InsrtAtFirst(200);
    sobj.InsrtAtFirst(100);


    sobj.InsrtAtLast(600);
    sobj.InsrtAtLast(700);
    sobj.InsrtAtLast(800);
   


    sobj.Display();
}