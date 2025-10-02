#include<iostream>
using namespace std;
int main(){
    int  arr[5]={34,21,54,12,67},target=100,flag=0;
    for(int i=0;i<5;i++){
        if(arr[i]==target){
            cout<<"Element index:"<<i<<endl;
            cout<<"element found";
            flag=1;
            break;
          
        }
    }
    if(flag==0){
        cout<<"Not Found"<<endl;
    }
   
}