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
    cout<<"Linked Lsit:";
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}