//to find the longest palindromic substring
#include <iostream>
using namespace std;

int main() {
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    int start = 0;
    int maxLength = 1;

    for (int i = 0; i < s.length(); i++) {

        // Odd length palindrome
        int left = i;
        int right = i;

        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            if (right - left + 1 > maxLength) {
                start = left;
                maxLength = right - left + 1;
            }

            left--;
            right++;
        }

        // Even length palindrome
        left = i;
        right = i + 1;

        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            if (right - left + 1 > maxLength) {
                start = left;
                maxLength = right - left + 1;
            }

            left--;
            right++;
        }
    }

    cout << "Longest palindromic substring: ";

    for (int i = start; i < start + maxLength; i++) {
        cout << s[i];
    }

    cout << "\nLength: " << maxLength;

    return 0;
}