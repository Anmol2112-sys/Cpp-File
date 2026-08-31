#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int target;
        cin>>target;

        bool found=false;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(v[i]+v[j]==target){
                    found=true;
                    cout<<i<<" "<<j<< endl;
                    break;
                }
            }
        }
        if(found == false){
            cout<<"-1"<<" "<<"-1"<< endl;
        }
    }
    return 0;
}