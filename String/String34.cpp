//Find the longest string containing atmost k different characters
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s;
    int k;

    cout << "Enter string: ";
    cin >> s;

    cout << "Enter k: ";
    cin >> k;

    unordered_map<char, int> freq;
    int left = 0, maxLen = 0;

    for (int right = 0; right < s.length(); right++) {
        freq[s[right]]++;

        while (freq.size() > k) {
            freq[s[left]]--;

            if (freq[s[left]] == 0)
                freq.erase(s[left]);

            left++;
        }

        maxLen = max(maxLen, right - left + 1);
    }

    cout << "Longest substring length: " << maxLen << endl;

    return 0;
}