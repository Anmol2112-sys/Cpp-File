#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int val){
        data=val;
        next=NULL;

    }
};


class ReverseLinkedList{
    Node *head;

    public:
    ReverseLinkedList(){
        head=NULL;
    }

    void insert(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            return;
        }
        Node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }

    void reverse(){
        Node *prev=NULL;
        Node *current=head;
        Node *next=NULL;

        while(current!=NULL){
            next=current->next; // Store next node
            current->next=prev; // Reverse current node's pointer
            prev=current; // Move prev to current
            current=next; // Move to next node
        }
        head=prev; // Update head to new first node
    }

    void display(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->"<<"";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main(){
    ReverseLinkedList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);

    cout<<"Original List: ";
    list.display();

    list.reverse();

    cout<<"Reversed List: ";
    list.display();

    return 0;
}