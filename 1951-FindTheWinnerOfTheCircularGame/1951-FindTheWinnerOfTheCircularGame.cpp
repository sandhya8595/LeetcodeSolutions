// Last updated: 24/03/2026, 14:28:42
class Solution {
public:
int winner(int n ,int k){
    if(n==1){//base case
    //emnt eliminate honge then simply return
        return 0;
    }
        return (winner(n-1,k)+k)%n;
    }
    int findTheWinner(int n, int k) {
        return winner(n,k)+1;
    }
};