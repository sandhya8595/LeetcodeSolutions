// Last updated: 24/03/2026, 14:28:50
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
         int maxCandy = 0;

        int n = candies.size();
        
        for(int i =0;i<n;i++){
            if(candies[i]>maxCandy){
                maxCandy = candies[i];
            }
        }

        vector<bool>result(n);
            //for candies
            for(int i =0;i<n;i++){
             if(candies[i]+extraCandies >= maxCandy){
               result[i] = true;
             }
             else{
               result[i] = false;
             }
           }
         return result; 
    }
};