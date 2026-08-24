//to find the shortest word in the string
#include <iostream>
using namespace std;

int main () {
    string s;

    cout << "Enter a string: ";
    getline (cin, s);

    int count;
    string word;
    int C = s.length();
    string shortest = "";

    for (int i = 0; i < s.length(); i++) {
        word = "";
        count = 0;
        while (i < s.length() && s[i] != ' ') {
            word += s[i];
            count ++;
            i++;
        }
        if (C > count) {
            C = count;
            shortest = word;
        }    
    }
    cout << "The shortest word in the sentence: " << shortest;

    return 0;
}