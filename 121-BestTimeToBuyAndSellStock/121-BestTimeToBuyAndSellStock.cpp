// Last updated: 24/03/2026, 14:30:23
class Solution {
public:
//optimal approach
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int bestBuy=prices[0]; //minimum value of arr

        for(int i=1;i<prices.size();i++){
            if(prices[i]>bestBuy){
               maxProfit=max(maxProfit,prices[i]-bestBuy);
            }
            bestBuy =min(bestBuy,prices[i]);
        }
        return maxProfit;
    }
};