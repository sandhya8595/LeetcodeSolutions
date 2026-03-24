// Last updated: 24/03/2026, 14:30:20
class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int ans =0;
    for(int x:nums){
        //using xor .... same input then zero and diff input then 1
        ans= ans^x;
    }
    return ans;
    }
};