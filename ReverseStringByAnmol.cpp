#include<iostream>
#include<algorithm>
#include<string>

using namespace std;


string reverse(string s){
    std::reverse(s.begin(),s.end());
    return s;
}

int main(){
    string s;
    cout<<"Enter a string to reverse: ";
    cin>>s;
    cout<<reverse(s)<<endl;
    return 0;
}