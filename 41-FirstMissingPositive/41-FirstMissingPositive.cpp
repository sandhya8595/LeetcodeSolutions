// Last updated: 25/03/2026, 20:07:32
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
      // range
      for(int i =0;i<n;i++){
       
        while(nums[i]>0 && nums[i]<=n && nums[i]!=nums[nums[i]-1]){
            swap(nums[i],nums[nums[i]-1]);   // nums[j] .. j = nums[i]-1
        }
      }
      // for positive integer
      for(int i =0;i<n;i++){
        if(nums[i]!= i+1){
            return i+1;    
        }
      }
            return n+1;
      
    }
};

// the output(positive integer me output) is searching  in the form of  range only ....thats why cyclic sort used here