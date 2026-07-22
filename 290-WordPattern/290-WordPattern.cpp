// Last updated: 22/07/2026, 16:28:35
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        istringstream iss(s);
         vector<string> words;
        string word;

        while (iss >> word) {
            words.push_back(word);
        }

        if (pattern.size() != words.size()) return false;

        unordered_map<char, string> m1;
        unordered_map<string, char> m2;

        for (int i = 0; i < pattern.size(); i++) {
            char ch = pattern[i];
            string st = words[i];

            if (m1.count(ch) && m1[ch] != st) return false;
            if (m2.count(st) && m2[st] != ch) return false;

            m1[ch] = st;
            m2[st] = ch;
        }

        return true;
    }
};