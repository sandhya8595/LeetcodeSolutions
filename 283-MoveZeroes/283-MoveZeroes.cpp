// Last updated: 24/03/2026, 14:29:34
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int k=0;
        vector<int>result(n);//result is just like a newarray
        for(int  i=0;i<n;i++){
            if(nums[i]!=0){
                //if  not zero then stored in newarray
                result[k]=nums[i];
                k++;
            }
        }
            for(;k<n;k++){
           result [k]=0;
        }
        nums=result;
        
    }
};