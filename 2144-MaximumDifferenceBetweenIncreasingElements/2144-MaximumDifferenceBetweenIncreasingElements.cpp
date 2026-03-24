// Last updated: 24/03/2026, 14:28:39
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maximumDifference=-1;
        int min = nums[0]; // first ele
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]>min){
             int Difference  = nums[i]-min ;//logic
             maximumDifference=max(maximumDifference,Difference);
            }
            else{
                min=nums[i];
            }
        }
        return maximumDifference;
    }
};