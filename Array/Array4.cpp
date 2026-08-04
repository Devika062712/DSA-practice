#include <iostream>
using namespace std;

int main () {

    int a[100];
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the array elements";
    for ( int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int temp;

    temp = a[n-1];
    for (int i = n-1; i > 0; i--) {
        a[i] = a[i-1];
    }
    a[0] = temp;
    cout << "Array obtained after rotating it right by one position: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}