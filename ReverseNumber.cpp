#include<iostream>
using namespace std;
int reverse(int n){
    int revNum=0;
    while(n!=0){
        int dig = n%10;
        revNum=(revNum*10)+dig;
        n=n/10;
    }
    return revNum;
}
int main(){
    int revNum = reverse(5732);
    cout << "After reversing the number: " << revNum << endl;
    return 0;
}
