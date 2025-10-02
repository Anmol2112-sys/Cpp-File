#include<iostream>
using namespace std;
int main() {
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<(2*n-1);j++){
                cout<<" ";
            }
            for(int i=1;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<i;j++){
            cout<<"*";
                }
               
            }
        }
    } 
      
    
