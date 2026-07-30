//Remove duplicates from a sorted array
#include <iostream>
using namespace std;

int main() {
    int a[100];
    int n;

    cout << "Enter the number of array elements: ";
    cin >> n;

    cout << "Enter the array elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if ( n == 0) {
        cout << "Array is empty.";
        return 0;
    }

    int index = 1;

    for (int i = 0; i < n-1; i++) {
        if (a[i] != a[i+1]) {
            a[index] = a[i+1];
            index++;
        }
    }

    cout << "The updated array is: ";
    for (int i = 0; i < index; i++)  { 
        cout << a[i] << " ";
    }

    return 0;
}