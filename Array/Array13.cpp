#include <iostream>
using namespace std;

int main() {

    int a[100];
    int leader[100];

    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxRight = a[n - 1];
    int count = 0;

    leader[count] = maxRight;
    count++;

    for (int i = n - 2; i >= 0; i--) {
        if (a[i] >= maxRight) {
            leader[count] = a[i];
            count++;
            maxRight = a[i];
        }
    }

    cout << "Leaders in the array are: ";

    for (int i = count - 1; i >= 0; i--) {
        cout << leader[i] << " ";
    }

    return 0;
}