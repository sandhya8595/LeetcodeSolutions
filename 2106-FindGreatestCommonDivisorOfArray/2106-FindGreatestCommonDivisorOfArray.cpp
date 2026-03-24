// Last updated: 24/03/2026, 14:28:40
class Solution {
public:
    int findGCD(vector<int>& nums) {
 int min = *min_element(nums.begin(),nums.end());// to get minimum value 
 int max = *max_element(nums.begin(),nums.end());// to get max value
   
   return gcd(min,max);//which is common in both function then simply return 
       }
};