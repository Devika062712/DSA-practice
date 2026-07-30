#include <iostream>
using namespace std;

//Count the number of even elements in the array
int main () {
    int a[100];
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++ ) {
        cin >> a[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            count ++;
        }
    }

    cout << "The number of even elements in the array: " << count;

    return 0;
}