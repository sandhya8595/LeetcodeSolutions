// Last updated: 22/07/2026, 22:38:13
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
//DP TABULATION
        vector<int> dp(amount + 1, amount + 1);
        dp[0] = 0;

        for (int i = 1; i <= amount; i++) {
            for (int coin : coins) {
                if (coin <= i) {
                    dp[i] = min(dp[i], 1 + dp[i - coin]);
                }
            }
        }
        if (dp[amount] == amount + 1)
            return -1;

        return dp[amount];
    }
};