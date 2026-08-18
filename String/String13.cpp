//remove duplicate characters from a string
#include <iostream>
using namespace std;

int main() {

    string s;

    cout << "Enter a string: ";
    cin >> s;

    int f[256] = {};

    string ss;

    for (int i = 0; i < s.length(); i++) {
        if (f[s[i]] == 0) {
            ss += s[i];
            f[s[i]]++;
        }
    }
    

    cout << "The string afterremoving duplicate characters: " << ss;

    return 0;
}