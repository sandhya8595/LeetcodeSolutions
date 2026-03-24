// Last updated: 24/03/2026, 14:28:54
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
         int n= arr.size();
         int maxrgt =-1;
         for(int i = n-1;i>=0;i--){
             
                int curr = arr[i];
             arr[i]=maxrgt;
             maxrgt= max(maxrgt,curr);
         }
         return arr;
    }
};