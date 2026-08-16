//lowercase to uppercase converion of characters without using builtin method
//a = 97, A = 65
#include <iostream>
using namespace std;

int main () {
    string s;
    cout << "Enter a lowercase string:";
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
    }

    cout << "String after case conversion: " << s;
    return 0;
}