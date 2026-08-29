//to find the longest common prefix in a string
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> s(n);

    cout << "Enter the strings:\n";
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    string prefix = s[0];

    for (int i = 1; i < n; i++) {
        int j = 0;

        while (j < prefix.length() && 
               j < s[i].length() && 
               prefix[j] == s[i][j]) {
            j++;
        }

        prefix = prefix.substr(0, j);
    }

    cout << "Longest Common Prefix: " << prefix << endl;

    return 0;
}