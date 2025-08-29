#include<iostream>
using namespace std;
int main (){
    int matrix[4][3];
    int rows =4;
    int columns =3;
    cout<<"Enter the values:";
    for (int i=0;i<rows ;i++){
        for(int j=0;j<columns ;j++){
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}