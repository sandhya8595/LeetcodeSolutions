// Last updated: 31/07/2026, 12:50:52
class Solution {
public:
    int getMaximumGenerated(int n) {

     if(n<=0) return n;
       vector<int>nums(n+1,0);
     
       nums[1]=1;
     
      int maxi=1;

       for(int i =2;i<=n;i++){
       if(i%2==0)
       nums[i]=nums[i/2]; //nums[2]=1
       else
        nums[i]=nums[i/2]+nums[i/2 +1];
       
        maxi=max(maxi,nums[i]);
       }

       return maxi;
    }
};