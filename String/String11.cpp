//find the first repeating character
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

    for (int i = 0; i < s.length(); i++) {
        if (freq[s[i]] > 1) {
            cout << "The first repeating character is: " << s[i];
            break;
        }
    }
    return 0;
}