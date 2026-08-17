//find the character with maximum frequency
#include <iostream>
using namespace std;

int main () {

    string s;

    cout << "Enter a string: ";
    cin >> s;

    int freq[256] = {};

    for (int i = 0; i < s.length(); i++) {
        freq[s[i]]++;
    }

    int max = s[0];
    int fre = freq[s[0]];
    for (int i = 0; i < s.length(); i++){
        if (freq [s[i]] > fre) {
            max = s[i];
            fre = freq[s[i]];
        }
    }

    cout << "The character with maximum frequency: " << max;

    return 0;
}