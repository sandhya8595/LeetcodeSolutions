// Last updated: 24/03/2026, 14:29:25
class Solution {
public:
    int thirdMax(vector<int>& nums) {
         int n = nums.size();
         long long first_max= LONG_MIN;
        long long second_max= LONG_MIN;
        long long third_max= LONG_MIN;
      
        //to skip the value
         for(int i = 0;i<n;i++){
             long long x = nums[i];
            if(x== first_max || x== second_max || x== third_max){
            continue;   
         }
            if(x>first_max){
                third_max= second_max;
                second_max=first_max;
                first_max=x;
            }  
            else if(x>second_max){
                third_max= second_max;
                second_max=x;
            }
             else if(x>third_max){
                third_max=x;
            }
         }
        if(third_max==LONG_MIN)
            return first_max;
        return third_max;
    }
};