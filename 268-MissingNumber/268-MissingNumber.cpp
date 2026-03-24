// Last updated: 24/03/2026, 14:29:35
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int x =n;// bcz  n does not have a value to xor so take n (for out of bound)
        for(int i =0;i<n;i++){
            x^=i;// index
            x^= nums[i];//value
        } 
        return x;
    }
};