#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

int minValidStrings(vector<string>& words, string target) {
    unordered_set<string> prefixes;
    for (const string& word : words) {
        for (int i = 1; i <= word.size(); ++i) {
            prefixes.insert(word.substr(0, i));
        }
    }

    int count = 0, i = 0;
    while (i < target.size()) {
        bool found = false;
        for (int j = 1; j <= target.size() - i; ++j) {
            if (prefixes.count(target.substr(i, j))) {
                found = true;
                count++;
                i += j;
                break;
            }
        }
        if (!found) return -1;
    }
    return count;
}

int main() {
    vector<string> words1 = {"abc", "aaaaa", "bcdef"};
    string target1 = "aabcdabc";
    cout << minValidStrings(words1, target1) << endl; 
    vector<string> words2 = {"abababab", "ab"};
    string target2 = "ababaababa";
    cout << minValidStrings(words2, target2) << endl; 
    vector<string> words3 = {"abcdef"};
    string target3 = "xyz";
    cout << minValidStrings(words3, target3) << endl; 

    return 0;
}
