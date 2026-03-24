// Last updated: 24/03/2026, 14:28:37
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    // optimal approach 
     int n = nums.size();
     int posIndex=0;
     int negIndex=1;
     vector<int> result(n);

     for(int i =0;i<n;i++){
        if(nums[i]>0){
            result[posIndex]= nums[i];
            posIndex +=2;
        }
        else{
             result[negIndex] = nums[i];
          negIndex +=2;  
        }
     }
     return result;
    }
};