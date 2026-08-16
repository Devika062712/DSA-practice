//to convert string from uppercase to lower case
#include <iostream>
using namespace std;

int main() {
    string s;

    cout << "Enter an uppercase string : ";
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;     //65 + 32 = 97
        }
    }

    cout << "The string after case conversion: " << s;

    return 0;
}