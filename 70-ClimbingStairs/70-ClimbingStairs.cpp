// Last updated: 11/07/2026, 21:40:26
class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2)
            return n;

        vector<int> dp(n + 1); //isliye use karte hain taaki already solved subproblems ke answers store ho jaye aur unhe dobara recursion se calculate na karna pade

        dp[1] = 1;
        dp[2] = 2;

        for (int i = 3; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];
    }
};

//this is tabulation method (iterative )....
// why use dp:- dp is optimized version of recursion ,,,,other way to say that we use  dp to avoid the unneccesary  recursion call 


//"Dynamic Programming (DP) is an optimization technique used when a recursive solution has overlapping subproblems.
// dp reduce the t.c