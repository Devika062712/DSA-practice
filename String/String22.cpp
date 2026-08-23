//to find the longest word in a sentence
#include <iostream>
using namespace std;

int main() {
    string s;

    cout << "Enter a sentence: ";
    getline(cin, s);

    string word = "";
    string longest = "";

    for (int i = 0; i <= s.length(); i++) {

        if (s[i] != ' ' && s[i] != '\0') {
            word += s[i];
        }
        else {
            if (word.length() > longest.length()) {
                longest = word;
            }

            word = "";
        }
    }

    cout << "Longest word is: " << longest;

    return 0;
}