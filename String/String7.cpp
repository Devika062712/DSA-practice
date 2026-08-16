//check whether 2 strings are equal or not without using equals()
#include <iostream>
using namespace std;

int main() {
    string s1;
    string s2;

    cout << "Enter the first string: ";
    cin >> s1;

    cout << "Enter the second string: ";
    cin >> s2;

    if (s1.length() != s2.length()) {
         cout << "Strings are not equal.";
    }
    else {
        bool equal = true;
        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] != s2[i]) {
                equal = false;
                break;
            }
        }
    

        if (equal) {
            cout << "Strings are equal.";
        }
        else {
            cout << "Strings are not equal.";
        }
    }

    return 0;
}