//to find the longest substring containing no duplicate characters
#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int maxLen = 0;
    string longest = "";

    for (int i = 0; i < s.length(); i++) {
        string sub = "";

        for (int j = i; j < s.length(); j++) {
            bool duplicate = false;

            for (int k = 0; k < sub.length(); k++) {
                if (sub[k] == s[j]) {
                    duplicate = true;
                    break;
                }
            }

            if (duplicate)
                break;

            sub += s[j];

            if (sub.length() > maxLen) {
                maxLen = sub.length();
                longest = sub;
            }
        }
    }

    cout << "Longest substring: " << longest << endl;
    cout << "Length: " << maxLen << endl;

    return 0;
}