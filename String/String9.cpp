//count the frequency of every character in the string
#include <iostream>
using namespace std;

int main() {

    string s;

    cout << "Enter a string" ;
    cin >> s;

    int freq[256] = {};

    for (int i =0; i < s.length(); i++) {
         freq[s[i]] ++;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i]) {
            cout << freq[i] << " ";
        }
    }
    return 0;
}