// Last updated: 24/03/2026, 14:31:04
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int k =0;//count of elemtnt initially  point a current value 
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                nums[k]=nums[i];
                k++;
            }
        }
        return k; //this will output
    }
};