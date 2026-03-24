// Last updated: 24/03/2026, 14:30:01
class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int candidate=0;
         int vote=0;
        for(int i=0;i<nums.size();i++){
         if(vote==0){
            candidate=nums[i];
         }
         if(nums[i]==candidate){
            vote++;
         }
         else{
            vote--;
         } 
        }
         return candidate;
    }  
};
