// Last updated: 24/03/2026, 14:28:53
class Solution {
public:
    int subtractProductAndSum(int n) {
         int sum =0;
         int product=1;
         int sub;
         for(int i=0;i<n;i++){
            // for sum
            sum+=i;
         while(n>0){
            // to find peoduct 
           int digit=n%10;
           sum = sum+digit;
           product*= digit;
           n=n/10;
         }
         }
         return product-sum;
    }
};