//to count the number of words in a sentence
#include <iostream>
using namespace std;

int main() {
    string s;
    int count = 0;

    cout << "Enter a sentence: ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ')) {
            count++;
        }
    }

    cout << "Number of words = " << count;

    return 0;
}