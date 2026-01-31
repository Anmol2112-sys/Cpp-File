#include<iostream>
using namespace std;
int main() {
    int n,arr[5],largest,secondlargest;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"Enter the elements of the array:";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
        secondlargest=-1;
        for(int i=0;i<n;i++){
            if(arr[i]>secondlargest && arr[i]!=largest){
                secondlargest=arr[i];
            }
        }
        cout<<"The second largest element is:"<<secondlargest;
        return 0;
    }
