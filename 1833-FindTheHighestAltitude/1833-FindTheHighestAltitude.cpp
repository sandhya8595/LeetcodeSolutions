// Last updated: 24/03/2026, 14:28:45
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
         int  alt=0;
         int sum =0;
         int maxAlt=0;
         int  n= gain.size();
         for(int i =0;i<n;i++){
            sum+=gain[i];
            maxAlt = max(sum,maxAlt);
         }
         return maxAlt;
    }
};