#include<iostream>
using namespace std;
int main(){
    int arr[]={23,11,-4,56,4};

    for(int i=0;i<5;i++){
        int first=arr[i];
        for(int j=i+1;j<5;j++){
            int second=arr[j];
            if(first+second==54){
            cout<<"pair found"<<endl;
            cout<<i<<endl;
            cout<<j;
            }
        cout<<"pair not found"<<endl;
            
        }
        
        
    }
}