#include<iostream>
using namespace std;
int main(){
    int n=2346;
   
    
        int rem=n%10;
        int largest=max(largest,rem);
        int smallest=min(smallest,rem);
        n=n/10;
        cout<<largest<<" "<<smallest;
    
}