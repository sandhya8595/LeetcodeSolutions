// Last updated: 31/03/2026, 09:59:58
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      int count = 0;
      int n= nums.size();
      for(int i =0;i<n;i++){
        int currSum=0;
        for(int j=i;j<n;j++){
            currSum+=nums[j];
            if(currSum==k){
                count++;
            }
        }
      }  
      return count;
    }
};