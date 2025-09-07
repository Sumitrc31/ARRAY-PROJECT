/*
        Submitted By: Mahbubur Rahman Sayem
*/

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *create_node(node *head,int element)
{
    node *new_block=new node;
    if(new_block==NULL)
    {
        cout<<"Overflow";
        exit(1);
    }
    new_block->data=element;
    new_block->next=head;
    return new_block;
}

void insert_after(node *prev_node,int element)
{
    if(prev_node==NULL)
    {
        cout<<"Cannot insert";
        return;
    }
    node *new_block=new node;
    new_block->data=element;
    new_block->next=prev_node->next;
    prev_node->next=new_block;
}

void delete_first(node *&head)
{
    if(head==NULL)
    {
        cout<<"Underflow(Cannot delete)";
        exit(1);
    }
    node *temp=head;
    head=head->next;
    delete temp;
}

void delete_last(node *&head)
{
    if(head==NULL)
    {
        cout<<"Underflow(List is empty)";
        exit(1);
    }
    if(head->next==NULL)
    {
        node *temp=head;
        delete head;
        head=NULL;
        return;
    }
    node *temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
}

void delete_middle(node *&head)
{
    if(head==NULL || head->next==NULL || head->next->next==NULL)
    {
        cout<<"List is too small."<<endl;
        return;
    }
    int count=0;
    node *temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    int mid=count/2+1;
    temp=head;
    for(int i=1; i<mid-1; i++)
    {
        temp=temp->next;
    }
    node *del=temp->next;
    temp->next=del->next;
    delete del;
}

void delete_by_value(node *&head,int value)
{
    if(head==NULL)
    {
        cout<<"Underflow(Delete is not possible)"<<endl;
        exit(1);
    }
    if(head->data==value)
    {
        node *del=head;
        head=head->next;
        delete del;
        return;
    }
    node *temp=head;
    while(temp->next!=NULL && temp->next->data!=value)
    {
        temp=temp->next;
    }
    if(temp->next==NULL)
    {
        cout<<"Value not found."<<endl;
        return;
    }
    node *del=temp->next;
    temp->next=del->next;
    delete del;
}

void print(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    node *head=NULL;
    node *first,*second,*third,*fourth;

    first=create_node(head,10);
    head=first;

    second=create_node(first->next,20);
    first->next=second;

    third=create_node(second->next,30);
    second->next=third;

    fourth=create_node(third->next,40);
    third->next=fourth;

    cout<<"Before Operation: ";
    print(head);
    cout<<endl;

    head=create_node(head,5);
    cout<<"After Insert: ";
    print(head);
    cout<<endl;

    insert_after(second,25);
    cout<<"Insert After a given node: ";
    print(head);
    cout<<endl;

    delete_first(head);
    cout<<"After Delete at first: ";
    print(head);
    cout<<endl;

    delete_last(head);
    cout<<"After delete at last: ";
    print(head);
    cout<<endl;

    delete_middle(head);
    cout<<"After delete at middle: ";
    print(head);
    cout<<endl;

    delete_by_value(head,20);
    cout<<"After deleting by value: ";
    print(head);
    cout<<endl;

    return 0;
}
