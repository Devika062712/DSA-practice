#include <iostream>
using namespace std;

int main() {

    int a[100];
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {

        int count = 1;

        bool alreadyCounted = false;

        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                alreadyCounted = true;
                break;
            }
        }

        if (alreadyCounted)
            continue;

        // Count frequency
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }

        cout << a[i] << " occurs " << count << " times" << endl;
    }

    return 0;
}