#include <iostream>
#include <unordered_set>
using namespace std;

int main() {

    int n, m;

    cout << "Enter size of first array: ";
    cin >> n;

    int a1[n];

    cout << "Enter elements of first array: ";
    for (int i = 0; i < n; i++) {
        cin >> a1[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;

    int a2[m];

    cout << "Enter elements of second array: ";
    for (int i = 0; i < m; i++) {
        cin >> a2[i];
    }

    unordered_set<int> s;

    for (int i = 0; i < n; i++) {
        s.insert(a1[i]);
    }

    for (int i = 0; i < m; i++) {
        s.insert(a2[i]);
    }

    cout << "Union: ";

    for (int x : s) {
        cout << x << " ";
    }

    return 0;
}