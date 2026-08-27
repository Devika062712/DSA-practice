//to find the longest substring without repeating characters
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    unordered_set<char> st;

    int left = 0;
    int maxLength = 0;
    int start = 0;

    for (int right = 0; right < s.length(); right++) {

        while (st.find(s[right]) != st.end()) {
            st.erase(s[left]);
            left++;
        }

        st.insert(s[right]);

        if (right - left + 1 > maxLength) {
            maxLength = right - left + 1;
            start = left;
        }
    }

    cout << "Longest substring without repeating characters: ";

    for (int i = start; i < start + maxLength; i++) {
        cout << s[i];
    }

    cout << "\nLength: " << maxLength;

    return 0;
}