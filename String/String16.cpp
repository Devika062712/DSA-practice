//check whether 2 strings are rotations of each other
#include <iostream>
using namespace std;

int main() {
    string s1;
    string s2;

    cout << "Enter the first string: ";
    cin >> s1;

    cout << "Enter the second string: ";
    cin >> s2;

    if (s1.length() == s2.length() && (s1 + s1).find(s2) != string::npos) {
        cout << "The two strings are rotations of each other.";
    }

    else {
        cout << "The two strings are not rotations of each other.";
    }

    return 0;
}