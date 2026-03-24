// Last updated: 24/03/2026, 14:30:07
class Solution {//very important question
public:
    int findMin(vector<int>& nums) {
        int start =0,end =nums.size()-1,mid,ans = nums[0];
        while(start<=end){
            mid =  end +(start-end );
            if( nums[mid]>=nums[0]){
                start = mid+1;
            }
            else {
                ans = nums[mid];
                end = mid -1;
            }
        }
       return ans; 
    }
};