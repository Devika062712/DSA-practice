//copy one string into other without using builtin copy functions
#include <iostream>
using namespace std;

int main () {
    string s;

    cout << "Enter a string: ";
    cin >> s;

    string s2 = "";
    for (int i = 0; i < s.length(); i++) {
        s2 += s[i];
    }

    cout << "Copied string: " << s2;

    return 0;
}