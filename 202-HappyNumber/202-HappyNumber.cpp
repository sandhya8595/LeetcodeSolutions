// Last updated: 24/03/2026, 14:29:56
class Solution {
public:
 int ss(int n){
    int sum=0;
    while(n>0){
          int digit=n%10;   // to find last digit of a number 19=9..      
           sum+= digit*digit; // to sqr last digit
           n = n/10; 
       }
       return sum; 
    } 

  bool isHappy(int n) {
         int slow = n;
         int fast = n;

           do{
              slow= ss(slow);
              fast=ss(ss(fast));
           }
           while(slow != fast);
            return slow==1;
      }
};