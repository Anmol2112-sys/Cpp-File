#include<iostream>
using namespace std;

int main() {
    int n, originalNum, digits = 0;
    int r, sum = 0;

    cout << "Enter the value of n: ";
    cin >> n;

    originalNum = n;

    // Count digits
    int temp = n;
    while(temp > 0) {
        digits++;
        temp /= 10;
    }

    // Calculate Armstrong sum
    temp = n;
    while(temp > 0) {
        r = temp % 10;

        int power = 1;
        for(int i = 0; i < digits; i++) {
            power *= r;
        }

        sum += power;
        temp /= 10;
    }

    if(sum == originalNum) {
        cout << "The number is Armstrong Number";
    }
    else {
        cout << "Number is not Armstrong Number";
    }

    return 0;
}