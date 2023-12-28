#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};
class SLL
{
    public:

    Node * first;
    int size;

    SLL()
    {
        first=NULL;
        size=0;
    }

    void insertAtFirst(int data)
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
    void insertAtLast(int data)
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

    void Display()
    {
        Node *temp=first;

        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main()
{
    SLL sobj;

    sobj.insertAtFirst(50);
    sobj.insertAtFirst(40);
    sobj.insertAtFirst(30);
    sobj.insertAtFirst(20);
    sobj.insertAtFirst(10);

    sobj.insertAtLast(60);

    sobj.Display();

    cout<<"Number of nodes in my linkedlist "<<sobj.size<<endl;


    
    

}
