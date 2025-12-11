#include<bits/stdc++.h>
using namespace std;
 bool safe(vector<int>&pos ,int row, int col){
    for(int c=0;c<col;c++){
        int r=pos[c];
        if(r==row || abs (r-row )==abs(c-col)) return false;
    }
    return true;

 }

 bool solveNQ(vector<int> &pos,int col,int N){
    if(col==N) return true;
    for(int r=0;r<N;r++){
        if(safe(pos ,r,col)){
            pos[col]=r;
            if(solveNQ(pos,col+1,N)) return true;

        }
    }
    return false;

 }
 int main() {
    int N=8;
    vector<int> pos(N,-1);
    if(solveNQ(pos,0,N)) 
    {
        for(int i=0;i<N;i++)
        cout<<pos[i]<<" ";
        cout<<"\n";
    }
    else 
    cout<<"NO solution\n ";
    return 0;
    
 }