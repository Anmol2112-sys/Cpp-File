#include<iostream>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;
    
    public :
    node(int data , Node* next){
        data = data1;
        next=next1;
    }
};

int lengthOfLL(Node* head){
    int cnt=0;
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
        cnt++;
    }
    return cnt;
}

int main(){
    vector<int> arr={12,5,8,7};
    Node* head=convertArr2LL(arr);
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}