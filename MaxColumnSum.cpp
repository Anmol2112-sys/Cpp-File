
#include<iostream>
using namespace std;
int getMaxSum(int mat[][3],int rows,int columns){
    int maxColumnSum=INT_MIN;
    int colIndex= -1;
    for(int i=0;i<rows;i++){
       int columnSum=0;

        for(int j=0;j<columns;j++){
            columnSum += mat[i][j];

        }
        maxColumnSum=max(maxColumnSum,columnSum);
    }
    return maxColumnSum;
}
int main (){
    int mat[3][3]={{10,20,30},{5,7,9},{13,19,21}};
    int rows=3;
    int columns=3;
    cout<<getMaxSum(mat,rows,columns)<<endl;
    return 0;
}