    #include<iostream>
using namespace std;
int main() {
    int a[11], i, loca, ele;
    cout << "Enter 10 elements of the array:" << endl;
    for (i = 0; i < 10; i++) {
        cin >> a[i];
    }
    cout << "Enter the location  where you want to insert the element:" << endl;
    cin >> loca;
    cout << "Enter the element you want to insert:" ;
    cin >> ele;

    
    for (i = 10; i >= loca; i--) {
        a[i] = a[i - 1];
    }
    a[loca - 1] = ele;

    cout << "New Array is:" << endl;
    for (i = 0; i < 11; i++) {
        cout << a[i] << endl;
    }
    return 0;
}
