// Last updated: 01/04/2026, 12:10:48
class Solution {
public: 
// similar code of 560
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>Prefix;
        Prefix[0]=1;
         int n = nums.size();
          int count = 0;
           int currSum = 0;
            for(int i =0;i<n;i++){
                currSum+=nums[i];
                if(Prefix.find(currSum-goal)!=Prefix.end()){
                    count+=Prefix[currSum-goal];
                }
                Prefix[currSum]++;
            }
            return count;
    }
};
  