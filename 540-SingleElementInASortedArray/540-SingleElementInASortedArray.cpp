// Last updated: 24/03/2026, 14:29:13
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int start =0,end =n-1;
        int mid;

        if(n==1)
         return nums[0];//agr single elment hai to phla element hoga

        while(start<=end){
         int mid = start+(end-start)/2;

           // if mid elem start me exist krta hai 
           if(mid==0 && nums[0]!=nums[1]) 
            return nums[mid];

           //if mid element last pos pr exist krta hai then
           if(mid==n-1 && nums[n-1]!= nums[n-2]) 
            return  nums[mid];

           if(nums[mid-1]!=nums[mid] && nums[mid]!=nums[mid+1])
           return  nums[mid]; 
           //even
           if(mid%2==0){
            if(nums[mid-1]==nums[mid]){
               end = mid -1;//left side element exist krega
            }
            else{
                start = mid+1;
            }
           }else{//odd
              if(nums[mid-1]==nums[mid]){//right
                start = mid+1;
              }
              else{
                end = mid-1;
              }
           }
        } 
        return -1;   
    }
};