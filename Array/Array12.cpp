//kadane;s algorithm question
//find maximum sum subarray

#include <iostream>
using namespace std;

int main() {

    int a[100];

    int n;

    cout << "Enter the number of elements in the array";
    cin >> n;

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int sum = 0;
    int maxSum = a[0];
    for(int i =0; i < n; i++) {
        sum += a[i];
        if (sum > maxSum) {
            maxSum = sum;
        }

        if (sum < 0) {
            sum = 0;
        }
    }

    cout << "The maximum sum subarray is: " << maxSum;

    return 0;
}