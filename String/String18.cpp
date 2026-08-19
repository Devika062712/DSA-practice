//check whether a string is palindrome or not ignoring spaces and case
#include <iostream>
using namespace std;

int main() {
    string s;

    cout << "enter a string: ";
    getline(cin, s);

    string x = "";
    string y = "";

    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }

    for (int i = s.length()-1; i >= 0; i--) {
        if (s[i] != ' ') {
            x += s[i];
        }
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            y += s[i];
        }
    }

    if(y == x) {
        cout << "String is palindrome ignoring spaces andf cases.";
    }

    return 0;

}