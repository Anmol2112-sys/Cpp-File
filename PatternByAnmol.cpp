#include<iostream>
using namespace std;
int main(){
    char c='A';
    for(int i=1;i<=6;i++){
        if(i%2==1){
        for(int j=1;j<=i;j++){
            
                cout<<c;
            }
        }
            else{
                for(int j=1;j<=i;j++){
                    cout<<j;
                }
            }
            cout<<endl;
        }
        return 0;
    }
