#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int smallestIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[smallestIndex]) {
                smallestIndex = j;
            }
        }
        if (smallestIndex != i)
            swap(arr[i], arr[smallestIndex]);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {11, 42, 17, 28, 34};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}
    
