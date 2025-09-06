#include<iostream>
using namespace std;
void swap(int &a,int &b){
   a=a+b;
   b=a-b;
   a=a-b;
}
int main (){
    int a=84,b=29;
    swap(a,b);
    cout<<"After swap a="<<a<<" b="<<b<<endl;
}