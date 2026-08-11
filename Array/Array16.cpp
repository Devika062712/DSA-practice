//Finding intersection of 2 sets using hashset
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

    if (n <= m) {
        for (int i = 0; i < n; i++) {
            s.insert(a1[i]);
        }
    }
    else {
        for (int i = 0; i < m; i++) {
            s.insert(a2[i]);
        }
    }

    cout << "The intersection of 2 arrays is: ";
    if (n <= m) {
        for (int i = 0; i < m; i++) {
            if (s.find(a2[i]) != s.end()) {
                cout << a2[i] << " ";
                s.erase(a2[i]);
            }
        }
    }

    if (m < n) {
        for (int i = 0; i < n; i++) {
            if (s.find(a1[i]) != s.end()) {
                cout << a1[i] << " ";
                s.erase(a1[i]);
            }
        }
    }

    return 0;

}