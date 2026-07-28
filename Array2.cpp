#include <iostream>
#include <climits>
using namespace std;

int main() {
    //Second largest element in the array
    int a[100];
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for (int i =0; i < n; i++ ) {
        if (a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        }

        else if (a[i] > secondLargest && a[i] != largest) {
            secondLargest = a[i];
        }

    }
    if (secondLargest == INT_MIN) {
            cout << "There is no second largest element.";
        }
    else {
        cout << "The second largest element is: " << secondLargest;
    }
    return 0;
}