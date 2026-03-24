// Last updated: 24/03/2026, 14:28:58
class Solution {
public:
    int fib(int n) {
        if(n==0||n==1){
            return n;
        }
        return fib(n-1)+fib(n-2);
    }
};