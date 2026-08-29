//check if a string can be a palindrome after removing atmost 1 character
#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter a string :";
    cin >> s;

    int left = 0;
    int right = s.length() - 1;

    int count = 0;
    bool isPal = true;

    int count_ = 0;

    int left1;
    int right1;

    int left2;
    int right2;

    for (int i = 0; i < s.length(); i++) {
        while (left < right) {
            if (s[left] == s[right]) {
                left ++;
                right--;
            }
            else {
                left1 = left;
                right1 = right;
                left2 = left;
                right2 = right;
                break;
            }
        }

    }

    for (int i = 0; i < s.length(); i++) {
        while (left1 < right1) {
            if (s[left1] != s[right1]) {
                left1++;     //ignore left
                count ++;

            }
        }
    }
    
    if (count > 1) {
        for (int i = 0; i < s.length(); i++) {
         while (left2 < right2) {
                if (s[left2] != s[right2]) {
                    right2 ++;       //ignore right
                    count_ ++;
                }
            }
        }
    }

    if (count > 1 || count_ > 1) {
        isPal = false;
    }

    if (isPal) {
        cout << "The string can be palindrome after removing atmost 1 character!";
    }
    else {
        cout << "The string can't be palindrome after removing atmost 1 character!";
    }

    return 0;
}