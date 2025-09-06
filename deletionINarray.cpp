#include<iostream>
using namespace std;
int main (){
int arr[6],loca,ele;
cout<<"Enter the elements of array:"<<endl;
for(int i=0;i<6;i++){
    cin>>arr[i];

}

cout<<"Enter the location where you want to delete"<<endl;
cin>>loca;
if(loca>6){
cout<<"Delete is not possible"<<endl;
}
for(int i=loca-1;i<5;i++)
{    arr[i]=arr[i+1];

}
cout<<"Array after delete the element"<<endl;
for(int i=0;i<5;i++){
    cout<<arr[i]<<endl;
}
}