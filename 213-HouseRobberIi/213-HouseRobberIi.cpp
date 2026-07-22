// Last updated: 22/07/2026, 12:18:39
class Solution {
public:
    int robberhelper(vector<int>& nums, int st, int end) {
        int n = end - st + 1;
        if (n == 1) return nums[st];

        vector<int> dp(n);
        
        dp[0] = nums[st];
        dp[1] = max(nums[st], nums[st+1]);

        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i-1], dp[i-2] + nums[st+i]);
        }
        return dp[n-1];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0], nums[1]);
        return max(robberhelper(nums, 0, n-2), robberhelper(nums, 1, n-1));
    }
};
