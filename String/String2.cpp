#include <iostream>
using namespace std;

int main () {
    string s;
    int count = 0;

    cout << "Enter a string:";
    cin >> s;

    for (int i = 0; s[i] != '\0'; i++) {
        count++;
    }

    cout << "The length of the string is: " << count;

    return 0;

}