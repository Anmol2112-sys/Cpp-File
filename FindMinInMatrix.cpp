#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    int mat[n][m];
    int ele;
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ele;
            mat[i][j]=ele;
            if(ele<min){
                min=ele;
            }
        }
    }
    cout<<min<<endl;
}