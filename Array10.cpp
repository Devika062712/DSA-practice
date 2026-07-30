//From numbers given from 1 to n find the missing number from the array

#include <iostream>
using namespace std;

int main () {
    int a[100];
    int n;

    cout << "Enter the value of n(for 1 to n numbers): ";
    cin >> n;

    cout << "Enter " << n-1 << " array elements: ";
    for (int i = 0; i < n-1; i++) {
        cin >> a[i];
    }

    int expectedSum = (n)*(n+1)/2;

    int actualSum = 0;

    for (int i = 0; i < n-1; i++) {
        actualSum += a[i];
    }

    int missing = expectedSum - actualSum;

    cout << "The missing number is: " << missing;

    return 0;
}