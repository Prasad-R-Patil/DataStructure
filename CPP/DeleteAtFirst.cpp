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
            Node *temp = first;

             while (temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newn;
            size++;
        }
        
    }

    void DeleteAtFirst()
    {
        if(first==NULL)
        {
            return;
        }
        else if(first->next ==NULL)
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
    

    void Display()
    {
        Node *temp=first;

        while(temp!=NULL)
        {
            cout<<temp->data<<" ";                                                   
            temp=temp->next;
        }
        cout<<endl;
        cout<<"Number of nodes in my linkedlist ["<<size<<"]"<<endl;
    }


};



int main()
{
    IAF iobj;

    iobj.InsertAtFirst(40);
    iobj.InsertAtFirst(30);
    iobj.InsertAtFirst(20);
    iobj.InsertAtFirst(10);

    iobj.Display();
   

    iobj.InsertAtLast(50);
    iobj.InsertAtLast(60);
    iobj.InsertAtLast(70);
    iobj.InsertAtLast(80);
    iobj.InsertAtLast(90);
    iobj.InsertAtLast(100);

    iobj.Display();

    iobj.DeleteAtFirst();

    iobj.Display();



    return 0;
}