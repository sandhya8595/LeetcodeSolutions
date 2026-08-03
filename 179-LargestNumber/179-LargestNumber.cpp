// Last updated: 03/08/2026, 21:58:48
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> result;

        for(int num : nums) {
            result.push_back(to_string(num));  // convert numbers to string
        }
        sort(result.begin(), result.end(), [](string a, string b) { //[] ka matlab: ise bahar ki koi value nahi chahiye.
            return a + b > b + a;
        });

        if(result[0] == "0")
            return "0";

        string ans = "";

        for(string s : result) {   //join all strings
            ans += s;
        }

        return ans;
    }
};