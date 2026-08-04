//Check whether an array is sorted in ascending order

#include <iostream>
using namespace std;

int main () {
    int a[100];
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    bool sorted = true;
    for (int i = 0; i < n-1; i++) {
        if (a[i] > a[i+1]) {
            sorted = false;
            break;
        }
    }

    if (sorted) {
        cout << "Your array is sorted in ascending order.";
    }
    else {
        cout << "Your array is not sorted.";
    }
    return 0;
}