// Last updated: 24/03/2026, 14:28:31
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
      int n = nums.size();
      vector<int>answer(n);
      int rightSum;

      int totalSum=0;
    for(int i=0;i<n;i++){
     totalSum+=nums[i];
      }

       int leftSum=0;
  for(int i=0;i<n;i++){
    rightSum=totalSum-leftSum-nums[i];
    answer[i]=abs(leftSum-rightSum);// abs remove sign(like negative)
     leftSum+=nums[i];
      }
      return answer;
    }
};