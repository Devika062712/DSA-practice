#include <iostream>
using namespace std;

int main() {
    //Finding largest element in array
    int a[100];
    int n;
    cout << "Enter the array size: ";
    cin >> n;

    cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int lar = a[0];

    for (int i = 0; i < n; i++) {
        if (a[i] > lar) {
            lar = a[i];        }
    }

    cout<<"The largest element in the array is: " << lar;
    return 0;
}