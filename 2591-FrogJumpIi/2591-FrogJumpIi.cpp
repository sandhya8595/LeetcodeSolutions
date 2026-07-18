// Last updated: 18/07/2026, 11:25:31
class Solution {
public:
    int maxJump(vector<int>& stones) {

        int n = stones.size();
        if (n == 2) //agr do hi stair h to...
            return stones[1] - stones[0];

        int ans = stones[1] - stones[0];

          for (int i = 2; i < n; i++) {
            ans = max(ans, stones[i] - stones[i - 2]);
        }
        return ans;
    }
};