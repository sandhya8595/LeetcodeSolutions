// Last updated: 13/06/2026, 22:53:23
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
      sort(nums.begin(),nums.end()); 

     //pair +sum
     int sum=0;
     for(int i =0;i<nums.size();i+=2){
        sum+=nums[i];
     }
     return sum;
    }
};

 //repeation allow nhi haii aur pair optimal hona chhiye mtlb hr elmnt sirf ek bar use higa,,
 //elmt vahi repet hoga jo do bar original array me ayega