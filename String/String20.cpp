//reverse every word individually

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int start = 0;

    for (int i = 0; i <= str.length(); i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverse(str.begin() + start, str.begin() + i);
            start = i + 1;
        }
    }

    cout << "Reversed words: " << str << endl;

    return 0;
}