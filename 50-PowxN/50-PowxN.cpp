// Last updated: 24/03/2026, 14:30:50
class Solution {
 public:
    double myPow(double x, int n) {
          
          //these are the constant operation 
       if(n==0) return 1.0;
       if(x==0) return 0;
       if(x==1) return 1.0;
       if(x==-1 && n%2==0) return 1.0;
       if(x==-1 && n%2!=0) return -1.0;
      // when number is given negative form
        long binForm = n; 
        if(n<0)//negative number
        {
            x=1/x;
            binForm = - binForm;
        }
        //binary exponetial
           double ans=1;
           while(binForm>0){
             if(binForm%2==1){
                ans *= x;
             }
              x *= x;
              binForm /= 2;
           }
           return ans;
       }
    };