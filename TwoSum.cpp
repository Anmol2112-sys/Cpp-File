#include <iostream>
using namespace std;

int main() {
    int arr[] = {23, 11, -4, 56, 4};
    int target = 34;
    bool found = false;

    for(int i = 0; i < 5; i++) {
        for(int j = i + 1; j < 5; j++) {
            if(arr[i] + arr[j] == target) {
                cout << "Pair found" << endl;
                cout << i << endl;
                cout << j << endl;
                found = true;
            }
        }
    }

    if(!found) {
        cout << "Pair not found" << endl;
    }

    return 0;
}