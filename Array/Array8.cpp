//Move all zeroes to end while maintaining the order of the array

#include <iostream>
using namespace std;

int main() {
    int a[100];
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int index = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            a[index] = a[i];
            index++;
        }
    }

    for (int i = index; i < n; i++) {
        a[i] = 0;
    }

    cout << "The final array obtained after moving all the zeroes to the end of the array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}