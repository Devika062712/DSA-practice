//Count the total number of substrings
#include <iostream>
using namespace std;

int main () {
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    string word;
    int count = 0;

    for (int i = 0; i < s.length(); i++) {
            word = "";
        for (int j = i; j < s.length(); j++) {
            word += s[j];
            count++;
        }
    }

    cout << "The total number of substrings is: " << count;

    return 0;
}