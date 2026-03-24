// Last updated: 24/03/2026, 14:28:56
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
         int n = nums.size();
         int i=nums.size()-1;
         vector<int>ans(n);
         int start =0;
         int  end= n-1;
         int startsq;
         int endsq;
         while(start<=end){
           startsq=nums[start]*nums[start];
            endsq=nums[end]*nums[end];  
          if(startsq>endsq){
            ans[i--]=startsq;
            start++;

          }
          else{
            ans[i--]=endsq;
            end--;

          }
         }
         return ans;

    }
    };