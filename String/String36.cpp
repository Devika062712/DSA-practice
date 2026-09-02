//check whether 1 string is a subsequence of another
#include <iostream>
using namespace std;

int main () {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    string ss;
    cout << "Enter a subsequence: ";
    cin >> ss;

    int i = 0;
    int j = 0;

    if (s.length() >= ss.length()) {
        while (i < s.length() && j < ss.length()) {
            if (s[i] == ss[j]) {
                i++;
                j++;
            }
            else {
                i++;
            }
        }
    }

    
    if (j == ss.length()) {
        cout << "Subsequence of string exists!";
    }
    else {
        cout << "Subsequence of string does not exist!";
    }

    return 0;
    
}
