#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int gcd(int a,int b){
    if(b==0 ) return a;
    return gcd(b,a%b);
}

int findGCD(Node* head){
    if(head==NULL) return 0;
    int result=head->data;
    Node* current=head->next;

    while(current!=NULL){
        result=gcd(result,current->data);
        current=current->next;
    }
    return result;
}