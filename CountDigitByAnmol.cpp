#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n,count=0;
    cout<<"Enter the value of n:";
    cin>>n;
    while(n!=0){
        int r=n%10;
        count++;
        n/=10;
    }
    cout<<"The digit count is:"<<count<<endl;
}