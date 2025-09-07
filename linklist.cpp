#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node *create_new_node(Node *head,int element){
    Node *new_block= new Node;
    if(new_block==NULL){
        cout<<"Overflow\n";
        exit(1);
    }else{
        new_block->data=element;
        new_block->next=head;
        return new_block;
    }
}
void insert_beggining(Node* &head,int element){
        Node *new_block=new Node;
        new_block->data=element;
        new_block->next=head;
        head=new_block;
}
void insert_spacific_point(Node* &head,int element,int pos){
        Node *new_block=new Node;
        new_block->data=element;
        if(pos==1){
            new_block->next=head;
            head=new_block;
        }else{
            int c=1;
            Node *temp=head;
            while(temp!=NULL && c<pos-1){
                temp=temp->next;
                c++;
            }
            if(temp==NULL){
                cout<<"Overflow";
            }else{
                new_block->next=temp->next;
                temp->next=new_block;

            }
        }

}
void insert_end(Node* &head,int element){
        Node *new_block=new Node;
        new_block->data=element;
        new_block->next=NULL;
        if(head==NULL){
            head=new_block;
        }else{
            Node *temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=new_block;
        }
}

void delete_from_beggining(Node* &head){
    if(head==NULL){
        cout<<"Underflow\n";
    }else{
        Node *temp=head;

        head=head->next;
        delete temp;
    }
}
void delete_specific_point(Node* &head,int pos){
    int c=1;
    Node *temp=head;
    if(temp==NULL){
        cout<<"Underflow\n";
    }else{
        if(pos==1){
                Node *temp=head;

        head=head->next;
        delete temp;

        }else{
        while(temp!=NULL && c<pos-1){
            temp=temp->next;
            c++;
        }
        if(temp==NULL){
            cout<<"Position is out of range";
        }else{
            temp->next=temp->next->next;
            delete temp->next;

        }
    }
    }
}
void delete_from_end(Node* &head){
    if(head==NULL){
        cout<<"Underflow\n";
    }else{
        Node *temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
}
void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node *head=NULL;
    Node *first,*second,*third,*fourth;
    first=create_new_node(head,10);
    head=first;
    second=create_new_node(first->next,20);
    first->next=second;
    third=create_new_node(second->next,30);
    second->next=third;
    fourth=create_new_node(third->next,40);
    third->next=fourth;
    print(head);
    delete_from_beggining(head);
    print(head);
    delete_from_end(head);
    print(head);
    insert_beggining(head,10);
    print(head);
    insert_end(head,40);
    print(head);
    insert_spacific_point(head,100,3);
    print(head);
    delete_specific_point(head,3);
    print(head);

}
