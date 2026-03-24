// Last updated: 24/03/2026, 14:30:04
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0, end = nums.size()-1,mid;
        while(start<end){
            mid = (start+end)/2;
            if(nums[mid]>nums[mid+1]){
                   end = mid;
            }
            else
            start = mid+1;  //peak is present on the ridht side
        }
        return start;
    }
};