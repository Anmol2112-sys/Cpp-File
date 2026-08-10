#include<iostream>
using namespace std;
struct Node{
    int data;
    Node * next;

    Node(int value){
        data=value;
        next=NULL;
    }
};

void traverse(Node *head) {
    Node* temp=head;
    cout<<"Linked List:";
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(-50);

    traverse(head);

    return 0;
}