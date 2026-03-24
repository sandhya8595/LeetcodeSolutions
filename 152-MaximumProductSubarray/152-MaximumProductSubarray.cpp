// Last updated: 24/03/2026, 14:30:10
class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int n = nums .size();
       int leftProd = 1;
       int rightProd= 1;
       int ans = INT_MIN;
       for(int i = 0;i<nums.size();i++){
        leftProd = leftProd == 0 ? 1:leftProd;
        rightProd = rightProd == 0 ? 1:rightProd;
         leftProd = leftProd* nums[i];
          rightProd=rightProd*nums[n-1-i];
          ans = max(ans,max(leftProd,rightProd));
       } 
       return ans ;
    }
};