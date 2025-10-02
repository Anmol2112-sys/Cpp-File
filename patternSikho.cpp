#include<iostream>
using namespace std;
int main (){
    char ch='a';
    for(int i=1;i<=7;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch+=1;
       
        }
        
       for(int j=1;j<=7-i;j++){
            cout<<" ";
        
        }
        cout<<endl;
    }
}


