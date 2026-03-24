// Last updated: 24/03/2026, 14:29:51
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int minlen=INT_MAX;
        
        int sum = 0;
        int i = 0;
       // to store the value of i-j+1
        for(int j=0;j<n;j++){
          
                sum += nums[j];
                // if we use if condition  then all cases is not running
                while(sum>=target){
                     int len = j-i+1;
                    minlen= min(minlen,len);
                    sum -= nums[i];
                   i++; 
                 
                 } 
            } 

        if(minlen == INT_MAX)
                return 0;
                return minlen;
             
    }
};