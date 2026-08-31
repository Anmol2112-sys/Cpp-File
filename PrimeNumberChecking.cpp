#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number to check if it is prime or not: ";
    cin>>n;

    bool isPrime=true;
    if(n<=1){
        isPrime=false;
    }
    else{
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                isPrime=false;
                break;
            }
        }
    }
    if(isPrime){
        cout<<"It is a prime number"<<endl;
    }
    else{
        cout<<"It is not a prime number"<<endl;
    }
}