//check whether two strings are anagrams
#include <iostream>
using namespace std;

int main() {

    string s1;
    string s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter the second string: ";
    cin >> s2;

    int f1[256] = {};
    int f2[256] = {};

    bool isAnagram = true;

    if (s1.length() == s2.length()) {
        for (int i = 0; i < s1.length(); i++) {
           f1[s1[i]] ++;
        }

        for (int i = 0; i < s2.length(); i++) {
            f2[s2[i]] ++;
        }

        for (int i =0; i < 256; i++) {
            if (f1[i] != f2[i]) {
                isAnagram = false;
                break;
            }
        }
    }

    else {
        isAnagram = false;
    }

    if (isAnagram) {
        cout << "The two strings are anagrams.";
    }
    
    else {
        cout << "The two strings are not anagrams.";
    }

    return 0;
}