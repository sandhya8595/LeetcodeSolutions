// Last updated: 24/03/2026, 14:28:32
class Solution {
public:
    int sumOfMultiples(int n) {
        int sum =0;
        for(int i =1;i<=n;i++){
            // check divisible condition 
            if(i%3==0 || i%5== 0 || i%7==0){
                sum+=i;
            }
        } 
        return sum;
    }
};