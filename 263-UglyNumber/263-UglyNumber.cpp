// Last updated: 24/03/2026, 14:29:37
class Solution {
public:
    bool isUgly(int n) {
      if(n<=0)
      return false;

       while(n%2==0){
        n= n/2;
       } 
       while(n%3==0){
        n= n/3;
       }
       while(n%5==0){
        n= n/5;
       }  
       return n==1;  
    }
};
//prime factors are only 2, 3, and 5 then ugly .7,11,13 is not consider in this  code