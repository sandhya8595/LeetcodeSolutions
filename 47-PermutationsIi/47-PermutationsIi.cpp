// Last updated: 24/03/2026, 14:30:53
class Solution {
public://similar to permutation lodic
void getPerms(vector<int> &nums,int idx, vector<vector<int>> &ans){
        if(idx == nums.size()){//base case
            ans.push_back({nums});
            return;
        }
        vector<bool>use(21,0);
        for(int i=idx;i<nums.size();i++){
            if(use[nums[i]+10]==0)//agr elmt use nhi hua hai to 
            {
             swap(nums[idx],nums[i]);
             getPerms(nums,idx+1,ans);
             swap(nums[idx],nums[i]);//for backtracking 
             use[nums[i]+10]=1;// elmt use ho chuka hai
            }
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
         getPerms(nums,0,ans);
         return ans;
    }
};