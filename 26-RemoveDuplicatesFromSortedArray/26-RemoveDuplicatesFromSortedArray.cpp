// Last updated: 24/03/2026, 14:31:05
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int n = nums.size();
      int i =0;
     // baswd on two p
      for(int j =1;j<n;j++){
        if(nums[i]!=nums[j]){
            nums[i+1]=nums[j];
            i++;
        }
      }
      return i+1;

    }
};