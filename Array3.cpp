#include <iostream>
using namespace std;

int main () {
    //Reverse an array
    int a[100];
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the array elements: " << endl;
    for ( int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int start = 0;
    int end = n-1;

    while (start < end) {
        swap(a[start], a[end]);
        start++;
        end--;
    }

    cout << "Reversed array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

}