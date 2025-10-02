#include<iostream>
using namespace std;
int main (){
    int n=7;
    int s=2*n-1;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n;j++)
        {
            if((i&j)==0){
                cout<<" ";
            }
            else{
                cout<<s;
            }

        }
        cout<<endl;
    }
}