// Last updated: 24/03/2026, 14:29:00
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        // just like  two pointer
       sort(people.begin(),people.end());
        int boat =0;
         int n = people.size();
         int l =0;
           int r = n-1;
          while(l<=r){
            // heavy and light weight same person fit in the smae boat 
            if(people[l]+people[r]<=limit){
               l++;
            }
            r--;
            boat++;
          }
          return boat;
    }
};