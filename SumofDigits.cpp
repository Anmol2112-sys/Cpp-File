#include<iostream>
using namespace std;
int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    int rem = n % 10;
    int num = sumOfDigits(n / 10);
    return rem + num;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of digits is: " << sumOfDigits(n) << endl;
    return 0;
}
