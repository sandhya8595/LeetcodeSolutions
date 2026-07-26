// Last updated: 26/07/2026, 15:26:27
class Solution {
public:
    vector<vector<string>> ans;
    vector<string> path;

    bool isPalindrome(string &s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right])
                return false;

            left++;
            right--;
        }
        return true;
    }

    void solve(string &s, int index) {
        if (index == s.size()) {
            ans.push_back(path);
            return;
        }

        for (int i = index; i < s.size(); i++) {
            if (isPalindrome(s, index, i)) {

                // Choose
                path.push_back(s.substr(index, i - index + 1));

        // Explore krne ke liye
                solve(s, i + 1);

                // Backtrack 
                path.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {

        solve(s, 0);

        return ans;
    }
};