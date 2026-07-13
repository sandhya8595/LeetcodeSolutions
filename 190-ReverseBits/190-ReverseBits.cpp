// Last updated: 13/07/2026, 18:33:11
class Solution {
public:
    int reverseBits(int n) {
        int ans = 0;

        for (int i = 0; i < 32; i++) {
            ans = (ans << 1) | (n & 1); //main logic
            n >>= 1;
        }

        return ans;
    }
};