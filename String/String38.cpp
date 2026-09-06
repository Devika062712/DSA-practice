//To group anagrams together
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
    vector<string> words = {"eat", "tea", "tan", "ate", "nat", "bat"};

    unordered_map<string, vector<string>> groups;

    for (string word : words) {
        string key = word;

        sort(key.begin(), key.end());

        groups[key].push_back(word);
    }

    for (auto group : groups) {
        for (string word : group.second) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}