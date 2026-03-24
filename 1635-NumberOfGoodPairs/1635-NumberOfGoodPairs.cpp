// Last updated: 24/03/2026, 14:28:49
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        //optimal  approach 
        int n = nums.size();
    vector<int>freq(101,0); // 101:- bcz constrain given 1 <= nums.length <= 100
     int count =0;
      for(int i =0;i<n;i++){
          int  x = nums[i];
          count = count+ freq[x];
          freq[x]++;
    }
    return count ;
    }
};