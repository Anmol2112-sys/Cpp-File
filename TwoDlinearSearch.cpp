#include<iostream>
using namespace std;

bool linearSearch(int mat[][3],int rows,int columns,int target){
    for(int i=0;i<rows;i++){
       for(int j=0;j<columns;j++){
        if (mat[i][j]==target){
            return true;
        }
       }
    }
       return false;
    }

       int main (){
        int mat[4][3]={{10,20,13},{14,17,21},{23,41,65},{34,43,56}};
        int rows=3;
        int columns=4;
           cout<<linearSearch(mat,rows,columns,105);
           return 0;
        
       }