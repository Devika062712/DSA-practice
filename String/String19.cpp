//reverse the words of a string
// reverse the words of a string
#include <iostream>
using namespace std;

int main() {
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    string x = "";

    int i = s.length() - 1;

    while (i >= 0) {

        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        int end = i;

        while (i >= 0 && s[i] != ' ') {
            i--;
        }

        int start = i + 1;

        for (int j = start; j <= end; j++) {
            x += s[j];
        }

        x += ' ';
    }

    cout << "Reversed words: " << x;

    return 0;
}