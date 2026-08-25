// To print all substrings of a string
#include <iostream>
using namespace std;

int main() {

    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    string word;

    for (int i = 0; i < s.length(); i++) {

        word = "";

        for (int j = i; j < s.length(); j++) {
            word += s[j];
            cout << word << endl;
        }
    }

    return 0;
}