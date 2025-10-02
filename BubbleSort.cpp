#include<iostream>
using namespace std;
int main(){
    int arr[20],n;
    cout<<"Enter the value of n:";
    cin>>n;

    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"After Sorting:"<<endl;
    for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
    }

    
}