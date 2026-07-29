#include <iostream>
using namespace std;
//WAP in cpp to rotate an array right by k positions
int main () {
    int a[100], k;
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the array elements: ";
    for ( int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Entert the value of k: ";
    cin >> k;

    k = k%n;

    for ( int j = 0; j < k; j++) {
        int temp = a[n-1];

        for (int i = n-1; i > 0; i--) {
            a[i] = a[i-1];
        }

        a[0] = temp;
    }

    cout << "Array obtained after rotating right by k elements: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}