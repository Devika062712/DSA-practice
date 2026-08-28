//to find all palindromic substrings
#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int count = 0;

    for (int i = 0; i < s.length(); i++) {

        // Odd length palindromes
        int l = i, r = i;
        while (l >= 0 && r < s.length() && s[l] == s[r]) {
            count++;
            l--;
            r++;
        }

        l = i;
        r = i + 1;
        while (l >= 0 && r < s.length() && s[l] == s[r]) {
            count++;
            l--;
            r++;
        }
    }

    cout << "Total palindromic substrings: " << count;

    return 0;
}