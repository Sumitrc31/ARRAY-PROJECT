#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};
void push(Node* &head,int element){
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
void pop(Node* &head){
    if(head==NULL){
        cout<<"Underflow";
    }else{
        Node *temp=head;
        head=head->next;
        delete temp;
    }
}
void print(Node* &head){
    if(head==NULL){
        cout<<"List is empty !";
    }else{
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    cout<<endl;
}
int main(){
    Node *head=NULL;
    push(head,10);
    push(head,20);
    push(head,30);
    push(head,40);
    print(head);
    pop(head);
    print(head);

}

//queue using Array

#include <bits/stdc++.h>
using namespace std;

int top = -1, bottom = 0, n;

void print(int q[]) {
    if (bottom > top) {
        cout << "Queue is empty\n";
        return;
    }
    for (int i = bottom; i <= top; i++) {
        cout << q[i] << " ";
    }
    cout << endl;
}

void push(int q[], int element) {
    if (top == n - 1) {
        cout << "Overflow\n";
    } else {
        top++;
        q[top] = element;
        cout << "Pushed element: " << element << "\n";
        cout << "Queue: ";
        print(q);
    }
}

void pop(int q[]) {
    if (bottom > top) {
        cout << "Underflow\n";
    } else {
        cout << "Popped element: " << q[bottom] << "\n";
        bottom++;
        cout << "Queue ";
        print(q);
    }
}

int main() {
    cout << "Enter the size of queue (1 to 100): ";
    cin >> n;
    int q[n];

    push(q, 10);
    push(q, 20);
    push(q, 30);

    pop(q);
    pop(q);
}
*/

