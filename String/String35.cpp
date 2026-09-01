//Find the smallest substring containing the characters of another string
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s, t;
    cout << "Enter main string: ";
    cin >> s;

    cout << "Enter required string: ";
    cin >> t;

    unordered_map<char, int> freq;
    
    for (char c : t)
        freq[c]++;

    int left = 0, count = 0;
    int minLen = s.length() + 1;
    int start = 0;

    for (int right = 0; right < s.length(); right++) {

        if (freq[s[right]] > 0)
            count++;

        freq[s[right]]--;

        while (count == t.length()) {

            if (right - left + 1 < minLen) {
                minLen = right - left + 1;
                start = left;
            }

            freq[s[left]]++;

            if (freq[s[left]] > 0)
                count--;

            left++;
        }
    }

    if (minLen == s.length() + 1)
        cout << "No such substring exists.";
    else
        cout << "Smallest substring: "
             << s.substr(start, minLen);

    return 0;
}