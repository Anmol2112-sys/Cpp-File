#include<iostream>
using namespace std;
int main (){
    int num,rem;
    int sum=0;
    cout<<"Enter a three digit number:";
    cin>>num;
    int Originalnum=num;
    while(num>0){
        rem=num%10;
        sum=sum+(rem*rem*rem*rem);
        num=num/10;
    }
          cout<<"sum of the cubes of the digits is:"<<sum<<endl;  
            if(sum==Originalnum){
                cout<<"Is a Armstrong number";
            }
            
            else {
                cout<<"Is not a Armstrong number";
            }
            return 0;
        
        }