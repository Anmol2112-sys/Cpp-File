#include<iostream>
using namespace std;
int main() {

    int i,pos,arr[11],ele;
    cout<<"Enter the elements of array:";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<"Enter the location where you to insert the element:";
    cin>>pos;
    cout<<"Enter the element you want to insert:";
    cin>>ele;


    for(i=10;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=ele;

    cout<<"New Array is:"<<endl;
    for(i=0;i<11;i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}