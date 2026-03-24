// Last updated: 24/03/2026, 14:30:36
class Solution {
public:
void getAllSubsets(vector<int> &nums,vector<int> &ans,int i,vector<vector<int>> &allSubsets){
    if(i==nums.size())
    {//base case
        allSubsets.push_back(ans);
        return;
    }
    //include
    ans.push_back(nums[i]);
    getAllSubsets(nums,ans,i+1,allSubsets);
    ans.pop_back();
     int idx = i+1;
     while(idx<nums.size() && nums[idx]==nums[idx-1]) idx++;
    //execlude
    getAllSubsets(nums,ans,idx,allSubsets);
} 
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());//to sort the array
        vector<vector<int>> allSubsets;
      vector<int>ans;
      getAllSubsets(nums,ans,0,allSubsets);
      return allSubsets;  
    }
};