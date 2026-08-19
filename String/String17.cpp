//check whether a string is a palindrome
#include <iostream>
using namespace std;

int main() {
    string s;

    cout << "Enter a string: ";
    cin >> s;

    string x = "";

    for (int i = s.length()-1; i >= 0; i--) {
        x += s[i];
    }

    if (s == x) {
        cout << "String is a palindrome.";
    }
    else {
        cout << "String is not a palindrome.";
    }

    return 0;
}