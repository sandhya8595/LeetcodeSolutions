// Last updated: 24/03/2026, 14:29:59
class Solution {
public:
    int trailingZeroes(int n){
int count = 0;
while(n>=5){
    count = count + n/5;// multiple of two  is  grater than 5 (less)
    n=n/5;
}  
return count;      
    }
};
// when  t.c  of  recursion and iteration is same then we use recurson otherwise no...
// recursion me  fact ki t.c very worst :- 2^n