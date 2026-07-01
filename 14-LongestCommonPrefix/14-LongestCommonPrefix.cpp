// Last updated: 01/07/2026, 23:04:17
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
//      base condition
        if (strs.empty())
            return "";
        string ans = "";

        for (int i = 0; i < strs[0].size(); i++) {
            char ch = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {

                if (i >= strs[j].size() || strs[j][i] != ch)
                    return ans;
            }

            ans += ch;
        }

        return ans;
    }
};