// Last updated: 24/03/2026, 14:30:48
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int currSum = 0, maxSum = INT_MIN;
       for(int val:nums){
        currSum+=val;
        maxSum=max(currSum,maxSum);
        if(currSum<0){ //cs -1 hoga to cs  ko 0 se intialized kr denge
            currSum = 0;
        }
       } 
       return maxSum;
    }
};