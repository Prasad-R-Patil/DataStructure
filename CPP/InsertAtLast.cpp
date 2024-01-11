#include<iostream>

using namespace std;

class Node
{
    public:
        int data;
        Node * next;

        Node(int data)
        {
            this->data=data;
            this->next=NULL;
        }
};

class IAF
{
    public:
    Node * first;
    int size;

    IAF()
    {
        first=NULL;
        size=0;
    }

    void InsertAtFirst(int data)
    {
        Node * newn = new Node(data);

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
        Node * newn = new Node(data);

        if(first==NULL)
        {
            first=newn;
            size++;
        }
        else
        {
            while(first->next != NULL)
            {
                first=first->next;
            }
             first->next=newn;
          
             size++;
        }
        
    }

    void Display()
    {
        Node *temp=first;

        while(temp!=NULL)
        {
            cout<<temp->data<<"==>>";
            temp=temp->next;
        }
        cout<<endl;
        cout<<"Number of nodes in my linkedlist ["<<size<<"]"<<endl;
    }


};



int main()
{
    IAF iobj;

    iobj.InsertAtFirst(20);
    iobj.InsertAtFirst(10);

    iobj.Display();

    iobj.InsertAtLast(30);
    iobj.InsertAtLast(40);
    iobj.InsertAtFirst(4);
    iobj.Display();



    return 0;
}