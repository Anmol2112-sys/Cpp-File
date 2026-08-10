#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r) {
    int i = l, j = mid + 1;
    int k = 0;
    int temp[100]; 

    while(i <= mid && j <= r) {
        if(arr[i] < arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    while(i <= mid) {
        temp[k++] = arr[i++];
    }

    while(j <= r) {
        temp[k++] = arr[j++];
    }

    
    for(int i = l, k2 = 0; i <= r; i++, k2++) {
        arr[i] = temp[k2];
    }
}

void mergeSort(int arr[], int l, int r) {
    if(l < r) {
        int mid = (l + r) / 2;

        mergeSort(arr, l, mid);       // left half
        mergeSort(arr, mid + 1, r);   // right half

        merge(arr, l, mid, r);        // merge
    }
}

int main() {
    int arr[] = {5, 3, 8, 2, 1, 4};
    int n = 6;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}