#include<iostream>
using namespace std;
int main () {
    int x=34,y=21,z=13;
    if(x>y){
        if(x>z){
            cout<<"x is Greatest"<<endl;
        }
        else{
            cout<<"z is Greatest"<<endl;
        }
    }
        else{
            if(y>z){
                cout<<"y is Greatest"<<endl;
            }
            else{
                cout<<"z is Greatest"<<endl;
            }
        }
    
}