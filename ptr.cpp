#include <iostream>
using namespace std;
int main () {
    int a= 10;
    int *ptr= &a;
    cout << "Value of a is :"<< *ptr << endl;
return 0;
}