#include <iostream>
using namespace std;
//count vowels, consonants, digits and spaces
int main() {

    string s;

    cout << "Enter a string: ";
    getLine(cin, s);

    int countV=0, countC=0, countD=0, countS=0;

    for (int i = 0; i < s.length(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z') {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ) {
                countV++;
            }
            else {
                countC++;
            }
        }
        else if (s[i] >= '0' && s[i] <= '9') {
            countD++;
        }
        else if (s[i] == ' ') {
            countS++;
        }
    }

    cout << "Vowels: " << countV << endl << "Consonants: " << endl << countC << "Digits: " << endl << countD << "Empty Spaces: " << countS;
    return 0;
}