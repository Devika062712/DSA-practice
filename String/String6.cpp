//reverse a string 
#include <iostream>
using namespace std;

int main () {

    string s;

    cout << "Enter a string: ";
    cin >> s;

    string rev = "";
    for (int i = s.length()-1; i >= 0; i--)  {
        rev +=s[i];
    }

    cout << "The reversed string is: " << rev;

    return 0;

}