#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
void print(Node* &head){
        if(head==NULL){
            cout<<"List is empty !";
        }else{
            Node *temp=head;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }
}
void push(Node* &head,int element){
    Node *new_block=new Node ;

    if(new_block==NULL){
        cout<<"Overflow";
    }else{

        new_block->data=element;
        new_block->next=head;
        head=new_block;
    }
}
void pop(Node* &head){
    if(head==NULL){
        cout<<"Underflow";
    }else{
        Node *temp=head;
        head=temp->next;
        delete temp;
    }

}
int main(){
    Node *head=NULL;
    push(head,10);
    push(head,20);
    push(head,30);
    print(head);
    pop(head);
    print(head);

}

//Stack using Array

#include <bits/stdc++.h>
using namespace std;

int top = -1, n;

void print(int stk[]) {
    if (top == -1) {
        cout << "Stack is empty\n";
        return;
    }
    for (int i = top; i >= 0; i--) {
        cout << stk[i] << " ";
    }
    cout << endl;
}

void push(int stk[], int element) {
    if (top == n - 1) {
        cout << "Overflow\n";
    } else {
        top++;
        stk[top] = element;
        cout << "Pushed element: " << element << "\n";
        cout << "Stack: ";
        print(stk);
    }
}

void pop(int stk[]) {
    if (top == -1) {
        cout << "Underflow\n";
    } else {
        cout << "Popped element: " << stk[top] << "\n";
        top--;
        cout << "Stack: ";
        print(stk);
    }
}

int main() {
    cout << "Enter the size of stack : ";
    cin >> n;
    int stk[n];

    push(stk, 10);
    push(stk, 20);
    pop(stk);
    pop(stk);
    pop(stk);
}


