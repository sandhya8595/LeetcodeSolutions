// Last updated: 24/03/2026, 14:29:50
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        ///optimal
     unordered_set<int>s;// initial set will be empty  to store
     int n = nums.size();
     for(int i=0;i<n;i++){
     if(s.count (nums[i])){
        return true;
     }
     s.insert(nums[i]);
    }
       return false;
    }
};