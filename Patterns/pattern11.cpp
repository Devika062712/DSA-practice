/*
1 
0 1 
1 0 1 
0 1 0 1 
*/
#include <iostream>
using namespace std;

int main () {

    int n, i, j;

    cout << "Enter n: ";
    cin >> n;

    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            cout << (i+j+1)%2 << " ";
        }
        cout << endl;
    }
    return 0;
}