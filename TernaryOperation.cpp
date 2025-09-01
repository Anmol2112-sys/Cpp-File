#include<iostream>
using namespace std;
int main () {
    int a=17,b=9,c=23;
    int result=a>b?(a>c?a:c):(b>c?b:c);
    cout<<result<<endl;
}