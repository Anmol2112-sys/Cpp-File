#include<iostream>
using namespace std;

int fact(int number){
    if (number==0 || number==1){
        return 1;
    }
    else{
        return number* fact(number-1);
    }
}


int main(){
    int number;
    cout<<"Enter a number to find its factorial: ";
    cin>>number;    
    int result = fact(number);
    cout<<"Factorial of "<<number<<" is :"<<result<<endl;
    return 0;
}