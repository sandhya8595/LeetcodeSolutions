// Last updated: 24/03/2026, 14:28:52
class Solution {
public:
    int numberOfSteps(int num) {
        int steps=0;
        while(num>0){
          if(num%2==0){
             num=num/2;
            } 
           else{
               num = num-1;
              }
         steps++;
        }
        return steps;
    }
};