//Find all the occurrences of a pattern in a string
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, pattern;

    cout << "Enter string: ";
    cin >> str;

    cout << "Enter pattern: ";
    cin >> pattern;

    int pos = str.find(pattern);

    while (pos != string::npos) {
        cout << "Pattern found at index: " << pos << endl;
        pos = str.find(pattern, pos + 1);
    }

    return 0;
}