#include<iostream>
using namespace std;
int main() {
    int n=2345789;
    int count=0;
    if(n==0){
        count=1;
    }
    else{
        while(n!=0)
    {
     n=n/10;
    count++;
    }
}
cout<<"Number of digits:"<<count<<endl;
return 0;
}w