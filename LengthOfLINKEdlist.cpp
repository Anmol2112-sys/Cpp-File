#include<iostream>
#include<vector>
using namespace std;

struct Node{
public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        this->data = data1;
        this->next = next1;
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0], nullptr);
    Node* temp = head;

    for(int i = 1; i < arr.size(); i++){
        Node* newNode = new Node(arr[i], nullptr);
        temp->next = newNode;
        temp = newNode;
    }
    return head;
}

int lengthOfLL(Node* head){
    int cnt = 0;
    Node* temp = head;

    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
        cnt++;
    }
    cout << endl;
    return cnt;
}

int main(){
    vector<int> arr = {12,5,8,7,14,51,53,25};

    Node* head = convertArr2LL(arr);
    cout << lengthOfLL(head);

    return 0;
}