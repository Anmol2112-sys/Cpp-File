#include<iostream>
using namespace std;

int main() {
 int arr[100],n,pos;
    cout<<"Enter number of elements:";
    cin>>n;

    cout<<"Enter the Elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the position where you want to delete element:";
    cin>>pos;

    if(pos<0 || pos>=n){
        cout<<"Invalid Position";
        return 0;
    }
    for(int i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;

    cout<<"Array after deletion:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}