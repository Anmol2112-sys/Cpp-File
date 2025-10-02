#include<iostream>
using namespace std;
int main (){
    int n=11;
    for(int i=1;i<=11;i++){
        for(int j=1;j<=11-i;j++){
            cout<<" ";
        }
        for(int j=1;j<2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
