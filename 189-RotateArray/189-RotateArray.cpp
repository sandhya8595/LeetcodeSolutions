// Last updated: 24/03/2026, 14:29:58
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // using  reverse  function  rotate the  array 
       int n = nums .size();     
          k = k%n;
          reverse( nums.begin(),nums.end());
          reverse(nums.begin(),nums.begin()+k);
          reverse(nums.begin()+k,nums.end()); 
    }
};