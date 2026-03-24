// Last updated: 24/03/2026, 14:28:44
class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        if(nums[0]<nums[n-1]){
            count++;
        }
        for(int i =0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
              count++;     
            }
        }
        if(count>1){
            return false;
        }
        return true;
    }
};