#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};
class SinglyLinkedList
{
    public:

    Node * first;
    int size;

    SinglyLinkedList()
    {
        first=NULL;
        size=0;
    }

    void InsertAtFirst(int data)
    {
        Node *newn=new Node();
        newn->data=data;
        newn->next=NULL;

        if(first==NULL)
        {
            first=newn;
            size++;
        }
        else
        {
            newn->next=first;
            first=newn;
            size++;
        }
    }
    void InsertAtLast(int data)
    {
        Node *newn=new Node();
        newn->data=data;
        newn->next=NULL;

        if(first==NULL)
        {
            first=newn;
            size++;
        }
        else
        {
            Node *temp=first;

            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newn;
            size++;
        }
    }

        void DeleteAtFirst()
    {
    
        if(first==NULL)
        {
            return;
        }
        else if(first->next==NULL)
        {
            delete first;
            first=NULL;

            size--;
        }
        else
        {
            Node * temp = first;
            
            first=first->next;
            delete temp;

            size--;
            
        }
    }
    void DeleteAtLast()
    {
    
        if(first==NULL)
        {
            return;
        }
        else if(first->next==NULL)
        {
            delete first;
            first=NULL;

            size--;
        }
        else
        {
            Node * temp = first;
            
           while(temp->next->next != NULL)
           {
              temp=temp->next;
           }
             
             delete temp->next;
             temp->next=NULL;
             size--;
        }
    }
    

    void Display()
    {
        Node *temp=first;

        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
        cout<<"Number of nodes in my linkedlist "<<size<<endl;
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

    sobj.Display();

    sobj.InsertAtLast(110);
    sobj.InsertAtLast(120);
    sobj.InsertAtLast(130);
    sobj.InsertAtLast(140);
    sobj.InsertAtLast(150);

    sobj.Display();

    sobj.DeleteAtFirst();
    
    sobj.Display();

    sobj.DeleteAtLast();
    
    sobj.Display();
    

    


    
    

}
