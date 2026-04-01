// Last updated: 01/04/2026, 12:22:07
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int>Prefix;
        Prefix[0]=1;
         int n = nums.size();
          int count = 0;
           int currSum = 0;
            for(int i =0;i<n;i++){
                currSum+=nums[i]%2;
                if(Prefix.find(currSum-k)!=Prefix.end()){
                    count+=Prefix[currSum-k];
                }
                Prefix[currSum]++;
            }
            return count;
    }
};