// Last updated: 24/03/2026, 14:29:16
class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num<=0) return false;
        int sum=0;
        for(int i =1;i<num;i++){
            if(num%i==0){    // n%i == remender
                sum+=i;
            }
        }
        return sum==num;
    }
};