#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    string s="Anmoladitya";
    vector<int> freq(256,0);
    for(int i=0;i<s.size();i++){
        freq[s[i]]++;
    }
    for(int i=0;i<256;i++){
        if(freq[i]>0){
            cout<<(char)i<<" = "<<freq[i]<<endl;
        }
   }
   return 0;
}