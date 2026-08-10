#include<iostream>
using namespace std;
int main() {
    int temp,kelvin,celsius,fahrenheit;
    cout<<"Enter the temperature in Celsius: ";
    cin>>celsius;
    kelvin=celsius+273.15;
    fahrenheit=(celsius*9/5)+32;
    cout<<"Temperature in Kelvin: "<<kelvin<<endl;
    cout<<"Temperature in Fahrenheit: "<<fahrenheit<<endl;

    return 0;
}