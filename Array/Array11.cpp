//find majority element in an array
//find element appearing more than n/2 times in an array

//using moore's voting algorithm here
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

    int count = 1;
    int candidate = a[0];
    int occurance = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] == candidate) {
            count++;
        }
        else {
            count --;
        }
        if (count == 0) {
            candidate = a[i];
            count = 1;
        }
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == candidate) {
            occurance ++;
        }
    }

    if(occurance > n/2) {
        cout << "The majority element in the array is: " << candidate;
    }
    else {
        cout << "There is no majority element in the array.";
    }

    return 0;

}

