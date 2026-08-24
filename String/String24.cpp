//to remove all spaces from a string
#include <iostream>
using namespace std;

int main () {
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    string ss = "";
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            continue;
        }
        ss += s[i];
    }

    cout << "The string obtained after removing all the spaces: " << ss;
    
    return 0;
}