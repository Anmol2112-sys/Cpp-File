#include<iostream>
using namespace std;

int main(){
    long long L;
    long long R;
    cout<<"Enter the value of L and R:";
    cin>> L>> R;
    int ans=0;
    for(int i=L;i<=R;i++){
        ans+=__lg(i);
    }
    cout<<ans<<endl;
}