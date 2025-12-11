#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int value){
        data=value;
        next=NULL;
    }
};

class LinkedList{
    private:
    Node* head;

    public:
    LinkedList(){
        head=NULL;
    }

    //Insert at Head
    void insertAtHead(int value){
        Node* newNode=new Node(value);
        newNode->next=head;
        head=newNode;
    }
    //Insert at end
    void insertAtEnd(int value){
        Node* newNode=new Node(value);
        if(head==NULL){
            head=newNode;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
    //Insert at Kth position
    void insertAtPosition(int value,int pos){
        if(pos<=0){
            cout<<"Invalid position\n";
            return;
        }
      if(pos==1){
        insertAtHead(value);
        return;
      }
      Node* newNode=new Node(value);
      Node* temp=head;

      for(int i=1;i<pos-1&& temp!= NULL;i++){
        temp=temp->next;
      }
      if(temp==NULL){
        cout<<"Position out of range\n";
        delete newNode;
        return;
      }
      newNode->next=temp->next;
      temp->next=newNode;
    }

    //Insert after a node having a specific value
    void insertByValue(int value,int key){
        Node* temp=head;
        while(temp!=NULL && temp->data!=key){
            temp=temp->next;
        }
        if(temp==NULL){
            cout<<"Value not found in list\n";
            return;
        }
        Node* newNode=new Node(value);
        newNode->next=temp->next;
        temp->next=newNode;
    }
    //print list
    void printList(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
};

int main() {
    LinkedList list;

    list.insertAtHead(10);
    list.insertAtHead(20);
    list.insertAtEnd(5);
    list.insertAtPosition(15,3);
    list.insertByValue(99,10);

    cout<<"Linked List:";
    list.printList();
    return 0;

    
}