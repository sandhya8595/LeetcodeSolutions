// Last updated: 24/03/2026, 14:28:30
class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
       int sum=0;
       int realnumber=x;
 
       while(x>0){
       int digit = x%10; // to find last digit of the number 
        sum+=digit;
        x=x/10;
       }
       if(realnumber%sum==0)
       return sum;
       else
        return -1;
    }
};