//Replace every space with a special character
#include <iostream>
using namespace std;

int main() {
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    string ss;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            ss += '@';
        }
        else {
            ss += s[i];
        } 
    }

    cout << "The string after replacing all the spaces with a special character: " << ss;

    return 0;
}