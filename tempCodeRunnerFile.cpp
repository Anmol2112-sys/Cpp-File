#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=0;i*i<=n;i++){
        if(n%i==0){
            cout<<"It is not a prime number"<<endl;
            return 0;
        }
    }
    cout<<"It is a prime number"<<endl;
}