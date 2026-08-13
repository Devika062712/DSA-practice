#include <iostream>
using namespace std;

int main () {
    string s;

    cout << "Enter a string:";
    cin >> s;

    cout << "The string characters are:";
    for (int i = 0; i < s.length(); i++) {
        cout << s[i] << endl;
    }

    return 0;
}