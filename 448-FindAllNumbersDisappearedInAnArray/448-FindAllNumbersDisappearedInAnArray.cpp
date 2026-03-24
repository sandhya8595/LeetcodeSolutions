// Last updated: 24/03/2026, 14:29:22
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       int n = nums.size();
       for(int i =0;i<n ;i++){
        int index = abs(nums[i])-1;
         if(nums[index]>0)
         nums [index]= -nums [index];
       }
       //disappear ele k liye
       vector<int>ans;// to store the val
       for(int i=0;i<n;i++){
        if(nums[i]>0){
            // key point:  number= index+1
            //index = number-1
            ans.push_back(i+1);
        }
       }
       return ans;
    }
};