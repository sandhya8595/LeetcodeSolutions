// Last updated: 14/06/2026, 22:22:33
class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
      int n = nums.size();
        vector<int> result(n);

        for (int i = 0; i < n; i++) {
            int idx = ((i + nums[i]) % n + n) % n;
            result[i] = nums[idx];
        }

        return result;
    }
};