// Last updated: 13/06/2026, 22:57:25
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
    
    // assume array is monotonic..
       bool dec=true;
       bool incr=true;  

      for(int i =1;i<nums.size();i++){
        if(nums[i]<nums[i-1]) dec =false;
        if(nums[i]>nums[i-1]) incr =false;
      }
      return dec || incr;
    }
};