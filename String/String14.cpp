//print all characters that occur only once
#include <iostream>
using namespace std;

int main () {

    string s;

    cout << "Enter a string ";
    cin >> s;

    int f[256] = {};

    for (int i = 0; i < s.length(); i++) {
        f[s[i]]++;
    }

    string ss;

    for (int i = 0; i < s.length(); i++) {
        if (f[s[i]] == 1) {
            ss += s[i];
        }
    }

    cout << "Characters that occured only once: " << ss;
    
    return 0;
}