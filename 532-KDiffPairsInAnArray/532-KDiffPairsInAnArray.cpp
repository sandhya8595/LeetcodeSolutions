// Last updated: 24/03/2026, 14:29:15
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
      int start= 0,end=1;
      int n = nums.size(),count = 0;
      if(k<0)
      return 0;
      while(start<n && end<n ){
        if(  start == end  || nums[end]-nums[start] < k){
            end++;
        }
        else if(nums[end]-nums[start]>k){
            start++;
        }
        else{
            start++;
            end++;
            count++;
      while(start<n && nums[start]==nums[start-1]){
        start++;
      }
    }
}
return count;
    }
};